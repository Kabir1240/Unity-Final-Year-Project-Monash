using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Firestore;
using TMPro;
using Firebase.Extensions;
using System;

public class ProgressBar : MonoBehaviour
{

    private FirebaseFirestore _db;
    [SerializeField] private SpriteRenderer _progressBar;
    [SerializeField] private SpriteRenderer _progressBarContainer;
    [SerializeField] private TextMeshProUGUI _lvlNo;
    private User _currentUser;
    private float _maxExp;
    //private bool done = false;

    //// Start is called before the first frame update
    //void Start()
    //{

    //}

    public void UpdateBar(User currUser)
    {
        float length = (_progressBarContainer.size.x * 0.96f) * (currUser.Exp / _maxExp);
        Debug.Log(length);
        Debug.Log("user exp: " + currUser.Exp);
        _progressBar.size = new Vector2(length, _progressBar.size.y);
    }

    public void InitializeBar(FirebaseFirestore db, User currUser)
    {
        _db = db;
        _currentUser = currUser;
        _lvlNo.text = _currentUser.Level.ToString();
        //Debug.Log("Went here");
        Debug.Log("ProgressBar: "+_currentUser.UserName + " " + _currentUser.Level);

        // length of progress bar will be a certain fixed length * (_currentUser.Exp/current level max exp)
        // get the user's current level

        _maxExp = (float)currUser.MaxExp;
        Debug.Log("ProgressBar: got max exp: " + _maxExp);
        float length = (_progressBarContainer.size.x * 0.96f) * (_currentUser.Exp / _maxExp);

        //Debug.Log("user exp: " + _currentUser.Exp);

        _progressBar.size = new Vector2(length, _progressBar.size.y);

    }


}
