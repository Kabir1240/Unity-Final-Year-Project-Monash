using Firebase.Extensions;
using Firebase.Firestore;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    [SerializeField] GameResult result;
    [SerializeField] TextMeshProUGUI score;
    [SerializeField] TextMeshProUGUI songTitle;
    [SerializeField] Button restart;
    [SerializeField] Button feedback;
    [SerializeField] Button back;
    [SerializeField] Level level;
    [SerializeField] User user;
    [SerializeField] Song song;

    private FirebaseFirestore _db;
    private int _scoreThreshold, _midScore, _highScore;

    // Start is called before the first frame update
    void Start()
    {
        score.text = result.score.ToString();
        songTitle.text = song.Title;
        _scoreThreshold = 20000;
        _midScore = 50000;
        _highScore = 80000;

        _db = FirebaseFirestore.DefaultInstance;
        Debug.Log("initialized firestore");

        restart.onClick.AddListener(Restart);
        feedback.onClick.AddListener(Feedback);
        back.onClick.AddListener(Save);
    }

    private void UpdateCoin()
    {
        if (result.score >= _highScore)
        {
            user.Coin += 10;
        }
        else if (result.score >= _midScore)
        {
            user.Coin += 4;
        }
    }

    private void Save()
    {
        Debug.Log("save");
        result.replay = false;
        try
        {
            Debug.Log(user.GameRuns);
            //FOR TESTING THIS WILL BE COMMENTED
            //if (result.score > _scoreThreshold)
            //{
            //    user.GameRuns += 1;
            //    UpdateCoin();
            //}
            user.GameRuns += 1;
            _db.Collection("User").Document(user.Id).UpdateAsync("Game_run", user.GameRuns).ContinueWithOnMainThread(task => {
                Debug.Log(
                        "Updated user Game_run in User.");
            });
            {
                //DocumentReference docRef = _db.Collection("User").Document(user.Id);
                //docRef.GetSnapshotAsync().ContinueWithOnMainThread(task =>
                //{
                //    Debug.Log("getting snapshot");
                //    DocumentSnapshot snapshot = task.Result;
                //    if (snapshot.Exists)
                //    {
                //        Debug.Log(String.Format("Document data for {0} document:", snapshot.Id));
                //        Dictionary<string, object> city = snapshot.ToDictionary();
                //        Debug.Log(Convert.ToInt32(city["Game_run"]));
                //        //SetUserData(user.UserId, Convert.ToInt32(city["Accuracy"]), Convert.ToString(city["Email"]), Convert.ToInt32(city["Exp"]), Convert.ToInt32(city["Game_run"]), Convert.ToInt32(city["Level"]), Convert.ToInt32(city["Points"]), Convert.ToString(city["Username"]));
                //        //SceneManager.LoadScene("MainPage");
                //    }
                //    else
                //    {
                //        Debug.Log(String.Format("Document {0} does not exist!", snapshot.Id));
                //    }
                //});
                //Debug.Log()
            }
        }catch(Exception e)
        {
            Debug.Log("Score error: "+e);
        }
        
        int exp = (int)((level.MaxExp * 0.8f) / level.SongIds.Count) * (Math.Max(result.score, result.prevScore)/ 100000);
        user.Exp += exp;
        Debug.Log("Score: player exp:" + user.Exp);
        _db.Collection("User").Document(user.Id).UpdateAsync("Exp", user.Exp);

        SceneManager.LoadScene("EachPlanetPage");

    }

    private void Restart()
    {
        result.prevScore = Math.Max(result.score, result.prevScore);
        result.replay = false;
        SceneManager.LoadScene("GamePage");
    }

    private void Feedback()
    {
        result.replay = true;
        SceneManager.LoadScene("GamePage");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
