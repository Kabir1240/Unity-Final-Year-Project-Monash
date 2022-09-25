using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Firebase;
using Firebase.Firestore;
using Firebase.Extensions;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class QuizManager : MonoBehaviour
{
    // Data assets
    [SerializeField] private ModuleLevel module; //current module data asset
    [SerializeField] private Quiz quiz; //quiz data asset
    [SerializeField] private User user;
    [SerializeField] private Level level;

    // UI
    [SerializeField] private TMP_Text question; //text field that shows the question
    [SerializeField] private TMP_Text scoreText;
    [SerializeField] private TMP_Text total;
    [SerializeField] private TMP_Text advice;
    [SerializeField] private TMP_Text lvlNo;
    [SerializeField] private GameObject optionsChild; //prefab
    [SerializeField] private Transform optionsParent; //parent of the options
    [SerializeField] private GameObject scorePanel; //panel that shows the score
    [SerializeField] private Button back;

    // Animations
    [SerializeField] private Animator canvasAnimator;

    // Database
    private FirebaseFirestore _db;

    struct QuizData
    {
        public string advice;
        public int answer;
        public List<string> options;
        public string question;
    }

    private bool gameOver = false;
    private List<QuizData> allQuiz;
    private int quizPointer, score;

    private void Update()
    {
        if (gameOver && canvasAnimator.GetCurrentAnimatorStateInfo(0).normalizedTime > 1 && !canvasAnimator.IsInTransition(0))
        {
            EndQuiz();
            //Debug.Log("EndQuiz");
        }
    }
    void Awake()
    {
        Debug.Log("QuizManager: " + module.Module_id);
        _db = Operations.db;
        //RepopulateInterface();
    }

    void Start()
    {
        allQuiz = new List<QuizData>();

        quizPointer = 0;
        score = 0;
        lvlNo.text = level.LevelId;
        back.onClick.AddListener(() =>
        {
            SceneManager.LoadScene("EachPlanetPage");
        });
        RepopulateInterface();

    }

    void RepopulateInterface()
    {
        CollectionReference quizQuery = _db.Collection("Modules").Document(module.Module_id).Collection("Quiz");
        quizQuery.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            QuerySnapshot allQuizQuerySnapshot = task.Result;
            Debug.Log("task: " + task.IsCompletedSuccessfully);
            Debug.Log("task count: " + allQuizQuerySnapshot.Count);
            foreach (DocumentSnapshot documentSnapshot in allQuizQuerySnapshot.Documents)
            {
                if (documentSnapshot.Exists)
                {
                    Dictionary<string, object> quiz = documentSnapshot.ToDictionary();
                    QuizData currQuiz;
                    currQuiz.advice = quiz["Advice"].ToString();
                    currQuiz.answer = Convert.ToInt32(quiz["Correct"]);

                    List<object> options = quiz["Options"] as List<object>;
                    List<string> optionString = new List<string>();
                    foreach (object option in options)
                    {
                        optionString.Add(option.ToString());
                    }
                    currQuiz.options = optionString;
                    currQuiz.question = quiz["Question"].ToString();
                    allQuiz.Add(currQuiz);

                }
            }
            CreateInterface(allQuiz[quizPointer]);
        });
        //DocumentReference docRef = _db.Collection("Modules").Document(module.Module_id).Collection("Quiz").Document(quiz.quiz_id);
        //docRef.GetSnapshotAsync().ContinueWithOnMainThread((task) =>
        //{
        //    var snapshot = task.Result;
        //    quiz.quizData = snapshot.ToDictionary();
        //    Dictionary<string, object> quizData = quiz.quizData;
        //    if (snapshot.Exists)
        //    {
        //        quizData = snapshot.ToDictionary();
        //        CreateInterface(quizData);
        //    }
        //    else
        //    {
        //        gameOver = true;
        //    }
        //});
    }
    void CreateInterface(QuizData quizData)
    {
        quiz.advice = quizData.advice;
        quiz.answer = quizData.answer;
        quiz.options = quizData.options;
        quiz.question = quizData.question;

        question.text = quizData.question;
        GameObject newOption;
        //List<object> options = (List<object>)quizData["Options"];
        Debug.Log(quizData.options.Count);
        foreach (string option in quizData.options)
        {
            Debug.Log("QuizManager: printing options");
            newOption = Instantiate(optionsChild, optionsParent);
            newOption.GetComponentInChildren<TMP_Text>().text = option;
        }
    }

    //void CreateInterface(Dictionary<string, object> quizData)
    //{
    //    question.text = quizData["Question"].ToString();
    //    GameObject newOption;
    //    List<object> options = (List<object>)quizData["Options"];
    //    for (int i = 0; i < options.Count; i++)
    //    {
    //        newOption = Instantiate(optionsChild, optionsParent);
    //        newOption.GetComponentInChildren<TMP_Text>().text = Convert.ToString(options[i]);
    //    }
    //}

    void ClearInterface()
    {
        question.text = "";
        foreach (Transform child in optionsParent)
        {
            Destroy(child.gameObject);
        }
    }

    public void WrongAnswer(string newAdvice)
    {
        Debug.Log("QuizManager: wrong answer");
        // update advice
        advice.text = newAdvice;

        // Wrong answer animation
        canvasAnimator.Play("wrongAnim");

        // next question(false)
        NextQuestion(false);
    }

    public void CorrectAnswer()
    {
        Debug.Log("QuizManager: correct answer");
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
        //String oldQuizID = quiz.quiz_id;
        //int newQuizID = int.Parse(oldQuizID) + 1;
        //quiz.quiz_id = string.Format("{0:0000}", newQuizID);

        // reset quiz data
        //quiz.quizData = default(Dictionary<string, object>);

        // store score
        if (answer)
        {
            // add 1 to score
            //string oldScore = score.text;
            //int newScore = int.Parse(oldScore) + 1;
            score += 1;
            scoreText.text = score + "";
        }
        quizPointer += 1;
        // add 1 to total
        //string oldTotal = total.text;
        //int newTotal = int.Parse(oldTotal) + 1;
        total.text = quizPointer + "";

        // repopulate interface
        //RepopulateInterface();
        //quizPointer += 1;
        if (quizPointer < allQuiz.Count)
        {
            Debug.Log("QuizManager: instantiate next interface");
            try
            {
                CreateInterface(allQuiz[quizPointer]);
            }
            catch (Exception e)
            {
                Debug.Log(e);
            }

        }
        else
        {
            Debug.Log("QuizManager: quiz done");
            gameOver = true;
            if (score == allQuiz.Count && level.LevelId == user.Level.ToString())
            {
                user.QuizPass = true;
                int exp = (int)(level.MaxExp * 0.2f);
                user.Exp += exp;
                user.updateQuizPass();
            }


            //while(canvasAnimator.GetCurrentAnimatorStateInfo(0).normalizedTime <= 1 || canvasAnimator.IsInTransition(0))
            //{
            //}
            //EndQuiz();
            //Debug.Log("EndQuiz");
        }

    }

    void EndQuiz()
    {
        // show score
        scorePanel.SetActive(true);
    }
}
