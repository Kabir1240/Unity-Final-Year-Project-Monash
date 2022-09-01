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
    // Start is called before the first frame update
    void Start()
    {
        score.text = result.score.ToString();
        songTitle.text = song.Title;

        _db = FirebaseFirestore.DefaultInstance;
        Debug.Log("initialized firestore");

        restart.onClick.AddListener(Restart);
        feedback.onClick.AddListener(Feedback);
        back.onClick.AddListener(Save);
    }

    private void Save()
    {
        user.GameRuns += 1;
        result.replay = false;
        _db.Collection("User").Document(user.UserName).UpdateAsync("Game_run", user.GameRuns);
        int exp = (int)((level.MaxExp * 0.8f) / level.SongIds.Count) * (Math.Max(result.score, result.prevScore)/ 100000);
        user.Exp += exp;
        _db.Collection("User").Document(user.UserName).UpdateAsync("Exp", user.Exp);
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
