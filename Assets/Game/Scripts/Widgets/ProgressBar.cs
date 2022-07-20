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

    //// Start is called before the first frame update
    //void Start()
    //{

    //}

    public void InitializeBar(FirebaseFirestore db, User currUser)
    {
        _db = db;
        _currentUser = currUser;
        _lvlNo.text = _currentUser.Level.ToString();
        Debug.Log("Went here");
        Debug.Log(_currentUser.UserName + " " + _currentUser.Level);

        // length of progress bar will be a certain fixed length * (_currentUser.Exp/current level max exp)

        DocumentReference userRef = _db.Collection("Level").Document("lvl" + _currentUser.Level);
        Debug.Log(userRef.ToString());
        //_maxExp = (float)userRef.get("Max_Exp");

        userRef.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            Debug.Log("went here 2");
            DocumentSnapshot snapshot = task.Result;
            if (snapshot.Exists)
            {
                Debug.Log("went here 3");
                Dictionary<string, object> dbData = snapshot.ToDictionary();
                int currMaxExp = Convert.ToInt32(dbData["Max_Exp"]);
                //Debug.Log(currMaxExp);
                _maxExp = (float) currMaxExp;
                Debug.Log("got max exp: " + _maxExp);
                float length = (_progressBarContainer.size.x * 0.96f) * (_currentUser.Exp / _maxExp);
                Debug.Log(length);
                Debug.Log("user exp: " + _currentUser.Exp);
                Debug.Log(_currentUser.Exp / _maxExp);
                Debug.Log(_progressBarContainer.size.x * 0.96f);
                Debug.Log(_progressBar.size.y);
                _progressBar.size = new Vector2(length, _progressBar.size.y);
            }
            else
            {
                Debug.Log(String.Format("Document {0} does not exist!", snapshot.Id));
            }
        });

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
