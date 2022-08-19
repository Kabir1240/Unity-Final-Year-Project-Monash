using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "Level")]
public class Level : ScriptableObject
{
    // Level data is set at the planet main page 
    public string LevelId = "Placeholder";
    public string ModuleId = "Placeholder";
    public List<string> SongIds = new List<string>();

}
