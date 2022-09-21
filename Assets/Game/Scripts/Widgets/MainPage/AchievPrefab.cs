using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class AchievPrefab : MonoBehaviour
{
    [SerializeField] GameObject firstItem;
    [SerializeField] GameObject secondItem;
    [SerializeField] TextMeshProUGUI itemName, itemName2, date1, date2; // taken from itemPanel

    private Achievement currItem, currItem2;

    // Start is called before the first frame update
    void Start()
    {
        // on button click, change the AssetManager for guitar to a new path of image
    }
    public void SetUI1(Achievement achiev)
    {
        currItem = achiev;
        itemName.text = currItem.Name;
        date1.text = achiev.AchievedDate;
    }

    public void SetUI2(Achievement achiev)
    {
        currItem2 = achiev;
        itemName2.text = currItem2.Name;
        date2.text = achiev.AchievedDate;
    }

    public GameObject GetSecond()
    {
        return secondItem;
    }

    public GameObject GetFirst()
    {
        return firstItem;
    }

}
