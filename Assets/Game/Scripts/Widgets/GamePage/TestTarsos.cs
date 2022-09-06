using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.UI;
public class TestTarsos : MonoBehaviour
{
    const string _pitchPlugin = "com.fit3162.tarsospitch.DetectPitch";
    static AndroidJavaClass unityClass;
    static AndroidJavaObject unityActivity;
    AndroidJavaObject _pitchPluginObject;
    //public Button recordBtn;
    bool clicked;
    public TextMeshProUGUI text;
    [SerializeField] GameManager manager;
    //[SerializeField] Button pauseBtn;

    // Start is called before the first frame update
    void Start()
    {
        //unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        //unityActivity = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
        _pitchPluginObject = new AndroidJavaObject(_pitchPlugin);

        Debug.Log("ACTIVITY: " + unityActivity);
        using (_pitchPluginObject = new AndroidJavaObject(_pitchPlugin))
        {
            _pitchPluginObject.Call("initialize");
        }

        //using (_pitchPluginObject)
        //{
        //    if (_pitchPluginObject == null)
        //    {
        //        Debug.Log("NULL");
        //    }
        //    Debug.Log(_pitchPluginObject.ToString());
        //}

        Debug.Log("went here");
        clicked = false;
        if (Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            Debug.Log("Microphone permission has been granted.");
        }
        else
        {
            Debug.Log("Asking for permission");
            Permission.RequestUserPermission(Permission.Microphone);
        }
        //recordBtn.onClick.AddListener(BtnOnClick);
        //pauseBtn.onClick.AddListener(Pause);
    }

    public void Pause()
    {
        using (_pitchPluginObject = new AndroidJavaObject(_pitchPlugin))
        {
            _pitchPluginObject.Call("setCurrActivity", unityActivity);
            Debug.Log("BTNONCLICK: Stop");
            _pitchPluginObject.Call("stop");
            clicked = false;

        }
    }

    public void BtnOnClick()
    {
        Debug.Log("BTNONCLICK");
        using (_pitchPluginObject = new AndroidJavaObject(_pitchPlugin))
        {
            _pitchPluginObject.Call("setCurrActivity", unityActivity);

            Debug.Log("BTNONCLICK: Start");
            _pitchPluginObject.Call("start");
            clicked = true;


        }
    }

    public void OnInitialize(string result)
    {
        Debug.Log(result);
    }

    public void Result(string note)
    {
        //StartCoroutine(delay(note));
        manager.DetectedNote(note);
    }

    //private IEnumerator delay(string note)
    //{
    //    //text.text = note;
    //    manager.DetectedNote(note);
    //    //yield return new WaitForSeconds(0.1f);
    //    //Debug.Log("delayed");
    //}
}
