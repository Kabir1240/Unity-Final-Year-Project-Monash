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

    [SerializeField] GameObject warningPanel;

    [SerializeField] TextMeshProUGUI score;
    [SerializeField] TextMeshProUGUI songTitle;
    [SerializeField] TextMeshProUGUI reward;

    [SerializeField] Button restart;
    [SerializeField] Button feedback;
    [SerializeField] Button back;
    [SerializeField] Button confirmWarning;
    [SerializeField] Button undoWarning;

    [SerializeField] Level level;
    [SerializeField] User user;
    [SerializeField] Song song;

    private FirebaseFirestore _db;
    private int _scoreThreshold, _midScore, _highScore, _tmpCoin;

    // Start is called before the first frame update
    void Start()
    {
        score.text = result.score.ToString();
        songTitle.text = song.Title;
        _scoreThreshold = 20000;
        _midScore = 50000;
        _highScore = 80000;

        UpdateCoin();
        reward.text = _tmpCoin + "";

        _db = Operations.db;
        Debug.Log("initialized firestore");

        restart.onClick.AddListener(Restart);
        feedback.onClick.AddListener(Feedback);
        back.onClick.AddListener(()=>
        {
            warningPanel.SetActive(true);
        });

        undoWarning.onClick.AddListener(() =>
        {
            warningPanel.SetActive(false);
        });
        confirmWarning.onClick.AddListener(Save);
    }

    private void UpdateCoin()
    {
        if (result.score >= _highScore)
        {
            _tmpCoin = 10;
        }
        else if (result.score >= _midScore)
        {
            _tmpCoin = 4;
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
            //    user.Coin+=_tmpCoin;
            //}

            //TESTING
            user.GameRuns += 1;
            _db.Collection("User").Document(user.Id).UpdateAsync("Game_run", user.GameRuns).ContinueWithOnMainThread(task =>
            {
                Debug.Log(
                        "Updated user Game_run in User.");
            });
            //user.Coin += 10;
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
        }
        catch (Exception e)
        {
            Debug.Log("Score error: " + e);
        }

        // only increase exp and coin if the current user level matches the level's level
        if (user.Level == Convert.ToInt32(level.LevelId))
        {
            user.Coin += _tmpCoin;
            int exp = (int)((level.MaxExp * 0.8f) / level.SongIds.Count) * (Math.Max(result.score, result.prevScore) / 100000);
            user.Exp += exp;
            Debug.Log("Score: player exp:" + user.Exp);
            _db.Collection("User").Document(user.Id).UpdateAsync("Exp", user.Exp);
        }

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
