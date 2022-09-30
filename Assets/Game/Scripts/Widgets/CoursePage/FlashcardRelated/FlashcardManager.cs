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
    [SerializeField] List<GameObject> interfaces;
    [SerializeField] private GameObject _initialPos;
    [SerializeField] private GameObject _parent;
    [SerializeField] private ModuleLevel lvl;
    [SerializeField] private Level planetLvl;
    [SerializeField] Button backBtn;
    [SerializeField] TextMeshProUGUI currLevel;
    [SerializeField] GameObject quizReminder;
    [SerializeField] ProgressBarCourse slider;
    [SerializeField] User user;

    private FirebaseFirestore _db;
    private List<Dictionary<string,object>> _flashcardsArray;
    private List<GameObject> _flashcardObjectsArray;
    private Dictionary<string, FlashcardInterface> _types = new Dictionary<string, FlashcardInterface>();
    private Dictionary<string, object> flashcardError = new Dictionary<string, object>();
    private string _lvlTitle, _subheading;
    private int _pointer;

    // maximum store 10 flashcards object at once
    private int _start = 0;
    private int _end = 0;

    //public static FirebaseStorage storage;
    //public static StorageReference storageRef;

    void Start()
    {
        //initialize all the flashcard types in the inspector

        _initialPos.SetActive(false);

        _db = Operations.db;

        // initialize _types
        _types.Add("title", interfaces[0].GetComponent<FlashcardInterface>());
        _types.Add("content", interfaces[1].GetComponent<FlashcardInterface>());
        _types.Add("content-img", interfaces[2].GetComponent<FlashcardInterface>());
        _types.Add("content-bullet", interfaces[3].GetComponent<FlashcardInterface>());
        _types.Add("img", interfaces[4].GetComponent<FlashcardInterface>());

        //Debug.Log("added all the types");

        // sets up the total flashcards
        currLevel.text = planetLvl.LevelId + "";

        _flashcardsArray = new List<Dictionary<string, object>>();
        _flashcardObjectsArray = new List<GameObject>();

        flashcardError.Add("Content", "THERE IS SOMETHING WRONG WITH THIS FLASHCARD, we are very sorry");

        backBtn.onClick.AddListener(BackToEachPlanet);

        LoadData();
        

    }

    public int GetPointer()
    {
        return _pointer;
    }

    public bool Next()
    {
        //Debug.Log("FlashcardManager: Next flashcard");
        slider.Next();
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
            //Debug.Log("FlashcardManager: Reached end");
            if (!user.QuizPass && (planetLvl.LevelId == user.Level+""))
            {
                quizReminder.SetActive(true);
            }
            
            return false;
        }
        return true;
    }

    public bool Previous()
    {
        //Debug.Log("Prev flashcard");
        slider.Prev();
        // hide the current flashcard
        GameObject currentObj = _flashcardObjectsArray[_pointer];
        currentObj.SetActive(false);
        quizReminder.SetActive(false);

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

        // getting the data from the collection and putting it to an arraylist
        flashcards.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            Debug.Log("FlashcardManager: getting all flashcards");
            QuerySnapshot allFlashcardsQuerySnapshot = task.Result;

            foreach (DocumentSnapshot documentSnapshot in allFlashcardsQuerySnapshot.Documents)
            {
                //Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
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
            Debug.Log("FlashcardManager: total flashcards: " + _flashcardsArray.Count);
            slider.setTotal(_flashcardsArray.Count - 1);
            // instantiate the first flashcard
            InstantiateCard((Dictionary<string, object>)_flashcardsArray[0]);
        });
    }

    private GameObject InstantiateCard(Dictionary<string, object> flashcard)
    {
        try
        {
            // get the type of the flashcard
            string type = Convert.ToString(flashcard["Type"]);
            //Debug.Log(type);

            // if type == "title" set the latest subheading string to the content
            if (type == "title")
            {
                _subheading = Convert.ToString(flashcard["Content"]);
            }

            //Debug.Log(_subheading + " " + _lvlTitle);

            // instantiate game object to the screen
            GameObject currObject = _types[type].setAllData(flashcard, _lvlTitle, _subheading, _pointer + 1);

            //Debug.Log("finished setting new flashcard");

            GameObject result = Instantiate(currObject, _parent.transform);

            FlashcardInterface instantiatedInterface = result.GetComponent<FlashcardInterface>();
            instantiatedInterface.instantiatedObjFunctionality(result, flashcard);

            // saving the created game object
            _flashcardObjectsArray[_pointer] = result;
            //Debug.Log(_pointer + ": " + _flashcardObjectsArray[_pointer]);
            return result;
        } catch (Exception e)
        {
            Debug.Log("FlashcardManager: " + e);

            GameObject currObject = _types["content"].setAllData(flashcardError, _lvlTitle, _subheading, _pointer + 1);

            //Debug.Log("finished setting new flashcard");

            GameObject result = Instantiate(currObject, _parent.transform);

            FlashcardInterface instantiatedInterface = result.GetComponent<FlashcardInterface>();
            instantiatedInterface.instantiatedObjFunctionality(result, flashcard);

            // saving the created game object
            _flashcardObjectsArray[_pointer] = result;
            //Debug.Log(_pointer + ": " + _flashcardObjectsArray[_pointer]);
            return result;

        }
    }

    private void BackToEachPlanet()
    {
        Debug.Log("FlashcardManager: Back to each planet page");
        SceneManager.LoadScene("EachPlanetPage");
    }

}
