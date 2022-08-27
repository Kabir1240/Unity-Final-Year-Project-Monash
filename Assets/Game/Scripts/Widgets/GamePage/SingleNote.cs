using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SingleNote : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _noteName;
    [SerializeField] public GameManager manager;
    public float speed;
    public int index;
    public float start, destroyed;
    //public int x, y;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (manager.IsPlaying)
        {
            transform.Translate(Vector3.right * Time.deltaTime * speed);

            // if the note is no longer visible
            if (transform.localPosition.x >= 1596.0f)
            {
                GameManager.NoteData data = manager.NoteDetails[index].data;
                data.endTime= Time.time;
                Debug.Log("destroyed: start at " + data.startTime + " end at " + data.endTime);
                Destroy(gameObject);
            }
        }
        
    }
}
