using Firebase.Extensions;
using Firebase.Storage;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ContentImage : FlashcardInterface
{
    private GameObject flashcardObject;
    private TextMeshProUGUI titleObj, subheadingObj, pageNoObj, contentObj;
    public ContentImage() {
        flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardContentImage");
        titleObj = flashcardObject.transform.Find("Title").GetComponent<TextMeshProUGUI>();
        subheadingObj = flashcardObject.transform.Find("Subheading").GetComponent<TextMeshProUGUI>();
        pageNoObj = flashcardObject.transform.Find("Circle").transform.Find("Number").GetComponent<TextMeshProUGUI>();
        contentObj = flashcardObject.transform.Find("Content").GetComponent<TextMeshProUGUI>();
    }

    public GameObject setAllData(Dictionary<string, object> flashcard, string title, string subheading, int no, FlashcardManager manager)
    {
        //instantiate the game object here to the scene
        //GameObject flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardContentImage");
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

        //TextMeshProUGUI contentObj = flashcardObject.transform.Find("Content").GetComponent<TextMeshProUGUI>();
        contentObj.text = Convert.ToString(flashcard["Content"]);

        //manager.downloadImage(flashcardObject, flashcard);

        return flashcardObject;
    }
}
