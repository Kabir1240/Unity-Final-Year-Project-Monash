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
    private bool removed;
    //public int x, y;

    // Start is called before the first frame update
    void Start()
    {
        removed = false;
        if (!manager.Replay)
        {
            manager.NoteDetails[index].Data.setAccuracyType("missed");
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        if (manager.IsPlaying && !manager.Replay)
        {
            transform.Translate(Vector3.right * Time.deltaTime * speed);
            if (transform.localPosition.x >= 494.0f && transform.localPosition.x < 833.0f || transform.localPosition.x >= 1220.0f && transform.localPosition.x < 1369.0f)
            {
                manager.NoteDetails[index].Data.setAccuracyType("good");
            }
            else if (transform.localPosition.x >= 833.0f && transform.localPosition.x < 1141.0f || transform.localPosition.x >= 1161.0f && transform.localPosition.x < 1220.0f)
            {
                manager.NoteDetails[index].Data.setAccuracyType("great");
            }
            else if (transform.localPosition.x >= 1141.0f && transform.localPosition.x < 1161.0f)
            {
                manager.NoteDetails[index].Data.setAccuracyType("perfect");
                manager.NoteDetails[index].Data.setExpectedEndTime(Time.time - manager.PauseDuration);
                manager.NoteDetails[index].Data.setExpectedEndPos(transform.localPosition.x);
            }

            // to avoid any consumption for notes after this line
            if (transform.localPosition.x >= 1369.0f && !removed)
            {
                manager.NoteDetails[index].Data.setAccuracyType("missed");
                //Debug.Log("note count before remove: " + manager.InstantiatedNotes.Count);
                //Debug.Log("removing from list: "+manager.InstantiatedNotes[0].name);
                manager.NoteDetails[index].Data.setEndTime(Time.time - manager.PauseDuration);
                manager.NoteDetails[index].Data.ActualEndPos=transform.localPosition.x;
                manager.InstantiatedNotes.RemoveAt(0);
                removed = true;
            }
            // if the note is no longer visible
            if (transform.localPosition.x >= 1573.0f)
            {
                //manager.NoteDetails[index].Data.setEndTime(Time.time - manager.PauseDuration);
                Debug.Log("consumed: start at " + manager.NoteDetails[index].Data.getStartTime() + " end at " + manager.NoteDetails[index].Data.getEndTime() + " expected: "+ manager.NoteDetails[index].Data.getExpectedEndTime());
                //manager.DestroyedNotes += 1;
                //Destroy(gameObject);
                DestroyObj(gameObject);
            }

            //Debug.Log("destroyed: " + manager.DestroyedNotes);
            if (manager.DestroyedNotes == manager.NoteDetails.Count)
            {
                //Debug.Log("went here");
                manager.GoToScore();
            }
        }
        else if(manager.Replay)
        {
            transform.Translate(Vector3.right * Time.deltaTime * speed);
            if (transform.localPosition.x >= 1573.0f)
            {
                //manager.DestroyedNotes += 1;
                //Destroy(gameObject);
                DestroyObj(gameObject);
            }

            //Debug.Log("destroyed replay: " + manager.DestroyedNotes);
            if (manager.DestroyedNotes == manager.NoteDetails.Count*2)
            {
                //Debug.Log("went here");
                manager.GoToScore();
            }
        }
    }

    public void Consume()
    {
        // since the extra vibrations in guitar causes consumption to be done even though the player was not actually playing a note
        //Debug.Log("destroyed: " + manager.DestroyedNotes);
        if (transform.localPosition.x >= 183.0f && manager.InstantiatedNotes.Count > 0)
        {
            manager.NoteDetails[index].Data.setEndTime(Time.time - manager.PauseDuration);
            manager.NoteDetails[index].Data.ActualEndPos = transform.localPosition.x;
            manager.NoteDetails[index].Data.setExpectedEndPos(1145.0f);
            manager.InstantiatedNotes.RemoveAt(0);
            Debug.Log("consumed: start at " + manager.NoteDetails[index].Data.getStartTime() + " end at " + manager.NoteDetails[index].Data.getEndTime());
            //manager.DestroyedNotes += 1;
            //Destroy(gameObject);
            DestroyObj(gameObject);
        }

    }

    public void DestroyObj(GameObject obj)
    {
        manager.DestroyedNotes += 1;
        Debug.Log("destroyed: " + manager.DestroyedNotes);
        manager.UpdateProgressBar();
        Destroy(obj);
    }
}
