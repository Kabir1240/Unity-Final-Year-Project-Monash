using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Firestore;
using TMPro;

public class ProgressBar : MonoBehaviour
{

    private FirebaseFirestore _db;
    [SerializeField] private RectTransform _progressBar;
    [SerializeField] private TextMeshProUGUI _lvlNo;
    [SerializeField] private User _currentUser;

    //// Start is called before the first frame update
    //void Start()
    //{

    //}

    public void InitializeBar(FirebaseFirestore db, User currUser)
    {
        _db = db;
        _currentUser = currUser;
        _lvlNo.text = _currentUser.Level.ToString();

        // length of progress bar will be a certain fixed length * (_currentUser.Exp/current level max exp)
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
