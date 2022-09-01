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
            if (documentSnapshot.Exists)
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

    // private IEnumerator LoadLeaderboardData()
    // {
    //     var DBtask = reference.Child("User").OrderByChild("Points").GetValueAsync();

    //     yield return new WaitUntil(predicate: () => DBtask.IsCompleted);

    //     if (DBtask.Exception != null)
    //     {
    //         Debug.LogWarning(message: $"Failed to load leaderboard data: {DBtask.Exception}");
    //     }
    //     else
    //     {
    //         DataSnapshot snapshot = DBtask.Result;

    //         foreach (Transform Child in LBRungParent)
    //         {
    //             Destroy(Child.gameObject);
    //         }

    //         foreach (DataSnapshot user in snapshot.Children.Reverse<DataSnapshot>())
    //         {
    //             GameObject rung = Instantiate(original: LBRung, parent: LBRungParent);
    //             rung.transform.GetChild(0).GetComponent<TMP_Text>().text = user.Value.ToString();
    //             rung.transform.GetChild(1).GetComponent<TMP_Text>().text = user.Child("Points").Value.ToString();
    //         }
    //     }
    // }
}
