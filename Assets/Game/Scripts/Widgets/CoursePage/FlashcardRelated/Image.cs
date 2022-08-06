using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;

public class Image : FlashcardInterface
{
    public Image() { }

    public GameObject setAllData(Dictionary<string, object> flashcard, string title, string subheading, int no, FlashcardManager manager)
    {
        //instantiate the game object here to the scene
        GameObject flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardImage");
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

        return flashcardObject;
    }
}
