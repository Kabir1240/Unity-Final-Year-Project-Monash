using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Firestore;
using Firebase.Extensions;
using System;
using System.IO;
using UnityEditor;
using TMPro;

public class FlashcardManager: MonoBehaviour
{
    [SerializeField]private Dictionary<string, FlashcardInterface> _types = new Dictionary<string, FlashcardInterface>();
    [SerializeField] private GameObject _initialPos;
    [SerializeField] private GameObject _parent;
    private FirebaseFirestore _db;
    private ArrayList _flashcardsArray;
    private string _lvlTitle, _subheading;
    private int _pointer;

    void Start()
    {
        //initialize all the flashcard types in the inspector

        _initialPos.SetActive(false);
        _db = FirebaseFirestore.DefaultInstance;
        Debug.Log("went here");

        // initialize _types
        _types.Add("title", new Title());
        _types.Add("content", new Content());
        _types.Add("content-img", new ContentImage());
        _types.Add("content-bullet", new ContentBullet());

        Debug.Log(_types);

        // try load data
        CollectionReference flashcardsCol = _db.Collection("Module").Document("0006").Collection("Flashcards");
        _db.Collection("Modules").Document("0006").GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            DocumentSnapshot snapshot = task.Result;
            if (snapshot.Exists)
            {
                Dictionary<string, object> currDoc = snapshot.ToDictionary();
                Debug.Log(currDoc);
                LoadData(_db.Collection("Modules").Document("0006").Collection("Flashcards"), Convert.ToString(currDoc["Title"]));

            }
        });
    }

    //// Update is called once per frame
    //void Update()
    //{

    //}

    // will be given the raw collection data
    public void LoadData(CollectionReference flashcards, string lvlTitle)
    {
        // setting the title of the flashcard
        _lvlTitle = lvlTitle;

        _flashcardsArray = new ArrayList();
        int pointer = 0;

        // getting the data from the collection and putting it to an arraylist
        flashcards.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            Debug.Log("went here 2");
            QuerySnapshot allFlashcardsQuerySnapshot = task.Result;

            foreach (DocumentSnapshot documentSnapshot in allFlashcardsQuerySnapshot.Documents)
            {
                Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
                Dictionary<string, object> flashcard = documentSnapshot.ToDictionary();
                // adding the collection of flashcards to an arraylist so we can have random access
                _flashcardsArray.Add(flashcard);
            }

            // instantiate the first flashcard
            
            InstantiateCard((Dictionary<string, object>)_flashcardsArray[2]);
        });
    }

    private void InstantiateCard(Dictionary<string,object> flashcard)
    {
        // get the type of the flashcard
        string type = Convert.ToString(flashcard["Type"]);
        Debug.Log(type);

        // if type == "title" set subheading string to the content
        if(type == "title")
        {
            _subheading = Convert.ToString(flashcard["Content"]);
        }

        Debug.Log(_subheading +" "+_lvlTitle);
        // instantiate game object to the screen
        GameObject currObject = _types[type].setAllData(flashcard, _lvlTitle, _subheading, _pointer);

        if (type == "content-bullet")
        {
            bullet(currObject, flashcard);
        }

        Debug.Log("even got here");
        Debug.Log(currObject);

        Instantiate(currObject, _parent.transform);

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

    private void bullet(GameObject flashcardObject, Dictionary<string,object> flashcard)
    {
        List<object> bullets = flashcard["Bullet"] as List<object>;
        Debug.Log("here: "+bullets);

        TextMeshProUGUI contentObj = flashcardObject.transform.Find("Content").GetComponent<TextMeshProUGUI>();
        contentObj.text = Convert.ToString(flashcard["Content"]);

        foreach (object bullet in bullets)
        {
            //Dictionary<string, object> bulletDictionary = bullet as Dictionary<string, object>;

            GameObject bulletObject = (GameObject)FlashcardManager.LoadPrefabFromFile("BulletContent");
            TextMeshProUGUI bulletContentObj = bulletObject.transform.Find("Bullet (1)").GetComponent<TextMeshProUGUI>();
            bulletContentObj.text = Convert.ToString(bullet); ;
            bulletObject.transform.position = new Vector3(contentObj.transform.position.x + 10, contentObj.transform.position.y + contentObj.renderedHeight / 2 + 10, flashcardObject.transform.position.z);

            Debug.Log(bulletObject.transform.position);
            Instantiate(bulletObject);
            //yPos = contentObj.renderedHeight / 2 + 10 + contentObj.transform.position.y;
        }
        return; 
    }
}
