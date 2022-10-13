using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelsButtonManager : MonoBehaviour
{
    [SerializeField] private GameObject levelInfo;
    //[SerializeField] private ModuleLevel level;
    [SerializeField] private Level level;
    [SerializeField] Button lvlBtn;
    private string currId, moduleId;
    private List<string> songId;
    private int maxExp;

    public string CurrId { get => currId; set => currId = value; }
    public string ModuleId { get => moduleId; set => moduleId = value; }
    public List<string> SongId { get => songId; set => songId = value; }
    public int Max_exp { get => maxExp; set => maxExp = value; }

    void Start()
    {
        lvlBtn.onClick.AddListener(StartLevel);
    }

    public void disableBtn()
    {
        lvlBtn.interactable = false;
    }

    public void enableBtn()
    {
        lvlBtn.interactable = true;
    }

    public void StartLevel()
    {
        string levelNo = levelInfo.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text;
        //string levelTitle = levelInfo.transform.GetChild(1).GetComponent<TextMeshProUGUI>().text;

        //level.Module_id = levelNo;
        //level.Title = levelTitle;

        // update level data asset
        level.LevelId = currId;
        level.MaxExp = maxExp;
        level.ModuleId = moduleId;
        level.SongIds = songId;

        Debug.Log("LevelsBtnManager: going to each planet page: " + CurrId + ", module: " + moduleId + ", songs: " + songId.Count+", maxExp: "+maxExp);
        SceneManager.LoadScene("EachPlanetPage");
    }
}
