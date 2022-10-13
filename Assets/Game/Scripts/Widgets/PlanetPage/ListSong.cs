using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//for UI
using UnityEngine.UI;
//for Firebase
using Firebase;
using Firebase.Database;
//for changing page
using UnityEngine.SceneManagement;
using System.IO;
using Firebase.Firestore;
using TMPro;
using Firebase.Extensions;
using System;

/**
 * This class is the controller for the EachPlanetLevelPage where it holds
 * all the logic to instantiate the contents of each level, as well as
 * adding logic to the interactable UI elements
 */

public class ListSong : MonoBehaviour
{
    List<string> SongList;

    [SerializeField] Button modulebtn; // button to go to module page
    [SerializeField] Button back; // button to go to all levels page
    [SerializeField] Button quizBtn; // button to go to quiz page
    [SerializeField] Button instructionBtn;

    [SerializeField] TextMeshProUGUI moduleTitle; // the current level's module title
    [SerializeField] TextMeshProUGUI planet; // the current level's name

    [SerializeField] GameObject contentList; // the vertical group container for the songs
    [SerializeField] GameObject mainParent; // the root canvas
    [SerializeField] GameObject instructionContainer;

    [SerializeField] Level level; // Level Data Asset
    [SerializeField] Song song; // Song Data Asset
    [SerializeField] ModuleLevel moduleLvl; // Module Level Data Asset
    [SerializeField] User user; // User Data Asset
    [SerializeField] Instructions instruction;

    private GameObject _songList; // the song list prefab
    private FirebaseFirestore _db; // the reference to database
    //private SongBtn songData;

    // Start is called before the first frame update
    void Start()
    {
        _songList = (GameObject)Operations.GetInstance().LoadPrefabFromFile("Prefabs/SongList");
        _db = Operations.db;
        planet.text = "Planet " + level.LevelId;
        //songData = _songList.GetComponent<SongBtn>();
        back.onClick.AddListener(() =>
        {
            LoadScene("PlanetMainPage");
        });
        Debug.Log("ListSong: level obj" + level.LevelId + ", song count: " + level.SongIds.Count + " quiz pass: " + user.QuizPass+" lvl max exp: "+level.MaxExp);
        quizBtn.onClick.AddListener(() =>
        {
            SceneManager.LoadScene("Quiz");
        });
        instructionBtn.onClick.AddListener(() =>
        {
            instructionContainer.SetActive(true);
            instruction.Open();
            instructionBtn.gameObject.SetActive(false);
        });
        StartCoroutine(InstantiateSongList());
        ModuleData();

    }

