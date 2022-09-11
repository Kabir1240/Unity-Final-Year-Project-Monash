﻿//using Assets;
using Firebase.Extensions;
using Firebase.Firestore;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class AchievementManager : MonoBehaviour
{

    [SerializeField] User user;
    [SerializeField] NotificationManager notifManager;

    private Dictionary<string, List<Achievement>> _allAchievements;
    public Dictionary<string, List<Achievement>> AllAchievements { get => _allAchievements; }
    //private Dictionary<string, int> _userFields = new Dictionary<string, int>();
    private FirebaseFirestore _db;


    #region singleton
    public static AchievementManager instance;

    void Awake()
    {
        DontDestroyOnLoad(this);
        if (instance == null)
        {
            _allAchievements = new Dictionary<string, List<Achievement>>();
            _db = FirebaseFirestore.DefaultInstance;
            getAllUserAttribute();
            fetchFromDb();
            // FETCH USER ACHIEVEMENTS
            fetchAllUserAchiev();
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(gameObject);
            //_allAchievements = new Dictionary<string, List<Achievement>>();
            //_db = FirebaseFirestore.DefaultInstance;
            //getAllUserAttribute();
            //fetchFromDb();
            //instance = this;
        }
        //DontDestroyOnLoad(this);
    }
    #endregion

    //public List<PropertiesFoo> mProp;
    //public List<AchievementFoo> mAchievement;

    public void fetchFromDb()
    {
        CollectionReference achievements = _db.Collection("Achievements");

        achievements.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            Debug.Log("AchievementManager: getting all achievements");
            QuerySnapshot allFlashcardsQuerySnapshot = task.Result;
            Debug.Log("AchievementManager: achievements count: " + allFlashcardsQuerySnapshot.Count);
            Debug.Log("AchievementManager: task status: " + task.IsCompletedSuccessfully);
            foreach (DocumentSnapshot documentSnapshot in allFlashcardsQuerySnapshot.Documents)
            {
                Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
                Dictionary<string, object> achievement = documentSnapshot.ToDictionary();
                int initialValue = 0;

                // if initial value is set to a reference in user collection
                try
                {
                    if (!int.TryParse(Convert.ToString(achievement["InitialValue"]), out initialValue))
                    {
                        DocumentReference userDoc = _db.Collection("User").Document(user.Id);
                        userDoc.GetSnapshotAsync().ContinueWithOnMainThread(userTask =>
                        {
                            Debug.Log("AchievementManager: getting specified intial value");
                            DocumentSnapshot currUser = userTask.Result;
                            Debug.Log(String.Format("AchievementManager: Document data for {0} document:", currUser.Id));
                            Dictionary<string, object> userAchievement = currUser.ToDictionary();
                            initialValue = Convert.ToInt32(userAchievement[Convert.ToString(achievement["InitialValue"])]);

                        });
                    }
                }
                catch (Exception e)
                {
                    Debug.Log("Achievement Manager error: " + e);
                }

                Achievement currAchievement = new Achievement(Convert.ToString(achievement["Name"]), Convert.ToString(achievement["AssetAttribute"]), Convert.ToString(achievement["AssetName"]), Convert.ToInt32(achievement["Target"]), Convert.ToInt32(achievement["Exp"]), Convert.ToInt32(achievement["Coin"]), initialValue, documentSnapshot.Id);
                Debug.Log("AchievementManager: currAchievement: " + currAchievement.Name);
                // most changes are caused by the user's interaction
                switch (Convert.ToString(achievement["AssetAttribute"]))
                {
                    case "User":
                        _allAchievements[Convert.ToString(achievement["AssetName"])].Add(currAchievement);
                        //user.Observers[Convert.ToString(achievement["AssetName"])].Add(currAchievement);
                        break;
                    default:
                        break;
                }
                //_flashcardObjectsArray.Add(null);

            }
        });
    }

    private void fetchAllUserAchiev()
    {
        user.resetAchieved();
        CollectionReference userAchiev = _db.Collection("User").Document(user.Id).Collection("Achievements");
        userAchiev.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            Debug.Log("AchievementManager: getting all user achievements");
            QuerySnapshot allFlashcardsQuerySnapshot = task.Result;
            Debug.Log("AchievementManager: user achievements count: " + allFlashcardsQuerySnapshot.Count);
            Debug.Log("AchievementManager: user achiev task status: " + task.IsCompletedSuccessfully);
            foreach (DocumentSnapshot documentSnapshot in allFlashcardsQuerySnapshot.Documents)
            {
                Dictionary<string, object> achievement = documentSnapshot.ToDictionary();
                if (Convert.ToString(achievement["Name"]) != "dummy")
                {
                    Achievement currAchievement = new Achievement(documentSnapshot.Id, Convert.ToString(achievement["Name"]), Convert.ToString(achievement["AssetAttribute"]), Convert.ToString(achievement["AssetName"]), Convert.ToString(achievement["Date"]));
                    user.addAchievements(currAchievement);
                }
                

            }
        });
    }
    public void addGameRun()
    {
        user.GameRuns += 1;
    }
    private void getAllUserAttribute()
    {
        //_userFields.Add("accuracy", user.Accuracy);
        //_userFields.Add("exp", user.Exp);
        //_userFields.Add("level", user.Level);
        //_userFields.Add("points", user.Points);
        //_userFields.Add("gameRuns", user.GameRuns);

        _allAchievements.Add("accuracy", new List<Achievement>());
        _allAchievements.Add("exp", new List<Achievement>());
        _allAchievements.Add("level", new List<Achievement>());
        _allAchievements.Add("points", new List<Achievement>());
        _allAchievements.Add("gameRuns", new List<Achievement>());

        //user.Observers.Add("accuracy", new List<Achievement>());
        //user.Observers.Add("exp", new List<Achievement>());
        //user.Observers.Add("level", new List<Achievement>());
        //user.Observers.Add("points", new List<Achievement>());
        //user.Observers.Add("gameRuns", new List<Achievement>());

    }



    public void achieved(Achievement achievement)
    {
        Debug.Log("AchievementManager: calling show notification");
        Debug.Log("AchievementManager: Achieved: " + achievement.Name);

        // call to notification class
        // push to user achievement collection class
        try
        {
            Dictionary<string, object> newAchiev = new Dictionary<string, object>{
            { "Name", achievement.Name },
            { "Date", achievement.AchievedDate.ToString() },
            { "AssetAttribute", achievement.AssetAttribute },
            { "AssetName", achievement.AssetName }};

            _db.Collection("User").Document(user.Id).Collection("Achievements").Document(achievement.Id).SetAsync(newAchiev).ContinueWithOnMainThread(task=> {
                Debug.Log("AchievementManager: addition user task: " + (task.IsFaulted||task.IsCanceled));
                
            });
        }
        catch (Exception e)
        {
            Debug.Log("AchievementManager: achieved error: " + e);
        }

        StartCoroutine(callNotification());
    }

    private IEnumerator callNotification()
    {
        //Scene currScene = SceneManager.GetActiveScene();
        GameObject currNotifLayer = GameObject.Find("NotificationManager");

        Debug.Log("AchievementManager: in call notification, currNotifLayer: "+currNotifLayer);
        yield return currNotifLayer.GetComponent<NotificationManager>().ShowNotification();

    }

}
