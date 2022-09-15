using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class HomePage : MonoBehaviour, Refresh
{
    [SerializeField] Button levelPage;
    [SerializeField] ProfPanel profPanel;
    // Start is called before the first frame update
    void Start()
    {
        levelPage.onClick.AddListener(GoToPage);
    }

    private void GoToPage()
    {
        Debug.Log("Go to PlanetMainPage");
        SceneManager.LoadScene("PlanetMainPage");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Refresh()
    {
        profPanel.Refresh();
    }
}
