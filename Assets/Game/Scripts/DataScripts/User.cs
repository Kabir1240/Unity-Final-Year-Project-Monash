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

    private Dictionary<string, List<Achievement>> achieved = new Dictionary<string, List<Achievement>>();

    public string Id { get => id; set => id = value; }
    public string UserName { get => userName; set => userName = value; }
    public string Email { get => email; set => email = value; }
    public int Accuracy { get => accuracy; set => accuracy = onChange(value, "accuracy"); }
    public int Exp { get => exp; set => exp = value; }
    public int Level { get => level; set => level = onChange(value, "level"); }
    public int Points { get => points; set => points = onChange(value, "points"); }
    public int GameRuns { get => gameRuns; set => gameRuns = onChange(value, "gameRuns"); }
    public Dictionary<string, List<Achievement>> Achieved { get => achieved; set => achieved = value; }

    //public Dictionary<string, List<Achievement>> Observers { get => observers; set => observers = value; }

    public int onChange(int value, string attribute)
    {
        try
        {
            Debug.Log("User " + attribute + " being changed to: " + value);
            List<Achievement> currAchivements = AchievementManager.instance.AllAchievements[attribute];
            Debug.Log("USer currAchievements: " + currAchivements.Count);
            foreach (Achievement currAchieve in currAchivements)
            {
                if (currAchieve.isAchieved(value))
                {
                    if (!hasBeenAchieved(currAchieve, attribute))
                    {
                        AchievementManager.instance.achieved(currAchieve);
                        exp += currAchieve.Exp;
                        achieved[attribute].Add(currAchieve);
                    }

                }
            }
        }
        catch (Exception e)
        {
            Debug.Log("User error: " + e);

        }
        return value;

    }

    public void resetAchieved()
    {
        Debug.Log("User: achieved is resetted");
         achieved= new Dictionary<string, List<Achievement>>();
    }

    public void addAchievements(Achievement achieve)
    {
        if (!achieved.ContainsKey(achieve.AssetAttribute))
        {
            achieved.Add(achieve.AssetAttribute, new List<Achievement>());
 
        }
        Debug.Log("User: addAchievement: " + achieve.Name);
        achieved[achieve.AssetAttribute].Add(achieve);
        
    }

    private bool hasBeenAchieved(Achievement curr, string attribute)
    {
        if (!achieved.ContainsKey(attribute))
        {
            achieved.Add(attribute, new List<Achievement>());
            Debug.Log("User: achieved: " + false);
            return false;
        }
        List<Achievement> catAchieve = achieved[attribute];

        foreach (Achievement achieve in catAchieve)
        {
            if (achieve.Id == curr.Id)
            {
                Debug.Log("User: achieved: " + true);
                return true;
            }
        }
        Debug.Log("User: achieved: " + false);
        return false;
    }
}

