using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PausingAnim : MonoBehaviour
{
    [SerializeField] GameManager manager;
    [SerializeField] Animator pause;
    // Start is called before the first frame update
    
    public void AfterPausing()
    {
        manager.IsPlaying = true;
        //pause.gameObject.SetActive(false);
        manager.PlayDelay();
        pause.gameObject.SetActive(false);
    }
}