    // Fetch Module Data from database
    private void ModuleData()
    {
        DocumentReference currModule = _db.Collection("Modules").Document(level.ModuleId);
        currModule.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            Debug.Log("ListSong: getting module " + level.ModuleId);
            DocumentSnapshot documentSnapshot = task.Result;
            Debug.Log("ListSong: getting module status" + task.IsCompletedSuccessfully);

            Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
            Dictionary<string, object> module = documentSnapshot.ToDictionary();
            // adding the collection of flashcards to an arraylist so we can have random access

            try
            {
                moduleLvl.Module_id = level.ModuleId;
                moduleLvl.Title = module["Title"].ToString();

                moduleTitle.text = moduleLvl.Title;
                modulebtn.onClick.AddListener(() =>
                {
                    LoadScene("CoursePage");
                });
            }catch(Exception e)
            {
                Debug.Log("ListSong: error " + e);
                //SceneManager.LoadScene("PlanetMainPage");
            }
        });
    }

    //private IEnumerator GetSongInfo(string currSongLevel)
    //{
    //    DocumentReference currSong = _db.Collection("Songs").Document(currSongLevel);
    //    yield return currSong.GetSnapshotAsync().ContinueWithOnMainThread(task =>
    //    {
    //        Debug.Log("ListSong: getting song " + currSongLevel);
    //        DocumentSnapshot documentSnapshot = task.Result;
    //        Debug.Log("ListSong: getting song status" + task.IsCompletedSuccessfully);
    //        Debug.Log("ListSong: getting song status" + (task.IsFaulted || task.IsCanceled));

    //        Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
    //        Dictionary<string, object> song = documentSnapshot.ToDictionary();
    //        // adding the collection of flashcards to an arraylist so we can have random access

    //        GameObject button = (GameObject)Instantiate(_songList, contentList.transform);
    //        SongBtn songData = _songList.GetComponent<SongBtn>();
    //        songData.SongId = documentSnapshot.Id;
    //        songData.Title = song["Title"].ToString();
    //        songData.MidiLocation = song["Midi"].ToString();
    //        songData.WavLocation = song["Sound"].ToString();
    //        songData.Difficulty = Convert.ToInt32(song["Difficulty"]);
    //        songData.SetUI();
    //        //GameObject button = (GameObject)Instantiate(_songList, contentList.transform);

    //        //button.transform.parent = _songList;
    //    });
    //}

    // Instantiating the song list prefabs
    private IEnumerator InstantiateSongList()
    {
        //fetch data from database
        // Get the root reference location of the database
        //GameObject button = (GameObject)Instantiate(_songList, contentList.transform);
        foreach (string currSongLevel in level.SongIds)
        {
            DocumentReference currSong = _db.Collection("Songs").Document(currSongLevel);
            yield return currSong.GetSnapshotAsync().ContinueWithOnMainThread(task =>
            {
                Debug.Log("ListSong: getting song " + currSongLevel);
                DocumentSnapshot documentSnapshot = task.Result;
                Debug.Log("ListSong: getting song status" + task.IsCompletedSuccessfully);
                Debug.Log("ListSong: getting song status" + (task.IsFaulted || task.IsCanceled));

                Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
                Dictionary<string, object> song = documentSnapshot.ToDictionary();
                // adding the collection of flashcards to an arraylist so we can have random access
                GameObject button = (GameObject)Instantiate(_songList, contentList.transform);
                SongBtn songData = button.GetComponent<SongBtn>();
                songData.SongId = documentSnapshot.Id;
                try
                {
                    //GameObject button = (GameObject)Instantiate(_songList, contentList.transform);
                    //SongBtn songData = button.GetComponent<SongBtn>();
                    //songData.SongId = documentSnapshot.Id;
                    songData.Title = song["Title"].ToString();
                    Debug.Log("title: " + song["Title"].ToString());
                    songData.MidiLocation = song["Midi"].ToString();
                    songData.WavLocation = song["Sound"].ToString();
                    songData.Difficulty = Convert.ToInt32(song["Difficulty"]);
                    songData.SetUI();

                    // only triggered if the current level's quiz is not passed yet so it shouldn't affect other unlocked level's songs
                    if (user.Level == Convert.ToInt32(level.LevelId))
                    {
                        songData.toggle(user.QuizPass);
                    }
                }catch(Exception e)
                {
                    songData.Title = "ERROR";
                    songData.Difficulty = 0;
                    songData.SetUI();
                    Debug.Log("ListSong: error " + e);
                    //SceneManager.LoadScene("PlanetMainPage");
                }

                //GameObject button = (GameObject)Instantiate(_songList, contentList.transform);

                //button.transform.parent = _songList;
            });
        }
    }

    //// directly put the filename without .prefab to the parameter
    //public static UnityEngine.Object LoadPrefabFromFile(string filename)
    //{
    //    Debug.Log("Trying to load LevelPrefab from file (" + filename + ")...");
    //    var loadedObject = Resources.Load("Materials/Prefabs/" + filename);
    //    if (loadedObject == null)
    //    {
    //        throw new FileNotFoundException("...no file found - please check the configuration");
    //    }
    //    return loadedObject;
    //}

    //helper function to change page
    void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
}
