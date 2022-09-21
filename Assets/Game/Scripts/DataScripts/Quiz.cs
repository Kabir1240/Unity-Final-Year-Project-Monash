using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "Quiz")]
public class Quiz : ScriptableObject
{
    public string quiz_id = "placeholder_id";
    public Dictionary<string, object> quizData;
}
