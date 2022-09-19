using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UserItem : MonoBehaviour
{
    [SerializeField] GameObject firstItem;
    [SerializeField] GameObject secondItem;
    [SerializeField] Button chooseFirst;
    [SerializeField] Button chooseSecond;
    [SerializeField] TextMeshProUGUI itemName, itemName2; // taken from itemPanel
    [SerializeField] AssetManager assetManager;

    private Item currItem, currItem2;

    // Start is called before the first frame update
    void Start()
    {
        // on button click, change the AssetManager for guitar to a new path of image
        
    }

    private void ChooseFirst()
    {
        //NTAR HARUS BISA BEDAIN GITU
        if (currItem.Id == "")
        {
            assetManager.guitarImageLoc = "Felicia/guitar";
            assetManager.guitarOri = true;
        }
        else
        {
            assetManager.guitarImageLoc = Application.dataPath + "/FIT3162Files/" + currItem.Name + ".jpg";
            assetManager.guitarOri = false;
        }
    }
    public void SetUI1(Item item)
    {
        currItem = item;
        itemName.text = currItem.Name;
    }

    public void SetUI2(Item item)
    {
        currItem2 = item;
        itemName2.text = currItem2.Name;
    }

    public GameObject GetSecond()
    {
        return secondItem;
    }

    public GameObject GetFirst()
    {
        return firstItem;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
