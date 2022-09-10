using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class LevelsButtonManager : MonoBehaviour
{
    [SerializeField] private GameObject levelInfo;
    [SerializeField] private ModuleLevel level;

    public void StartLevel()
    {
        string levelNo = levelInfo.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text;
        string levelTitle = levelInfo.transform.GetChild(1).GetComponent<TextMeshProUGUI>().text;

        level.Module_id = levelNo;
        level.Title = levelTitle;

        SceneManager.LoadScene("CoursePage");
    }
}
