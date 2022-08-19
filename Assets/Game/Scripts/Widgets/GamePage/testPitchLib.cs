using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class testPitchLib : MonoBehaviour
{
    const string pluginName = "com.example.pitchdetect.Detector";
    static AndroidJavaClass _pluginClass;
    static AndroidJavaObject _pluginInstance;

    public static AndroidJavaClass PluginClass
    {
        get
        {
            if (_pluginClass == null)
            {
                _pluginClass = new AndroidJavaClass(pluginName);
            }
            return _pluginClass;
        }
    }

    public static AndroidJavaObject PluginInstance
    {
        get
        {
            if (_pluginInstance == null)
            {
                _pluginInstance = PluginClass.CallStatic<AndroidJavaObject>("getInstance");
            }
            return _pluginInstance;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        if(Application.platform == RuntimePlatform.Android)
        {
            Debug.Log("result plugin: "+PluginInstance.Call<int>("test").ToString());
        }
    }
}
