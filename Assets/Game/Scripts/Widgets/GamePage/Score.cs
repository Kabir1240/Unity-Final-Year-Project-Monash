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
    [SerializeField] TextMeshProUGUI roundHighest;
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

        if (result.score >= result.prevScore)
        {
            UpdateCoin();
        }
        reward.text = _tmpCoin + "";

        _db = Operations.db;
        Debug.Log("initialized firestore");

        restart.onClick.AddListener(Restart);
        feedback.onClick.AddListener(Feedback);
        back.onClick.AddListener(() =>
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
        Debug.Log("Score: coin updated");
        if (result.score >= _highScore)
        {
            _tmpCoin = 10;
        }
        else if (result.score >= _midScore)
        {
            _tmpCoin = 4;
        }

        //Testing
        //_tmpCoin = 1;
    }

    private void ResultReset()
    {
        int[] accuracy = { 0, 0, 0, 0 };
        result.accuracy = accuracy;
        result.score = 0;
        result.noteInfo = new List<NoteInfo>();
        result.replay = false;
        result.prevScore = 0;
    }

    private void Save()
    {
        Debug.Log("save");
        Debug.Log("Score: User data before: coin: " + user.Coin + ", exp: " + user.Exp + ", gamerun: " + user.GameRuns);
        try
        {
            //Debug.Log(user.GameRuns);
            //FOR TESTING THIS WILL BE COMMENTED
            if (result.score > _scoreThreshold)
            {
                user.Points += 1;
                user.GameRuns += 1;
            }

            //TESTING
            //user.GameRuns += 1;
            //user.Points += 1;
            //user.Coin += 10;
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
            //FOR TESTING
            //int exp = 11;
            user.Exp += exp;
            user.CheckExp();
            Debug.Log("Score: player exp:" + user.Exp + ", coin: "+user.Coin);
            //_db.Collection("User").Document(user.Id).UpdateAsync("Exp", user.Exp);
        }else if(user.Level != Convert.ToInt32(level.LevelId) && result.score > _scoreThreshold)
        {
            user.Coin += 2;
        }
        user.updateDb();
        ResultReset();
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
