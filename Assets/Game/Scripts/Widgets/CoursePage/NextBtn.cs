using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NextBtn : MonoBehaviour
{
    [SerializeField] Button btn;
    [SerializeField] PrevBtn prev;
    [SerializeField] FlashcardManager manager;
    public bool lastClick;

    // Start is called before the first frame update
    void Start()
    {
        btn.onClick.AddListener(TaskOnClick);
        lastClick = true;

}

    void TaskOnClick()
    {
        if (!prev.firstClick)
        {
            prev.FirstClick();
        }

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
