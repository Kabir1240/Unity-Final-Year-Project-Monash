using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class NotificationManager : MonoBehaviour
{
    //private static bool created = false;
    private TextMeshProUGUI _achievName;
    private TextMeshProUGUI _exp;
    public static NotificationManager instance;

    private GameObject notifPrefab;
    private GameObject currItem;
    private float notifTime, startTime, changeTime;
    private static GameObject currCamera;
    private bool interrupted;

    void Awake()
    {
        //Debug.Log("Awake:" + SceneManager.GetActiveScene().name);

        // Ensure the script is not deleted while loading.
        if (instance==null)
        {
            DontDestroyOnLoad(this.gameObject);
            instance = this;
            notifPrefab = (GameObject)Operations.GetInstance().LoadPrefabFromFile("Prefabs/Notification");
            notifTime = 7.0f;
            interrupted = false;
            _achievName = notifPrefab.transform.Find("AchievementName").GetComponent<TextMeshProUGUI>();
            _exp = notifPrefab.transform.Find("ExpPlus").GetComponent<TextMeshProUGUI>();
            //currCamera = GameObject.Find("Main Camera").gameObject;
            SceneManager.activeSceneChanged += onActiveSceneChanged;
            //Load notification prefab
        }
        else if (instance != this)
        {
            Destroy(gameObject);
        }

    }

    private void onActiveSceneChanged(Scene curr, Scene next)
    {
        if (interrupted)
        {
            changeTime = Time.time;
            Debug.Log("NotifManager: sceneChanged: INVOKED");
            if (changeTime - startTime < notifTime)
            {
                Debug.Log("NotifManager: changeTime:" + (changeTime - startTime));
                StartCoroutine(ShowNotification(_achievName.text, _exp.text, (int)(notifTime - (changeTime - startTime))));
            }
        }
        //SceneManager.MoveGameObjectToScene(currCamera, next);
    }

    //// directly put the filename without .prefab to the parameter
    //public static UnityEngine.Object LoadPrefabFromFile(string filename)
    //{
    //    Debug.Log("Trying to load LevelPrefab from file (" + filename + ")...");
    //    var loadedObject = Resources.Load("Materials/Prefabs/" + filename);
    //    if (loadedObject == null)
    //    {
    //        throw new FileNotFoundException("...no file found - please check the configuration");
    //    }
    //    return loadedObject;
    //}

    public IEnumerator ShowNotification(string achievName, string exp, int seconds=7)
    {
        //Canvas curr = GameObject.Find("NotificationManager").GetComponent<Canvas>();
        //Debug.Log("ShowNotification: canvas: " + curr.name);
        //curr.worldCamera = Camera.main;
        //Debug.Log("Camera: " + curr.worldCamera.gameObject.name);

        //Debug.Log("ShowNotification: currScene" + SceneManager.GetActiveScene().name + " called");
        // instantiate game object
        //GameObject currParent = GameObject.Find("NotificationManager");
        //Debug.Log("ShowNotification: currParent" + currParent.name);
        //currParent.transform.

        GameObject currParent = GameObject.FindGameObjectWithTag("NotificationLayer");
        this._achievName.text = achievName;
        this._exp.text = exp;
        GameObject result = Instantiate(notifPrefab, currParent.transform);
        //dont destroy on load
        //DontDestroyOnLoad(result);
        interrupted = true;
        startTime = Time.time;
        yield return new WaitForSeconds(seconds);
        //destroy game object
        Debug.Log("ShowNotification: destroying...");
        if (result != null)
        {
            Destroy(result);
            interrupted = false;
        }
        //Destroy(result);

        //Debug.Log("ShowNotification: currScene" + SceneManager.GetActiveScene().name + " called");
        //yield return null;
    }
}
