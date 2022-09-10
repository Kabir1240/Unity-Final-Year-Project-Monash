using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CourseBtn : MonoBehaviour
{
    public void LoadScene(string sceneName){
        sceneManager.LoadScene(sceneName);
    }
}
