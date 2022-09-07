using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "User")]
public class User : ScriptableObject
{
    // User data is set at the sign in/ login page
    private string id = "id";
    private string userName = "placeholder_name";
    private string email = "placeholder_email";
    private int accuracy = 0;
    private int exp = 0;
    private int level = 0;
    private int points = 0;
    private int gameRuns = 0;

    private Dictionary<string, List<Achievement>> observers = new Dictionary<string, List<Achievement>>();

    public string Id { get => id; set => id = value; }
    public string UserName { get => userName; set => userName = value; }
    public string Email { get => email; set => email = value; }
    public int Accuracy { get => accuracy; set => onChange(value, "accuracy"); }
    public int Exp { get => exp; set => onChange(value, "exp"); }
    public int Level { get => level; set => onChange(value, "level"); }
    public int Points { get => points; set => onChange(value, "points"); }
    public int GameRuns { get => gameRuns; set => onChange(value, "gameRuns"); }
    //public Dictionary<string, List<Achievement>> Observers { get => observers; set => observers = value; }

    public void onChange(int value, string attribute)
    {
        try
        {
            List<Achievement> currAchivements = AchievementManager.instance.AllAchievements[attribute];
            foreach (Achievement currAchieve in currAchivements)
            {
                if (currAchieve.isAchieved(value))
                {
                    AchievementManager.instance.achieved(currAchieve);
                }
            }
        }catch(Exception e)
        {
            Debug.Log(e);
        }
        
    }

    // need another attribute for the image
}
