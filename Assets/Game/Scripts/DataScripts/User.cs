using Firebase.Extensions;
using Firebase.Firestore;
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
    private int coin = 0;
    private int gameRuns = 0;
    private int maxExp = 0;
    private int points = 0;
    private bool changed = false;
    private bool quizPass = false;

    private Dictionary<string, List<Achievement>> achieved = new Dictionary<string, List<Achievement>>();
    private Dictionary<string, Item> boughtItems = new Dictionary<string, Item>();

    public string Id { get => id; set => id = value; }
    public string UserName { get => userName; set => userName = value; }
    public string Email { get => email; set => email = value; }
    public int Accuracy { get => accuracy; set => accuracy = onChange(value, "Accuracy"); }
    public int Exp { get => exp; set => exp = onChange(value, "Exp"); }
    public int Level { get => level; set => level = onChange(value, "Level"); }
    public int Coin { get => coin; set => coin = change(value); }
    public int GameRuns { get => gameRuns; set => gameRuns = onChange(value, "GameRun"); }
    public Dictionary<string, List<Achievement>> Achieved { get => achieved; }
    public Dictionary<string, Item> BoughtItems { get => boughtItems; }
    public int MaxExp { get => maxExp; set => maxExp = value; }
    public int Points { get => points; set => points = change(value); }
    public bool QuizPass { get => quizPass; set => quizPass = value; }

    //public Dictionary<string, List<Achievement>> Observers { get => observers; set => observers = value; }

    public void SetUserData(string id, Dictionary<string, object> userDataDb, int maxExp)
    {
        this.id = id;
        userName = Convert.ToString(userDataDb["Username"]);
        email = Convert.ToString(userDataDb["Email"]);
        accuracy = Convert.ToInt32(userDataDb["Accuracy"]);
        exp = Convert.ToInt32(userDataDb["Exp"]);
        level = Convert.ToInt32(userDataDb["Level"]);
        coin = Convert.ToInt32(userDataDb["Coin"]);
        gameRuns = Convert.ToInt32(userDataDb["GameRun"]);
        points = Convert.ToInt32(userDataDb["Points"]);
        quizPass = Convert.ToBoolean(userDataDb["QuizPass"]);
        this.maxExp = maxExp;
    }

    // changes that doesn't trigger an achievement but triggers an update
    public int change(int value)
    {
        changed = true;
        return value;
    }

    public int onChange(int value, string attribute)
    {
        try
        {
            Debug.Log("User: User " + attribute + " being changed to: " + value);
            List<Achievement> currAchivements = AchievementManager.instance.AllAchievements[attribute];
            Debug.Log("User: currAchievements: " + currAchivements.Count);
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

        CheckExp();
        changed = true;
        return value;

    }

    public void CheckExp()
    {
        if (exp > maxExp)
        {
            level += 1;
            exp = exp - maxExp;
            maxExp += 100;
            changed = true;
            //updateLevel();
        }
    }

    public void updateQuizPass()
    {
        Debug.Log("User: update quiz pass field");
        CheckExp();
        DocumentReference userRef = Operations.db.Collection("User").Document(id);
        Dictionary<string, object> updates = new Dictionary<string, object>
            {{ "QuizPass", quizPass},
        { "Exp", exp},
        { "Level", level}};

        userRef.UpdateAsync(updates).ContinueWithOnMainThread(task =>
        {
            Debug.Log("User: Updated the User id: " + id + " quiz pass: " + quizPass + " exp: "+exp+" level: "+level);
        });
    }

    //public void updateExp()
    //{
    //    Debug.Log("User: update exp field");
    //    DocumentReference userRef = Operations.db.Collection("User").Document(id);
    //    Dictionary<string, object> updates = new Dictionary<string, object>
    //        {{ "Exp", exp}};

    //    userRef.UpdateAsync(updates).ContinueWithOnMainThread(task =>
    //    {
    //        Debug.Log("User: Updated the User id: " + id + " exp: " + exp);
    //    });
    //}

    // only called through achievement manager and score where the user values are changed from
    public void updateDb()
    {
        Debug.Log("User: update DB");
        if (changed)
        {
            DocumentReference userRef = Operations.db.Collection("User").Document(id);
            Dictionary<string, object> updates = new Dictionary<string, object>
            { { "Accuracy", accuracy},
            { "Exp", exp},
            { "GameRun", gameRuns},
            { "Level", level},
            { "Coin", coin},
            {"Points", points } };

            userRef.UpdateAsync(updates).ContinueWithOnMainThread(task =>
            {
                Debug.Log("User: Updated the User id: " + id + "gameRun: " + gameRuns + " lvl: " + level + " coin: " + coin + " exp: " + exp + " points: " + points);
            });
            changed = false;
        }
    }

    public void resetAchieved()
    {
        Debug.Log("User: achieved is resetted");
        achieved = new Dictionary<string, List<Achievement>>();
    }

    public void resetItems()
    {
        Debug.Log("User: boughtItems is resetted");
        boughtItems = new Dictionary<string, Item>();
    }

    public void addAchievements(Achievement achieve)
    {
        if (!achieved.ContainsKey(achieve.AssetName))
        {
            achieved.Add(achieve.AssetName, new List<Achievement>());

        }
        Debug.Log("User: addAchievement: " + achieve.Name + ", attribute: " + achieve.AssetName);
        achieved[achieve.AssetName].Add(achieve);

    }

    public void addItems(Item item)
    {
        boughtItems.Add(item.Id, item);
        Debug.Log("User: addItems: " + item.Name + ", price " + item.Price);

    }

    private bool hasBeenAchieved(Achievement curr, string attribute)
    {
        if (!achieved.ContainsKey(attribute))
        {
            achieved.Add(attribute, new List<Achievement>());
            Debug.Log("User: no key, achieved: " + false);
            return false;
        }
        List<Achievement> catAchieve = achieved[attribute];

        foreach (Achievement achieve in catAchieve)
        {
            Debug.Log("User: checking " + achieve.Name + " with " + curr.Name);
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

