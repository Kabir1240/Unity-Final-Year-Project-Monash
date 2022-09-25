using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Firebase;
using Firebase.Firestore;
using Firebase.Extensions;

public class QuizButtonManager : MonoBehaviour
{
    // for checking answers
    [SerializeField] private ModuleLevel module; //current module data asset
    [SerializeField] private Quiz quiz; //quiz data asset
    [SerializeField] private TMP_Text quizBtnText; //quiz button text
    private QuizManager quizManager; //get quizManager script

    private FirebaseFirestore _db;

    void Awake()
    {
        quizManager = GameObject.Find("QuizManager").GetComponent<QuizManager>();
        _db = Operations.db;
    }

    //public void CheckAnswer()
    //{
    //    Dictionary<string, object> quizData = quiz.quizData;
    //    List<object> options = (List<object>)quizData["Options"];
    //    int CorrectAnswerIndex = int.Parse(Convert.ToString(quizData["Correct"]));
    //    String correctAnswer = Convert.ToString(options[CorrectAnswerIndex]);
    //    if (correctAnswer == quizBtnText.text)
    //    {
    //        Debug.Log("correct Answer");
    //        quizManager.CorrectAnswer();
    //    }
    //    else
    //    {
    //        String newAdvice = quizData["Advice"].ToString();
    //        Debug.Log("wrong Answer");
    //        quizManager.WrongAnswer(newAdvice);
    //    }
    //}

    public void CheckAnswer()
    {
        List<string> options = quiz.options;
        int CorrectAnswerIndex = quiz.answer;
        string correctAnswer = options[CorrectAnswerIndex];
        if (correctAnswer == quizBtnText.text)
        {
            Debug.Log("correct Answer");
            quizManager.CorrectAnswer();
        }
        else
        {
            string newAdvice = quiz.advice;
            Debug.Log("wrong Answer");
            quizManager.WrongAnswer(newAdvice);
        }
    }
}
