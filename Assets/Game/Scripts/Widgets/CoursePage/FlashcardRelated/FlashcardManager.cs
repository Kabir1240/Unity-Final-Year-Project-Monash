using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Firestore;
using Firebase.Extensions;
using System;
using System.IO;

using TMPro;
using Firebase.Storage;
using UnityEngine.UI;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;

public class FlashcardManager : MonoBehaviour
{
    [SerializeField] private Dictionary<string, FlashcardInterface> _types = new Dictionary<string, FlashcardInterface>();
    [SerializeField] private GameObject _initialPos;
    [SerializeField] private GameObject _parent;
    [SerializeField] private ModuleLevel lvl;
    [SerializeField] Button backBtn;
    //[SerializeField] private test_rawimg script;

    private FirebaseFirestore _db;
    private List<Dictionary<string,object>> _flashcardsArray;
    private List<GameObject> _flashcardObjectsArray;
    private string _lvlTitle, _subheading;
    private int _pointer;

    // maximum store 10 flashcards object at once
    private int _start = 0;
    private int _end = 0;

    public FirebaseStorage storage;
    public StorageReference storageRef;

    void Start()
    {
        //initialize all the flashcard types in the inspector

        _initialPos.SetActive(false);
        _db = FirebaseFirestore.DefaultInstance;
        Debug.Log("initialized firestore");

        // initialize _types
        _types.Add("title", new Title());
        _types.Add("content", new Content());
        _types.Add("content-img", new ContentImage());
        _types.Add("content-bullet", new ContentBullet());
        _types.Add("img", new Image());

        Debug.Log("added all the types");

        storage = FirebaseStorage.DefaultInstance;
        storageRef = storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");

        _flashcardsArray = new List<Dictionary<string, object>>();
        _flashcardObjectsArray = new List<GameObject>();

        backBtn.onClick.AddListener(BackToEachPlanet);

        LoadData();

    }

    public int TotalFlashcards()
    {
        Debug.Log("total: " + _flashcardsArray.Count);
        return _flashcardsArray.Count;
    }

    public int GetPointer()
    {
        return _pointer;
    }

    public bool Next()
    {
        Debug.Log("Next flashcard");
        // hide the current flashcard
        GameObject currentObj = _flashcardObjectsArray[_pointer];
        currentObj.SetActive(false);

        //increment the pointer
        if (_pointer + 1 < _flashcardObjectsArray.Count)
        {
            _pointer++;
        }

        // if the pointer exceeds the pointer to the last flashcard we have instantiated (meaning we need to instantiate more)
        if (_pointer == _end + 1)
        {
            // destroy the earliest flashcard
            if (_flashcardObjectsArray[_start] != null && _end - _start + 1 > 9)
            {
                Destroy(_flashcardObjectsArray[_start]);
                _flashcardObjectsArray[_start] = null;
                _start++;
            }

            // increment the counters to keep only 10 flashcards in the scene
            // if the end of the flashcard is not reached (as if it is reached, no more new instantiation needed)
            if (_end + 1 < _flashcardObjectsArray.Count)
            {
                _end++;
            }
          
            // save the latest flashcard
            GameObject newObj = InstantiateCard(_flashcardsArray[_end]);
            _flashcardObjectsArray[_end] = newObj;
        }

        // unhide the current flashcard
        currentObj = _flashcardObjectsArray[_pointer];
        currentObj.SetActive(true);

        // if current flashcard is of quiz type, disable the next button

        if(_pointer + 1 == _flashcardObjectsArray.Count)
        {
            Debug.Log("Reached end");
            return false;
        }
        return true;
    }

    public bool Previous()
    {
        Debug.Log("Prev flashcard");
        // hide the current flashcard
        GameObject currentObj = _flashcardObjectsArray[_pointer];
        currentObj.SetActive(false);

        //increment the pointer
        if (_pointer -1 >= 0)
        {
            _pointer--;
        }
        

        // if the pointer exceeds the pointer to the earliest flashcard we have instantiated (meaning we need to instantiate the previous ones)
        if (_pointer == _start - 1)
        {
            // destroy the earliest flashcard
            if (_flashcardObjectsArray[_end] != null && _end - _start + 1 > 9)
            {
                Destroy(_flashcardObjectsArray[_end]);
                _flashcardObjectsArray[_end] = null;
                _end--;
            }

            // increment the counters to keep only 10 flashcards in the scene
            // if the end of the flashcard is not reached (as if it is reached, no more new instantiation needed)
            if (_start -1 >= 0)
            {
                _start--;
            }

            // save the latest flashcard
            GameObject newObj = InstantiateCard(_flashcardsArray[_start]);
            _flashcardObjectsArray[_start] = newObj;
        }

        // unhide the current flashcard
        currentObj = _flashcardObjectsArray[_pointer];
        currentObj.SetActive(true);
        if (_pointer == 0)
        {
            return false;
        }
        return true;
    }

