using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProgressBarCourse : MonoBehaviour
{
    [SerializeField] FlashcardManager manager;
    [SerializeField] Slider slider;
    private float total, current;


    // Start is called before the first frame update
    void Start()
    {
        slider.value = 0;
        current = 0;
        total = 0;
    }

    public void setTotal()
    {
        total = manager.TotalFlashcards()-1;
    }

    public void Next()
    {
        current += 1;
        updateSlider();
    }

    public void Prev()
    {
        current -= 1;
        updateSlider();
    }

    private void updateSlider()
    {
        slider.value = current/total * 100;
        Debug.Log("slider: "+slider.value);
    }

}
