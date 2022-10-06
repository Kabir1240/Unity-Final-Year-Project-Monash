using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase.Firestore;
using Firebase.Extensions;
using System;
using System.IO;

using TMPro;
using Firebase.Storage;
using UnityEngine.UI;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;

public class Instructions : MonoBehaviour
{
    [SerializeField] List<GameObject> cards;
    [SerializeField] private GameObject _container;
    [SerializeField] Button backBtn, nextBtn, prevBtn, instructionBtn;
    [SerializeField] private string _collection;
    private int _pointer;

    void Start()
    {
        //initialize all the flashcard types in the inspector
        nextBtn.onClick.AddListener(Next);
        prevBtn.onClick.AddListener(Previous);
        backBtn.onClick.AddListener(CloseCard);       
    }

    public void Open()
    {
        _pointer = 0;
        cards[0].SetActive(true);
        prevBtn.interactable = false;
    }

    public int GetPointer()
    {
        return _pointer;
    }

    public void Next()
    {
        // hide the current flashcard
        GameObject currentObj = cards[_pointer];
        currentObj.SetActive(false);

        //increment the pointer
        if (_pointer + 1 < cards.Count)
        {
            if (_pointer+1 == 1)
            {
                prevBtn.interactable = true;
            }else if(_pointer+1 == cards.Count - 1)
            {
                nextBtn.interactable = false;
            }
            _pointer++;
        }


        // unhide the current flashcard
        currentObj = cards[_pointer];
        currentObj.SetActive(true);   
    }

    public void Previous()
    {
        // hide the current flashcard
        GameObject currentObj = cards[_pointer];
        currentObj.SetActive(false);

        //decrement the pointer
        if (_pointer - 1 >= 0)
        {
            if (_pointer-1 == cards.Count-2)
            {
                nextBtn.interactable = true;
            }
            else if (_pointer-1== 0)
            {
                prevBtn.interactable = false;
            }
            _pointer--;
        }


        // unhide the current flashcard
        currentObj = cards[_pointer];
        currentObj.SetActive(true);
    }

    private void CloseCard()
    {
        _container.SetActive(false);
        instructionBtn.gameObject.SetActive(true);
    }

}
