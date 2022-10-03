using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ButtonScripts : MonoBehaviour
{
    [SerializeField] Button pauseBtn;
    [SerializeField] GameObject flowPanel;
    [SerializeField] Button playSymbol;
    [SerializeField] Button backBtn;
    [SerializeField] Button restart;
    [SerializeField] GameObject pauseSymbol;
    [SerializeField] GameManager manager;
    [SerializeField] GameObject restartPanel;
    [SerializeField] Button confirm, goBack;

    private bool restarting;

    // Start is called before the first frame update
    void Start()
    {
        restartPanel.SetActive(false);
        pauseBtn.onClick.AddListener(Flow);
        playSymbol.onClick.AddListener(()=>
        {
            flowPanel.SetActive(false);
            playSymbol.gameObject.SetActive(false);
            manager.Play();
        });
        playSymbol.interactable = false;
        backBtn.onClick.AddListener(() =>
        {
            manager.pitch.Pause();
            SceneManager.LoadScene("EachPlanetPage");
        });
        restart.onClick.AddListener(Restart);
        goBack.onClick.AddListener(()=>
        {
            restartPanel.SetActive(false);
            restarting = false;
            manager.Play();
        });
        confirm.onClick.AddListener(() =>
        {
            if (manager.RestartState())
            {
                restartPanel.SetActive(false);
                flowPanel.SetActive(true);
                playSymbol.gameObject.SetActive(true);
            }
            
        });

        restarting = false;

        if (manager.Replay)
        {
            playSymbol.interactable = true;
            pauseBtn.interactable = false;
            restart.interactable = false;
            flowPanel.SetActive(false);
        }
    }

    private void Flow()
    {

        if (manager.IsPlaying)
        {
            flowPanel.SetActive(true);
            playSymbol.gameObject.SetActive(true);
            manager.Pause();
        }
        //else
        //{
        //    flowPanel.SetActive(false);
        //    playSymbol.gameObject.SetActive(false);
        //    manager.Play();
        //    //StartCoroutine(InstantiateNote());
        //}
    }

    private void unBlock()
    {
        restart.interactable = true;
        backBtn.interactable = true;
        pauseBtn.interactable = true;
    }

    private void Restart()
    {
            if (manager.IsPlaying&&!restarting)
            {
                restartPanel.SetActive(true);
                restarting = true;
                manager.Pause();
            }
            //else
            //{
            //    restartPanel.SetActive(false);
            //    restarting = false;
            //    manager.Play();

            //    //StartCoroutine(InstantiateNote());
            //}
    }
}
