using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ContentBullet : MonoBehaviour, FlashcardInterface 
{
    [SerializeField] private GameObject flashcardObject;
    [SerializeField] private TextMeshProUGUI titleObj, subheadingObj, pageNoObj, contentObj;
    //public ContentBullet() {
    //    flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardContentBullet");
    //    titleObj = flashcardObject.transform.Find("Title").GetComponent<TextMeshProUGUI>();
    //    subheadingObj = flashcardObject.transform.Find("Subheading").GetComponent<TextMeshProUGUI>();
    //    pageNoObj = flashcardObject.transform.Find("Circle").transform.Find("Number").GetComponent<TextMeshProUGUI>();
    //    contentObj = flashcardObject.transform.Find("BulletGroup").gameObject.transform.Find("Content").GetComponent<TextMeshProUGUI>();
    //}

    public GameObject instantiatedObjFunctionality(GameObject flashcardObject, Dictionary<string, object> flashcard)
    {
        List<object> bullets = flashcard["Bullet"] as List<object>;
        Debug.Log("making bullets");

        Transform bulletParent = flashcardObject.transform.Find("BulletGroup").transform;
        foreach (object bullet in bullets)
        {

            GameObject bulletObject = (GameObject)Operations.GetInstance().LoadPrefabFromFile("Prefabs/BulletContent");
            GameObject parent = bulletObject.transform.Find("Bullet").gameObject;
            TextMeshProUGUI bulletContentObj = parent.transform.Find("Content").GetComponent<TextMeshProUGUI>();
            bulletContentObj.text = Convert.ToString(bullet); ;

            // instantiate child and set its parent to the vertical layout group
            GameObject child = Instantiate(bulletObject, bulletParent.transform);
            //child.transform.SetParent(bulletParent);
        }
        return flashcardObject;
    }

    public GameObject setAllData(Dictionary<string, object> flashcard, string title, string subheading, int no)
    {
        //instantiate the game object here to the scene
        //GameObject flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardContentBullet");
        //Debug.Log(flashcardObject);

        //GameObject parent = flashcardObject.transform.Find("FlashcardBasic").gameObject;
        //Debug.Log(parent);

        GameObject parent = flashcardObject;
        Debug.Log(parent);

        //TextMeshProUGUI titleObj = flashcardObject.transform.Find("Title").GetComponent<TextMeshProUGUI>();
        titleObj.text = title;
        Debug.Log(titleObj);

        //TextMeshProUGUI subheadingObj = flashcardObject.transform.Find("Subheading").GetComponent<TextMeshProUGUI>();
        subheadingObj.text = subheading;

        //TextMeshProUGUI pageNoObj = flashcardObject.transform.Find("Circle").transform.Find("Number").GetComponent<TextMeshProUGUI>();
        pageNoObj.text = no.ToString();

        //TextMeshProUGUI contentObj = flashcardObject.transform.Find("BulletGroup").gameObject.transform.Find("Content").GetComponent<TextMeshProUGUI>();
        contentObj.text = Convert.ToString(flashcard["Content"]);
        return flashcardObject;
    }
}
