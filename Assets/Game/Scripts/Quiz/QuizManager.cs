using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Firebase;
using Firebase.Firestore;
using Firebase.Extensions;

public class QuizManager : MonoBehaviour
{
    [SerializeField] private ModuleLevel module; //current module data asset
    [SerializeField] private Quiz quiz; //quiz data asset
    [SerializeField] private TMP_Text question; //text field that shows the question
    [SerializeField] private GameObject optionsChild; //prefab
    [SerializeField] private Transform optionsParent; //parent of the options

    private FirebaseFirestore _db;
    

    void Awake()
    {
        Debug.Log("QuizManager: " + module.Module_id);
        _db = FirebaseFirestore.DefaultInstance;
        GetQuizData();
    }

    void GetQuizData()
    {
        Dictionary<string, object> quizData;
        List<object> options;
        DocumentReference docRef = _db.Collection("Modules").Document(module.Module_id).Collection("Quiz").Document(quiz.quiz_id);
        docRef.GetSnapshotAsync().ContinueWithOnMainThread((task) =>
        {
        var snapshot = task.Result;
        if (snapshot.Exists)
        {
            quizData = snapshot.ToDictionary();
            CreateInterface(quizData);
        }
        else
        {
            ShowScore();
        }
        });
    }

    void CreateInterface(Dictionary<string, object> quizData)
    {
        question.text = quizData["Question"].ToString();
        GameObject newOption;
        List<object> options = (List<object>)quizData["Options"];
        for (int i = 0; i < options.Count; i++)
        {
            newOption = Instantiate(optionsChild, optionsParent);
            newOption.GetComponentInChildren<TMP_Text>().text = Convert.ToString(options[i]);
        }
    }

    void AddOptionButton()
    {

    }

    void ShowScore()
    {
        // Show total score
    }
}
