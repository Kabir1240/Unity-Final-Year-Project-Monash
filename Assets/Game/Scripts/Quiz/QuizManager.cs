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
    // Data assets
    [SerializeField] private ModuleLevel module; //current module data asset
    [SerializeField] private Quiz quiz; //quiz data asset

    // UI
    [SerializeField] private TMP_Text question; //text field that shows the question
    [SerializeField] private TMP_Text score;
    [SerializeField] private TMP_Text total;
    [SerializeField] private TMP_Text advice;
    [SerializeField] private GameObject optionsChild; //prefab
    [SerializeField] private Transform optionsParent; //parent of the options
    [SerializeField] private GameObject scorePanel; //panel that shows the score

    // Animations
    [SerializeField] private Animator canvasAnimator;

    // Database
    private FirebaseFirestore _db;

    private bool gameOver = false;
    
    private void Update() {
        if (gameOver && canvasAnimator.GetCurrentAnimatorStateInfo(0).normalizedTime > 1 && !canvasAnimator.IsInTransition(0)) {
            EndQuiz();
            Debug.Log("EndQuiz");
        }
    }
    void Awake()
    {
        Debug.Log("QuizManager: " + module.Module_id);
        _db = FirebaseFirestore.DefaultInstance;
        RepopulateInterface();
    }

    void RepopulateInterface()
    {
        DocumentReference docRef = _db.Collection("Modules").Document(module.Module_id).Collection("Quiz").Document(quiz.quiz_id);
        docRef.GetSnapshotAsync().ContinueWithOnMainThread((task) =>
        {
        var snapshot = task.Result;
        quiz.quizData = snapshot.ToDictionary();
        Dictionary<string, object> quizData = quiz.quizData;
        if (snapshot.Exists)
        {
            quizData = snapshot.ToDictionary();
            CreateInterface(quizData);
        }
        else
        {
            gameOver = true;
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

    void ClearInterface()
    {
        question.text = "";
        foreach (Transform child in optionsParent)
        {
            Destroy(child.gameObject);
        }
    }

    public void WrongAnswer(String newAdvice)
    {
        // update advice
        advice.text = newAdvice;

        // Wrong answer animation
        canvasAnimator.Play("wrongAnim");

        // next question(false)
        NextQuestion(false);
    }

    public void CorrectAnswer()
    {
        // Right answer animation
        canvasAnimator.Play("CorrectAnim");

        // Next question (true)
        NextQuestion(true);
    }

    void NextQuestion(bool answer)
    {
        // Clear interface
        ClearInterface();

        // Add 1 to quiz id
        String oldQuizID = quiz.quiz_id;
        int newQuizID = int.Parse(oldQuizID) + 1;
        quiz.quiz_id = string.Format("{0:0000}", newQuizID);

        // reset quiz data
        quiz.quizData = default(Dictionary<string, object>);
        
        // store score
        if (answer)
        {
            // add 1 to score
            string oldScore = score.text;
            int newScore = int.Parse(oldScore) + 1;
            score.text = string.Format("{0:00}", newScore);
        }

        // add 1 to total
        string oldTotal = total.text;
        int newTotal = int.Parse(oldTotal) + 1;
        total.text = string.Format("{0:00}", newTotal);

        // repopulate interface
        RepopulateInterface();
    }

    void EndQuiz(){
        // show score
        scorePanel.SetActive(true);
    }
}
