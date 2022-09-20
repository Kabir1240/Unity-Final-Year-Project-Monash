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
    [SerializeField] private TMP_Text _question; //text field that shows the question
    [SerializeField] private GameObject _options; //prefab
    [SerializeField] private GameObject _optionsParent; //parent of the options

    private FirebaseFirestore _db;
    private Dictionary<string, object> quizData;

    void Awake()
    {
        Debug.Log("QuizManager: " + module.Module_id);
        _db = FirebaseFirestore.DefaultInstance;
        GetQuizData();
    }

    bool GetQuizData()
    {
        bool retVal = true;
        List<object> options;
        DocumentReference docRef = _db.Collection("Modules").Document(module.Module_id).Collection("Quiz").Document(quiz.quiz_id);
        docRef.GetSnapshotAsync().ContinueWith((task) =>
        {
        var snapshot = task.Result;
        if (snapshot.Exists)
        {
            quizData = snapshot.ToDictionary();
            CreateInterface();
        }
        else
        {
            ShowScore();
        }
        });
        return retVal;
    }

    void CreateInterface()
    {
        _question.text = quizData["Question"].ToString();
        List<object> options = (List<object>)quizData["Options"];
        for (int i = 0; i < options.Count; i++)
        {
            GameObject newOption = Instantiate(_options, _optionsParent.transform);
            newOption.transform.Find("Option").GetComponent<TMP_Text>().text = options[i].ToString();
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
