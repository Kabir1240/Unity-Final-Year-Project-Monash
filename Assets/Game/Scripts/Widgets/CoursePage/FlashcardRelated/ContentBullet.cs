using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ContentBullet : FlashcardInterface 
{
    public ContentBullet() { }

    public GameObject setAllData(Dictionary<string, object> flashcard, string title, string subheading, int no, FlashcardManager manager)
    {
        //instantiate the game object here to the scene
        GameObject flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardContentBullet");
        Debug.Log(flashcardObject);

        //GameObject parent = flashcardObject.transform.Find("FlashcardBasic").gameObject;
        //Debug.Log(parent);

        GameObject parent = flashcardObject;
        Debug.Log(parent);

        TextMeshProUGUI titleObj = flashcardObject.transform.Find("Title").GetComponent<TextMeshProUGUI>();
        titleObj.text = title;
        Debug.Log(titleObj);

        //TextMeshProUGUI titleObj = flashcardObject.transform.Find("FlashcardBasic").transform.Find("Title").GetComponent<TextMeshProUGUI>();
        //titleObj.text = title;

        TextMeshProUGUI subheadingObj = flashcardObject.transform.Find("Subheading").GetComponent<TextMeshProUGUI>();
        subheadingObj.text = subheading;

        TextMeshProUGUI pageNoObj = flashcardObject.transform.Find("Circle").transform.Find("Number").GetComponent<TextMeshProUGUI>();
        pageNoObj.text = no.ToString();

        TextMeshProUGUI contentObj = flashcardObject.transform.Find("BulletGroup").gameObject.transform.Find("Content").GetComponent<TextMeshProUGUI>();
        contentObj.text = Convert.ToString(flashcard["Content"]);

        // go through all the bullet points
        //List<string> bullets = flashcard["Bullet"] as List<string>;
        //Debug.Log(bullets);

        //float yPos = contentObj.renderedHeight / 2 + 10 + contentObj.transform.position.y;
        //foreach (object bullet in bullets)
        //{
        //    Dictionary<string, object> bulletDictionary = bullet as Dictionary<string, object>;

        //    GameObject bulletObject = (GameObject)FlashcardManager.LoadPrefabFromFile("BulletContent");
        //    TextMeshProUGUI bulletContentObj = bulletObject.transform.Find("Bullet (1)").GetComponent<TextMeshProUGUI>();
        //    bulletContentObj.text = Convert.ToString(bulletDictionary["Content"]);
        //    Instantiate();
        //    yPos = contentObj.renderedHeight / 2 + 10 + contentObj.transform.position.y;
        //}

        //foreach (string bullet in bullets)
        //{
        //    //Dictionary<string, object> bulletDictionary = bullet as Dictionary<string, object>;

        //    GameObject bulletObject = (GameObject)FlashcardManager.LoadPrefabFromFile("BulletContent");
        //    TextMeshProUGUI bulletContentObj = bulletObject.transform.Find("Bullet (1)").GetComponent<TextMeshProUGUI>();
        //    bulletContentObj.text = bullet;
        //    bulletObject.transform.position = new Vector3(contentObj.transform.position.x + 10, contentObj.transform.position.y + contentObj.renderedHeight / 2 + 10, flashcardObject.transform.position.z);

        //    Debug.Log(bulletObject.transform.position);
        //    Instantiate(bulletContentObj);
        //    //yPos = contentObj.renderedHeight / 2 + 10 + contentObj.transform.position.y;
        //}
        return flashcardObject;
    }
}
