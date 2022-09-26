using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Firestore;
using Firebase.Extensions;
using TMPro;
using System.Linq;

public class LeaderboardManager : MonoBehaviour
{
    [SerializeField] private GameObject LBRung;
    [SerializeField] private Transform LBRungParent;

    private FirebaseFirestore db;
    void Awake()
    {
        db = FirebaseFirestore.DefaultInstance;
        LoadLeaderboardData();
    }

    public void LoadLeaderboardData()
    {
        int i = 1;
        Query allUsersQuery = db.Collection("User").OrderByDescending("Points");
        allUsersQuery.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
        QuerySnapshot allUsersQuerySnapshot = task.Result;
        foreach (DocumentSnapshot documentSnapshot in allUsersQuerySnapshot.Documents)
        {
            if (documentSnapshot.Exists && i <=10)
            {
                GameObject newLBRung = Instantiate(LBRung, LBRungParent);
                Dictionary<string, object> user = documentSnapshot.ToDictionary();
                string username = user["Username"].ToString();
                string points = user["Points"].ToString();
                newLBRung.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = username;
                newLBRung.transform.GetChild(1).GetComponent<TextMeshProUGUI>().text = points;
                if (i == 1) 
                { 
                    newLBRung.transform.Find("GoldBadge").gameObject.SetActive(true);
                }
                else if (i == 2)
                {
                    newLBRung.transform.Find("SilverBadge").gameObject.SetActive(true);
                }
                else if (i == 3)
                {
                    newLBRung.transform.Find("BronzeBadge").gameObject.SetActive(true);
                }
                else
                {
                    newLBRung.transform.GetChild(2).GetComponent<TextMeshProUGUI>().text = i.ToString();
                    newLBRung.transform.GetChild(2).gameObject.SetActive(true);
                }
                i+=1;
            }
        }
        });
    }
}
