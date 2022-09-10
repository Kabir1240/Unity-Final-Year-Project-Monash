using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class NotificationManager : MonoBehaviour
{
    private static bool created = false;
    void Awake()
    {
        //Debug.Log("Awake:" + SceneManager.GetActiveScene().name);

        // Ensure the script is not deleted while loading.
        if (!created)
        {
            DontDestroyOnLoad(this.gameObject);
            created = true;
            //Load notification prefab
        }
        else
        {
            Destroy(this.gameObject);
        }
        
    }
    
    public IEnumerator ShowNotification()
    {
        // instantiate game object
        //dont destroy on load
        // yield return new WaitForSeconds(3);
        //destroy game object

        Debug.Log("ShowNotification: currScene" + SceneManager.GetActiveScene().name + " called");
        yield return null;
    }
}
