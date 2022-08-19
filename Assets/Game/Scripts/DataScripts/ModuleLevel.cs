using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "Module")]
public class ModuleLevel : ScriptableObject
{
    // Module data is set every time the user clicks on a level
    public string Module_id = "placeholder_id";
    public string Title = "placeholder_title";
}
