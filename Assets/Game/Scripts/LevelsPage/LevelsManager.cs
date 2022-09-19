using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Firestore;
using Firebase.Extensions;
using TMPro;
using System.Linq;
using System;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LevelsManager : MonoBehaviour
{
    [SerializeField] private GameObject _levels; // the level prefab
    [SerializeField] private Transform _levelsParent; // root canvas
    [SerializeField] private Button _back; // back to main page button
    [SerializeField] private User user;

    //[SerializeField] private ModuleLevel lvl; // ModuleLevel data asset
    private FirebaseFirestore _db;
    void Awake()
    {
        //_db = Operations.db;
        //TESTING PURPOSES
        _db = FirebaseFirestore.DefaultInstance;
        _back.onClick.AddListener(()=>
        {
            SceneManager.LoadScene("MainPage");
        });
        InstantiateLevels();
    }

    void InstantiateLevels()
    {
        int currentLevel = 1;
        GameObject newLevel = Instantiate(_levels, _levelsParent);
        //Query allLevelsQuery = db.Collection("Modules");
        CollectionReference allLevelsQuery = _db.Collection("Level");
        allLevelsQuery.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            QuerySnapshot allLevelsQuerySnapshot = task.Result;
            Debug.Log("task: " + task.IsCompletedSuccessfully);
            Debug.Log("task count: " + allLevelsQuerySnapshot.Count);
            foreach (DocumentSnapshot documentSnapshot in allLevelsQuerySnapshot.Documents)
            {
                if (documentSnapshot.Exists)
                {
                    //LevelsButtonManager btn1 = newLevel.transform.Find("Level1").GetComponent<LevelsButtonManager>();
                    //LevelsButtonManager btn2 = newLevel.transform.Find("Level2").GetComponent<LevelsButtonManager>();
                    Dictionary<string, object> level = documentSnapshot.ToDictionary();
                    {
                        //if (currentLevel == 1)
                        //{
                        //    //string levelNo = level["LevelNo"].ToString();
                        //    //string levelNo = documentSnapshot.Id;

                        //    ////string title = level["Title"].ToString();
                        //    //newLevel.transform.Find("Level1").transform.Find("Level").GetChild(0).GetComponent<TextMeshProUGUI>().text = levelNo;
                        //    //newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;

                        //    //newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(1).GetComponent<TextMeshProUGUI>().text = title;
                        //    currentLevel+=1;
                        //}
                        //else if (currentLevel > 0 && currentLevel%2 == 0)
                        //{
                        //    string levelNo = level["LevelNo"].ToString();
                        //    string title = level["Title"].ToString();
                        //    newLevel.transform.Find("Level2").gameObject.SetActive(true);
                        //    newLevel.transform.Find("Level2").transform.Find("Level").GetChild(0).GetComponent<TextMeshProUGUI>().text = levelNo;
                        //    newLevel.transform.Find("Level2").transform.Find("ModuleInfo").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;
                        //    newLevel.transform.Find("Level2").transform.Find("ModuleInfo").GetChild(1).GetComponent<TextMeshProUGUI>().text = title;
                        //    currentLevel+=1;
                        //}
                        //else
                        //{
                        //    newLevel = Instantiate(Levels, LevelsParent);
                        //    string levelNo = level["LevelNo"].ToString();
                        //    string title = level["Title"].ToString();
                        //    newLevel.transform.Find("Level1").transform.Find("Level").GetChild(0).GetComponent<TextMeshProUGUI>().text = levelNo;
                        //    newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;
                        //    newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(1).GetComponent<TextMeshProUGUI>().text = title;
                        //    currentLevel+=1;
                        //}
                    }
                    try
                    {
                        if (currentLevel == 1)
                        {
                            LevelsButtonManager btn1 = newLevel.transform.Find("Level1").GetComponent<LevelsButtonManager>();
                            //newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(1).GetComponent<TextMeshProUGUI>().text = title;
                            btn1.CurrId = documentSnapshot.Id;
                            btn1.ModuleId = level["Module"].ToString();
                            List<object> songs = level["Songs"] as List<object>;
                            List<string> currSongArr = new List<string>();
                            foreach (object song in songs)
                            {
                                currSongArr.Add(song.ToString());
                            }
                            btn1.SongId = currSongArr;

                            newLevel.transform.Find("Level1").transform.Find("Level").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;
                            //Debug.Log("LevelsManager: " + documentSnapshot.Id);
                            currentLevel += 1;
                        }
                        else if (currentLevel > 0 && currentLevel % 2 == 0)
                        {
                            LevelsButtonManager btn2 = newLevel.transform.Find("Level2").GetComponent<LevelsButtonManager>();
                            //string levelNo = level["LevelNo"].ToString();
                            //string title = level["Title"].ToString();
                            newLevel.transform.Find("Level2").gameObject.SetActive(true);
                            //newLevel.transform.Find("Level2").transform.Find("ModuleInfo").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;
                            //newLevel.transform.Find("Level2").transform.Find("ModuleInfo").GetChild(1).GetComponent<TextMeshProUGUI>().text = title;
                            btn2.CurrId = documentSnapshot.Id;
                            btn2.ModuleId = level["Module"].ToString();
                            List<object> songs = level["Songs"] as List<object>;
                            List<string> currSongArr = new List<string>();
                            foreach (object song in songs)
                            {
                                currSongArr.Add(song.ToString());
                            }
                            btn2.SongId = currSongArr;
                            //Debug.Log("LevelsManager: %2==0" + documentSnapshot.Id);
                            //Debug.Log("LevelsManager: %2==0" + btn2.SongId.Count);
                            newLevel.transform.Find("Level2").transform.Find("Level").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;
                            
                            if (user.Level < currentLevel)
                            {
                                btn2.disableBtn();
                            }

                            currentLevel += 1;
                        }
                        else
                        {
                            newLevel = Instantiate(_levels, _levelsParent);
                            LevelsButtonManager btn1 = newLevel.transform.Find("Level1").GetComponent<LevelsButtonManager>();

                            //string levelNo = level["LevelNo"].ToString();
                            //string title = level["Title"].ToString();
                            //newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;
                            //newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(1).GetComponent<TextMeshProUGUI>().text = title;
                            btn1.CurrId = documentSnapshot.Id;
                            btn1.ModuleId = level["Module"].ToString();
                            List<object> songs = level["Songs"] as List<object>;
                            List<string> currSongArr = new List<string>();
                            foreach (object song in songs)
                            {
                                currSongArr.Add(song.ToString());
                            }
                            btn1.SongId = currSongArr;
                            //Debug.Log("LevelsManager: new pair" + documentSnapshot.Id);

                            if (user.Level < currentLevel)
                            {
                                btn1.disableBtn();
                            }

                            newLevel.transform.Find("Level1").transform.Find("Level").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;
                            currentLevel += 1;
                        }
                    }catch(Exception e)
                    {
                        Debug.Log(e);
                    }
                }
            }
        });
    }
}
