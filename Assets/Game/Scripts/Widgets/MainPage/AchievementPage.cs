using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class AchievementPage : MonoBehaviour
{
    [SerializeField] GameObject achievPrefab;
    [SerializeField] GameObject content;
    [SerializeField] Button backBtn;
    [SerializeField] User user;

    private GameObject currItemObj, secondItemObj;
    // Start is called before the first frame update
    void Start()
    {
        backBtn.onClick.AddListener(() =>
        {
            SceneManager.LoadScene("MainPage");
        });

        InstantiateAllAchiev();
    }

    private void InstantiateAllAchiev()
    {
        int count = 1;
        foreach (List<Achievement> achiev in user.Achieved.Values)
        {
            foreach (Achievement achieved in achiev)
            {
                Debug.Log("AcheivementPage:  id " + achieved.Id + " item " + achieved.Name);
                InstantiateItems(achieved, content.transform, count);
                count += 1;
            }


        }
    }

    private GameObject InstantiateItems(Achievement currItem, Transform parentTransform, int index)
    {
        AchievPrefab boughtItem = null;
        if (index % 2 == 0)
        {
            Debug.Log("AcheivementPage: instantiating second ");
            secondItemObj.SetActive(true);
            boughtItem = currItemObj.GetComponent<AchievPrefab>();
            boughtItem.SetUI2(currItem);
            return secondItemObj;
        }
        else
        {
            Debug.Log("AcheivementPage: instantiating first ");
            GameObject item = Instantiate(achievPrefab, parentTransform);
            currItemObj = item;
            boughtItem = item.GetComponent<AchievPrefab>();
            boughtItem.SetUI1(currItem);
            secondItemObj = boughtItem.GetSecond();
            return item;
        }


    }
}
