using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PrevBtn : MonoBehaviour
{
    [SerializeField] Button btn;
    [SerializeField] NextBtn next;
    [SerializeField] FlashcardManager manager;
    //[SerializeField] ProgressBarCourse slider;
    public bool firstClick;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Button went to start");
        btn.onClick.AddListener(TaskOnClick);
        btn.interactable = false;
        firstClick = false;
    }

    public bool FirstClick()
    {
        btn.interactable = true;
        firstClick = true;

        return firstClick;
    }

    void TaskOnClick()
    {
        //slider.Prev();

        // when the prev button is clicked after reaching the end of the list
        // thus the next button must be re enabled
        if (!next.lastClick)
        {
            next.LastClick();
        }

        bool result = manager.Previous();
        if (!result)
        {
            btn.interactable = false;
            firstClick = false;
        }
        else
        {
            btn.interactable = true;
        }
    }
}
