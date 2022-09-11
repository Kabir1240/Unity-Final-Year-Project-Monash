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

public class ListSong : MonoBehaviour
{
    List<string> SongList;

    [SerializeField] Button modulebtn;
    [SerializeField] TextMeshProUGUI moduleTitle;
    [SerializeField] GameObject contentList;
    [SerializeField] GameObject mainParent;
    [SerializeField] Level level;
    [SerializeField] Song song;
    [SerializeField] ModuleLevel moduleLvl;
    [SerializeField] TextMeshProUGUI planet;

    private GameObject _songList;
    private FirebaseFirestore _db;

    // Start is called before the first frame update
    void Start()
    {
        _songList = (GameObject)LoadPrefabFromFile("SongList");
        _db = FirebaseFirestore.DefaultInstance;
        planet.text = "Planet " + level.LevelId;
        InstantiateSongList();
        ModuleData();

    }

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

            moduleLvl.Module_id = level.ModuleId;
            moduleLvl.Title = module["Title"].ToString();

            moduleTitle.text = moduleLvl.Title;
            modulebtn.onClick.AddListener(() =>
            {
                LoadScene("CoursePage");
            });
        });
    }

    private void InstantiateSongList()
    {
        //fetch data from database
        // Get the root reference location of the database
        GameObject button = (GameObject)Instantiate(_songList, contentList.transform);
        foreach (string currSongLevel in level.SongIds)
        {
            DocumentReference currSong = _db.Collection("Songs").Document(currSongLevel);
            currSong.GetSnapshotAsync().ContinueWithOnMainThread(task =>
            {
                Debug.Log("ListSong: getting song " + currSongLevel);
                DocumentSnapshot documentSnapshot = task.Result;
                Debug.Log("ListSong: getting song status" + task.IsCompletedSuccessfully);

                Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
                Dictionary<string, object> song = documentSnapshot.ToDictionary();
                // adding the collection of flashcards to an arraylist so we can have random access

                SongBtn songData = button.GetComponent<SongBtn>();
                songData.SongId = documentSnapshot.Id;
                songData.Title = song["Title"].ToString();
                songData.MidiLocation = song["Midi"].ToString();
                songData.WavLocation = song["Sound"].ToString();
                songData.Difficulty = Convert.ToInt32(song["Difficulty"]);
                songData.SetUI();

                //button.transform.parent = _songList;
            });

        }
        //DocumentReference reference = 

        //accessing Level database
        //reference.GetReference("Level").GetValueAsync().ContinueWithOnMainThread(task =>
        //{
        //    if (task.IsCompleted)
        //    {
        //        //snapshot shows all data of Level
        //        DataSnapshot snapshot = task.Result;

        //        //looping through the SongIds list to get all song title to be displayed
        //        for (var i = 0; i < snapshot.SongIds.Count; i++)
        //        {
        //            current = snapshot.SongIds[i];
        //            current_title = current.Title;

        //            //adding the title songs into the song list
        //            SongList.Add(current_title.ToString());
        //        }
        //    }
        //})

        ////creating the buttons & using the helper function when clicked
        //for (int i = 0; i < SongList.Count; i++)
        //{
        //    GameObject button = (GameObject)Instantiate(songbtn);
        //    button.GetComponent<Text>().text = SongList[i];
        //    button.GetComponentInChildren<Button>().onClick.AddListener(
        //        () => { LoadScene(GamePage););
        //    button.transform.parent = _songList;
        //}
    }

    private void onBtnClick()
    {

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

    //helper function to change page
    void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName);
    }
}
