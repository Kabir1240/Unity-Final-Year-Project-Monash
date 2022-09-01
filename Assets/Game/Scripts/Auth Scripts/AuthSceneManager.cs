using UnityEngine.SceneManagement;
using UnityEngine;

public class AuthSceneManager : MonoBehaviour
{
    public static AuthSceneManager instance;

        private void Start() 
        {
            DontDestroyOnLoad(gameObject);
            if (instance == null)
            {
                instance = this;
            }
            else if (instance != this)
            {
                Destroy(gameObject);
            }
        }

        public void ChangeScene(int _sceneIndex)
        {
            SceneManager.LoadSceneAsync(_sceneIndex);
        }
}