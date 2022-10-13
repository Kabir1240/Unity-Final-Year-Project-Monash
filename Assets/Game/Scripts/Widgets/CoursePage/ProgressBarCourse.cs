using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ProgressBarCourse : MonoBehaviour
{
    //[SerializeField] FlashcardManager manager;
    [SerializeField] Slider slider;
    [SerializeField] TextMeshProUGUI percentage;
    private float total, current;


    // Start is called before the first frame update
    void Start()
    {
        slider.value = 0;
        current = 0;
        total = 0;
        percentage.text = "0%";
    }

    public void restart()
    {
        current = 0;
        updateSlider();
    }

    public void setTotal(int total)
    {
        this.total = total;
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
        percentage.text = Math.Round(slider.value) + "%";
        //Debug.Log("slider: "+slider.value);
    }

}
