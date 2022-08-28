using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "User")]
public class User : ScriptableObject
{
    // User data is set at the sign in/ login page
    public string UserName = "placeholder_name";
    public string Email = "placeholder_email";
    public int Accuracy = 0;
    public int Exp = 0;
    public int Level = 0;
    public int Points = 0;
    public int GameRuns = 0;

    // need another attribute for the image
}
