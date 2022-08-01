using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Content : FlashcardInterface
{

    public Content() { }

    public GameObject setAllData(Dictionary<string, object> flashcard, string title, string subheading, int no)
    {
        //_title.text = Convert.ToString(flashcard["Content"]);

        //instantiate the game object here to the scene
        GameObject flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardContent");
        Debug.Log("content here");
        
        TextMeshProUGUI titleObj = flashcardObject.transform.Find("Title").GetComponent<TextMeshProUGUI>();
        titleObj.text = title;

        TextMeshProUGUI subheadingObj = flashcardObject.transform.Find("Subheading").GetComponent<TextMeshProUGUI>();
        subheadingObj.text = subheading;

        TextMeshProUGUI pageNoObj = flashcardObject.transform.Find("Circle").transform.Find("Number").GetComponent<TextMeshProUGUI>();
        pageNoObj.text = no.ToString();

        TextMeshProUGUI contentObj = flashcardObject.transform.Find("Content").GetComponent<TextMeshProUGUI>();
        pageNoObj.text = Convert.ToString(flashcard["Content"]);

        return flashcardObject;
    }
}
