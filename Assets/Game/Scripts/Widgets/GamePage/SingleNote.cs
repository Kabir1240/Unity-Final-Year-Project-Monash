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
            if(transform.localPosition.x>= 1254.0f)
            {
                manager.NoteDetails[index].data.setAccuracyType("missed");
                manager.InstantiatedNotes.RemoveAt(0);
            }
            // if the note is no longer visible
            if (transform.localPosition.x >= 1573.0f)
            {
                manager.NoteDetails[index].data.setEndTime(Time.time - manager.PauseDuration);
                Debug.Log("destroyed: start at " + manager.NoteDetails[index].data.getStartTime() + " end at " + manager.NoteDetails[index].data.getEndTime());
                Destroy(gameObject);
            }
        }
        
    }
}
