using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NextBtn : MonoBehaviour
{
    [SerializeField] Button btn;
    [SerializeField] PrevBtn prev;
    [SerializeField] FlashcardManager manager;
    //[SerializeField] ProgressBarCourse slider;
    public bool lastClick;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Button went to start");
        btn.onClick.AddListener(TaskOnClick);
        lastClick = true;

}

    void TaskOnClick()
    {
        Debug.Log("clicked");
        // the first time next is clicked, thus we should enable the prev button
        if (!prev.firstClick)
        {
            prev.FirstClick();
        }

        //slider.Next();

        bool result = manager.Next();
        if (!result)
        {
            btn.interactable = false;
            lastClick = false;
            
        }
        else
        {
            btn.interactable = true;
        }
    }

    public bool LastClick()
    {
        btn.interactable = true;
        lastClick = true;
        return lastClick;
    }
}
