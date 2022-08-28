using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "GameResult", menuName = "GameResult")]
public class GameResult : ScriptableObject
{
    // Level data is set at the planet main page 
    public int[] accuracy = { 0, 0, 0, 0 };
    public int score = 0;
    public int prevScore = 0;
    public List<NoteInfo> noteInfo = new List<NoteInfo>();
    public bool replay = false;

}
