using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class HomePage : MonoBehaviour, Refresh
{
    [SerializeField] Button levelPage;
    [SerializeField] Button storePage;
    [SerializeField] Button itemColPage;
    [SerializeField] Button userAchiev;
    [SerializeField] ProfPanel profPanel;
    // Start is called before the first frame update
    void Start()
    {
        levelPage.onClick.AddListener(GoToPage);
        storePage.onClick.AddListener(GoToStore);
        itemColPage.onClick.AddListener(() =>
        {
            Debug.Log("Go to UserItems");
            SceneManager.LoadScene("UserItems");
        });
        userAchiev.onClick.AddListener(() =>
        {
            Debug.Log("Go to AchievementsPage");
            SceneManager.LoadScene("AchievementsPage");
        });
    }



    private void GoToPage()
    {
        Debug.Log("Go to PlanetMainPage");
        SceneManager.LoadScene("PlanetMainPage");
    }

    private void GoToStore()
    {
        Debug.Log("Go to Store");
        SceneManager.LoadScene("Store");
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
