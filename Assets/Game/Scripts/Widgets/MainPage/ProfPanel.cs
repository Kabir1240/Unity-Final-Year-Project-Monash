using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using TMPro;
using Firebase.Firestore;
using Firebase.Extensions;
using System;

public class ProfPanel : MonoBehaviour
{
    // taken from https://answers.unity.com/questions/600148/detect-swipe-in-four-directions-android.html
    // https://medium.com/developers-arena/creating-a-sliding-mobile-menu-in-unity-56940e44556e
    /*public float minSwipeDistY;*/
    //private float minSwipeDistX;
    //private bool isCollapsed;
    //private Vector2 startPos;
    ////public Button btn;
    //private float transformAmount;

    private FirebaseFirestore _db;

    // user data
    //public string Username { get; set; }
    [SerializeField] private User _currentUser;

    // UI elements
    //[SerializeField] private RectTransform menu;
    [SerializeField] private TextMeshProUGUI _usernameUI;
    [SerializeField] private ProgressBar _progress;
    [SerializeField] private TextMeshProUGUI _reward;

    //TESTING PURPOSES DELETE THIS
    public void addCoin()
    {
        Debug.Log("TEST: addCoin, coin: " + _currentUser.Coin + 10);
        _currentUser.Coin += 10;
        _currentUser.updateDb();
    }

    public void addLevel()
    {
        Debug.Log("TEST: addLevel, lvl: " + _currentUser.Level + 1);
        _currentUser.Level += 1;
        _currentUser.updateDb();
    }
    public void addGameRun()
    {
        Debug.Log("TEST: addGameRun, run: " + _currentUser.GameRuns + 1);
        _currentUser.GameRuns += 1;
        _currentUser.updateDb();
    }
    public void Refresh()
    {
        _progress.UpdateBar(_currentUser);
        _reward.text = _currentUser.Coin.ToString();
        _usernameUI.text = "@" + _currentUser.UserName;
        //_currentUser.updateDb();
    }

    void Start()
    {
        //menu = GetComponent<RectTransform>();
        //isCollapsed = false;
        //minSwipeDistX = 0.7f;
        //transformAmount = 0.35f;

        Debug.Log("Prof Panel: coin: " + _currentUser.Coin);
        _db = Operations.db;
        _progress.InitializeBar(_db, _currentUser);
        _reward.text = _currentUser.Coin.ToString();
        _usernameUI.text = "@"+_currentUser.UserName;
        //_currentUser.updateDb();
    }


    //void Update()
    //{
    //    if (Input.touchCount > 0)
    //    {
    //        Touch touch = Input.touches[0];
    //        //Debug.Log("touched");

    //        switch (touch.phase)
    //        {
    //            case TouchPhase.Began:
    //                startPos = touch.position;
    //                Debug.Log(startPos);
    //                break;

    //            case TouchPhase.Ended:
    //                Debug.Log("went here");
    //                float swipeDistHorizontal = (new Vector3(touch.position.x, 0, 0) - new Vector3(startPos.x, 0, 0)).magnitude;
    //                if (swipeDistHorizontal > minSwipeDistX)
    //                {
    //                    float swipeValue = Mathf.Sign(touch.position.x - startPos.x);

    //                    // right swipe
    //                    if (swipeValue > 0 && isCollapsed)
    //                    {
    //                        OpenMenu();
    //                    }
    //                    //left swipe
    //                    else if (swipeValue < 0 && !isCollapsed)
    //                    {
    //                        CollapseMenu();
    //                    }

    //                }
    //                break;
    //        }
    //    }
    //}

    //void OpenMenu()
    //{
    //    Debug.Log("open menu");
    //    menu.DOAnchorPosX(menu.rect.width * 0.5f, 1);
    //    isCollapsed = false;
    //}

    //void CollapseMenu()
    //{
    //    menu.DOAnchorPosX(menu.rect.width *-transformAmount, 1);
    //    isCollapsed = true;
    //    Debug.Log("collapse menu");
    //}
}
