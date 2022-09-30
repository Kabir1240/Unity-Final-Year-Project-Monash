//using Assets;
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
    //private bool _userAchievReset;


    #region singleton
    public static AchievementManager instance;

    void Awake()
    {
        //DontDestroyOnLoad(this);
        if (instance == null)
        {
            _allAchievements = new Dictionary<string, List<Achievement>>();
            _db = Operations.db;
            getAllUserAttribute();
            fetchFromDb();
            // FETCH USER ACHIEVEMENTS
            fetchAllUserAchiev();
            instance = this;
            DontDestroyOnLoad(this);
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

    private void fetchFromDb()
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

    public void fetchAllUserAchiev()
    {
        user.resetAchieved();
        CollectionReference userAchiev = _db.Collection("User").Document(user.Id).Collection("Achievements");
        userAchiev.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            Debug.Log("AchievementManager: getting all user achievements");
            QuerySnapshot allFlashcardsQuerySnapshot = task.Result;
            Debug.Log("AchievementManager: user achievements count: " + allFlashcardsQuerySnapshot.Count);
                //Debug.Log("AchievementManager: user achiev task status: " + task.IsCompletedSuccessfully);
                foreach (DocumentSnapshot documentSnapshot in allFlashcardsQuerySnapshot.Documents)
            {
                Dictionary<string, object> achievement = documentSnapshot.ToDictionary();
                Achievement currAchievement = new Achievement(documentSnapshot.Id, Convert.ToString(achievement["Name"]), Convert.ToString(achievement["AssetAttribute"]), Convert.ToString(achievement["AssetName"]), Convert.ToString(achievement["Date"]));
                user.addAchievements(currAchievement);



            }
        });
    }


    private void getAllUserAttribute()
    {

        _allAchievements.Add("Accuracy", new List<Achievement>());
        _allAchievements.Add("Exp", new List<Achievement>());
        _allAchievements.Add("Level", new List<Achievement>());
        _allAchievements.Add("Coin", new List<Achievement>());
        _allAchievements.Add("GameRun", new List<Achievement>());

    }



    public void achieved(Achievement achievement)
    {
        Debug.Log("AchievementManager: calling show notification");
        Debug.Log("AchievementManager: Achieved: " + achievement.Name);

        // call to notification class
        // push to user achievement collection class
        try
        {
            user.Coin += achievement.Coin;
            user.updateDb();
            Dictionary<string, object> newAchiev = new Dictionary<string, object>{
            { "Name", achievement.Name },
            { "Date", achievement.AchievedDate },
            { "AssetAttribute", achievement.AssetAttribute },
            { "AssetName", achievement.AssetName }};

            _db.Collection("User").Document(user.Id).Collection("Achievements").Document(achievement.Id).SetAsync(newAchiev).ContinueWithOnMainThread(task =>
            {
                Debug.Log("AchievementManager: addition user task: " + (task.IsFaulted || task.IsCanceled));

            });

            Refresh currRefresh = GameObject.FindGameObjectWithTag("NotificationLayer").transform.GetComponent<Refresh>();
            if (currRefresh != null)
            {
                currRefresh.Refresh();
            }
        }
        catch (Exception e)
        {
            Debug.Log("AchievementManager: achieved error: " + e);
        }

        StartCoroutine(callNotification(achievement.Name, achievement.Exp.ToString()));
    }

    private IEnumerator callNotification(string name, string exp)
    {
        //Scene currScene = SceneManager.GetActiveScene();
        GameObject currNotifLayer = GameObject.Find("NotificationManager");

        Debug.Log("AchievementManager: in call notification, currNotifLayer: " + currNotifLayer);
        yield return currNotifLayer.GetComponent<NotificationManager>().ShowNotification(name, exp);

    }

}