    // will be given the raw collection data
    public void LoadData()
    {
        // setting the title of the flashcard
        _lvlTitle = lvl.Title;
        string moduleId = lvl.Module_id;

        // try load data
        CollectionReference flashcards = _db.Collection("Modules").Document(moduleId).Collection("Flashcards");
        //_db.Collection("Modules").Document(moduleId).GetSnapshotAsync().ContinueWithOnMainThread(task =>
        //{
        //    DocumentSnapshot snapshot = task.Result;
        //    if (snapshot.Exists)
        //    {
        //        Dictionary<string, object> currDoc = snapshot.ToDictionary();
        //        Debug.Log(currDoc);
        //        flashcards = _db.Collection("Modules").Document(moduleId).Collection("Flashcards");
        //    }
        //});
        Debug.Log(flashcards);

        Debug.Log("sucessfully retrieved collection reference");

        // getting the data from the collection and putting it to an arraylist
        flashcards.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            Debug.Log("getting all flashcards");
            QuerySnapshot allFlashcardsQuerySnapshot = task.Result;

            foreach (DocumentSnapshot documentSnapshot in allFlashcardsQuerySnapshot.Documents)
            {
                Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
                Dictionary<string, object> flashcard = documentSnapshot.ToDictionary();
                // adding the collection of flashcards to an arraylist so we can have random access
                string type = Convert.ToString(flashcard["Type"]);
                if(type== "quiz-text" || type == "quiz-text-img" || type == "quiz-radio" || type == "quiz-radio-img")
                {
                    Debug.Log("quiz");
                }
                else
                {
                    _flashcardsArray.Add(flashcard);
                    _flashcardObjectsArray.Add(null);
                }
            }

            // instantiate the first flashcard
            InstantiateCard((Dictionary<string, object>)_flashcardsArray[0]);
        });
    }

    private GameObject InstantiateCard(Dictionary<string, object> flashcard)
    {
        // get the type of the flashcard
        string type = Convert.ToString(flashcard["Type"]);
        Debug.Log(type);

        // if type == "title" set the latest subheading string to the content
        if (type == "title")
        {
            _subheading = Convert.ToString(flashcard["Content"]);
        }

        Debug.Log(_subheading + " " + _lvlTitle);

        // instantiate game object to the screen
        GameObject currObject = _types[type].setAllData(flashcard, _lvlTitle, _subheading, _pointer+1, this);

        Debug.Log("finished setting new flashcard");

        GameObject result = Instantiate(currObject, _parent.transform);

        if (type == "content-bullet")
        {
            bullet(result, flashcard);
        }
        else if (type == "content-img" || type == "img")
        {
            downloadImage(result, flashcard);
        }

        // saving the created game object
        _flashcardObjectsArray[_pointer] = result;
        Debug.Log(_pointer + ": " + _flashcardObjectsArray[_pointer]);
        return result;
    }

    // directly put the filename without .prefab to the parameter
    public static UnityEngine.Object LoadPrefabFromFile(string filename)
    {
        Debug.Log("Trying to load LevelPrefab from file (" + filename + ")...");
        var loadedObject = Resources.Load("Materials/Prefabs/" + filename);
        if (loadedObject == null)
        {
            throw new FileNotFoundException("...no file found - please check the configuration");
        }
        return loadedObject;
    }


    // extra functionalities that needs monobehaviour
    // for ContentBullet
    private void bullet(GameObject flashcardObject, Dictionary<string, object> flashcard)
    {
        List<object> bullets = flashcard["Bullet"] as List<object>;
        Debug.Log("making bullets");

        Transform bulletParent = flashcardObject.transform.Find("BulletGroup").transform;
        foreach (object bullet in bullets)
        {

            GameObject bulletObject = (GameObject)LoadPrefabFromFile("BulletContent");
            GameObject parent = bulletObject.transform.Find("Bullet").gameObject;
            TextMeshProUGUI bulletContentObj = parent.transform.Find("Content").GetComponent<TextMeshProUGUI>();
            bulletContentObj.text = Convert.ToString(bullet); ;

            // instantiate child and set its parent to the vertical layout group
            GameObject child = Instantiate(bulletObject, _parent.transform);
            child.transform.SetParent(bulletParent);
        }
        return;
    }

    // for ContentImage
    public GameObject downloadImage(GameObject flashcardObj, Dictionary<string, object> flashcard)
    {
        // TODO: FOR TESTING PURPOSES ONLY DELETE THIS
        if (Convert.ToString(flashcard["Image"]) == "")
        {
            return flashcardObj;
        }
        StorageReference imagesRef = storageRef.Child(Convert.ToString(flashcard["Image"]));

        // Fetch the download URL
        imagesRef.GetDownloadUrlAsync().ContinueWithOnMainThread(task =>
        {
            if (!task.IsFaulted && !task.IsCanceled)
            {
                Debug.Log("Download URL: " + task.Result);
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), _parent.transform.Find("FlashcardContentImage(Clone)").gameObject));
                StartCoroutine(isDownloading(Convert.ToString(task.Result), flashcardObj));

            }
        });

        return null;
    }
    // source: https://answers.unity.com/questions/1122905/how-do-you-download-image-to-uiimage.html
    // the one without www: https://github.com/Vikings-Tech/FirebaseStorageTutorial/blob/master/Assets/Scripts/ImageLoader.cs
    private IEnumerator isDownloading(string url, GameObject flashcard)
    {

        UnityWebRequest request = UnityWebRequestTexture.GetTexture(url);
        yield return request.SendWebRequest();
        Debug.Log("finished request");
        if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
        {
            Debug.Log(request.error);
        }

        else
        {
            RawImage thePic = flashcard.transform.Find("Canvas").gameObject.transform.Find("Image").gameObject.GetComponent<RawImage>();
            Debug.Log(thePic);
            thePic.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
        }

    }

    private void BackToEachPlanet()
    {
        Debug.Log("FlashcardManager: Back to each planet page");
        SceneManager.LoadScene("EachPlanetPage");
    }

}
