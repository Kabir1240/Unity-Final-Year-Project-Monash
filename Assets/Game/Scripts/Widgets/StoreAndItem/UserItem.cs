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
        chooseFirst.onClick.AddListener(ChooseFirst);
        chooseSecond.onClick.AddListener(ChooseSecond);
        
    }

    private void ChooseFirst()
    {
        //NTAR HARUS BISA BEDAIN GITU
        if (currItem.Id == "")
        {
            Debug.Log("UserItem: ChooseFirst: Felicia/guitar");
            assetManager.guitarImageLoc = "Felicia/guitar";
            assetManager.guitarOri = true;
        }
        else
        {
            Debug.Log("UserItem: ChooseFirst: "+ Application.persistentDataPath + "/FIT3162Files/" + currItem.Name + ".jpg");
            assetManager.guitarImageLoc = Application.persistentDataPath + "/FIT3162Files/" + currItem.Name + ".jpg";
            assetManager.guitarOri = false;
        }
    }

    private void ChooseSecond()
    {
        //NTAR HARUS BISA BEDAIN GITU
        if (currItem2.Id == "")
        {
            Debug.Log("UserItem: ChooseSecond: Felicia/guitar");
            assetManager.guitarImageLoc = "Felicia/guitar";
            assetManager.guitarOri = true;
        }
        else
        {
            Debug.Log("UserItem: ChooseSecond: " + Application.persistentDataPath + "/FIT3162Files/" + currItem.Name + ".jpg");
            assetManager.guitarImageLoc = Application.persistentDataPath + "/FIT3162Files/" + currItem.Name + ".jpg";
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
