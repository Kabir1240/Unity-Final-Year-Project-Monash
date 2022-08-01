using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Title :FlashcardInterface
{
    //[SerializeField] private TextMeshProUGUI _title;

    public Title() { }
    
    public GameObject setAllData(Dictionary<string, object> flashcard, string title, string subheading, int no)
    {
        //_title.text = Convert.ToString(flashcard["Content"]);

        //instantiate the game object here to the scene
        GameObject flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardTitle");
        Debug.Log("reached here");
        Debug.Log(flashcardObject);
        TextMeshProUGUI titleObj = flashcardObject.transform.Find("Title").GetComponent<TextMeshProUGUI>();
        titleObj.text = Convert.ToString(flashcard["Content"]);
        Debug.Log("finished here");
        return flashcardObject;
    }
}
