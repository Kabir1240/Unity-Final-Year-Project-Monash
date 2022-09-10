using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Firestore;
using Firebase.Extensions;
using TMPro;
using System.Linq;

public class LevelsManager : MonoBehaviour
{
    [SerializeField] private GameObject Levels;
    [SerializeField] private Transform LevelsParent;
    [SerializeField] private ModuleLevel lvl;
    
    private FirebaseFirestore db;
    void Awake()
    {
        db = FirebaseFirestore.DefaultInstance;
        InstantiateLevels();
    }

    void InstantiateLevels()
    {
        int currentLevel = 1;
        GameObject newLevel = Instantiate(Levels, LevelsParent);
        Query allLevelsQuery = db.Collection("Modules");
        allLevelsQuery.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            QuerySnapshot allLevelsQuerySnapshot = task.Result;
            foreach (DocumentSnapshot documentSnapshot in allLevelsQuerySnapshot.Documents)
            {
                if (documentSnapshot.Exists)
                {
                    if (currentLevel == 1)
                    {
                        Dictionary<string, object> level = documentSnapshot.ToDictionary();
                        string levelNo = level["LevelNo"].ToString();
                        string title = level["Title"].ToString();
                        newLevel.transform.Find("Level1").transform.Find("Level").GetChild(0).GetComponent<TextMeshProUGUI>().text = levelNo;
                        newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;
                        newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(1).GetComponent<TextMeshProUGUI>().text = title;
                        currentLevel+=1;
                    }
                    else if (currentLevel > 0 && currentLevel%2 == 0)
                    {
                        Dictionary<string, object> level = documentSnapshot.ToDictionary();
                        string levelNo = level["LevelNo"].ToString();
                        string title = level["Title"].ToString();
                        newLevel.transform.Find("Level2").gameObject.SetActive(true);
                        newLevel.transform.Find("Level2").transform.Find("Level").GetChild(0).GetComponent<TextMeshProUGUI>().text = levelNo;
                        newLevel.transform.Find("Level2").transform.Find("ModuleInfo").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;
                        newLevel.transform.Find("Level2").transform.Find("ModuleInfo").GetChild(1).GetComponent<TextMeshProUGUI>().text = title;
                        currentLevel+=1;
                    }
                    else
                    {
                        newLevel = Instantiate(Levels, LevelsParent);
                        Dictionary<string, object> level = documentSnapshot.ToDictionary();
                        string levelNo = level["LevelNo"].ToString();
                        string title = level["Title"].ToString();
                        newLevel.transform.Find("Level1").transform.Find("Level").GetChild(0).GetComponent<TextMeshProUGUI>().text = levelNo;
                        newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(0).GetComponent<TextMeshProUGUI>().text = documentSnapshot.Id;
                        newLevel.transform.Find("Level1").transform.Find("ModuleInfo").GetChild(1).GetComponent<TextMeshProUGUI>().text = title;
                        currentLevel+=1;
                    }
                }
            }
        });
    }
}
