using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "Song")]
public class Song : ScriptableObject
{
    // Module data is set every time the user clicks on a level
    public string SongId = "placeholder_id";
    public string Title = "placeholder_title";
    public string WavLocation = "placeholder";
    public string MidiLocation = "placeholder";
}
