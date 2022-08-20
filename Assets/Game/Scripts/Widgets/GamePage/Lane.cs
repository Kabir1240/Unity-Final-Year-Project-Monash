
using Melanchall.DryWetMidi.Common;
using Melanchall.DryWetMidi.MusicTheory;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;

public class Lane : MonoBehaviour
{
    [SerializeField] public int _id;
    [SerializeField] private List<string> _noteParseRestrictions;
    [SerializeField] private RectTransform _laneObj;
    [SerializeField] public Canvas _parentCanvas;
    private GameObject _parentobj;

    public List<Note> noteRestrictions = new List<Note>();
    public KeyCode input;
    public GameObject notePrefab;
    public List<double> timeStamps = new List<double>();
    public float speed;

    private float _posY;
    private GameObject _note;
    private TextMeshProUGUI _noteName;

    int spawnIndex = 0;
    int inputIndex = 0;

    // Start is called before the first frame update
    void Start()
    {
        // getting the parent canvas
        _parentCanvas = (Canvas)GameObject.FindObjectOfType(typeof(Canvas));
        _parentobj = _parentCanvas.gameObject;

        _posY = _laneObj.transform.position.y;
        foreach (string note in _noteParseRestrictions)
        {
            noteRestrictions.Add(Note.Parse(note));
            //Debug.Log("lane " + _id + ": " + Note.Parse(note).NoteName + " no:" + Note.Parse(note).NoteNumber);
        }

        _note = (GameObject)LoadPrefabFromFile("Note");
        _noteName = _note.transform.Find("note").GetComponent<TextMeshProUGUI>();
    }

    public bool checkNoteRestriction(Melanchall.DryWetMidi.Interaction.Note note)
    {
        foreach (Note currNote in noteRestrictions)
        {
            if (currNote.NoteNumber == note.NoteNumber)
            {
                return true;
            }
        }
        return false;
    }

    public void InstantiateObj(string noteName, string noteOctave, SevenBitNumber noteNumber, float speed){
        // instantiate the note object here
        // in the note object's update, we will update the speed according
        // to the tempo
        //Debug.Log("instantiate note: " + noteName + " midiNo: " + noteNumber);
        _noteName.text = noteName + noteOctave;
        GameObject child = Instantiate(_note);
        child.transform.SetParent(_parentobj.transform);
        child.transform.localPosition = new Vector3(-1607, transform.localPosition.y, 0);
        child.transform.localScale = new Vector3(1, 1, 1);
        child.GetComponent<SingleNote>().speed = speed;
        

    }

    public static UnityEngine.Object LoadPrefabFromFile(string filename)
    {
        Debug.Log("Trying to load LevelPrefab from file (" + filename + ")...");
        var loadedObject = Resources.Load("Materials/Prefabs/" + filename);
        if (loadedObject == null)
        {
            throw new FileNotFoundException("...no file found - please check the configuration");
        }
        return loadedObject;
    }

    //public void SetTimeStamps(Melanchall.DryWetMidi.Interaction.Note[] array)
    //{
    //    foreach (var note in array)
    //    {
    //        if (note.NoteName == noteRestriction)
    //        {
    //            var metricTimeSpan = TimeConverter.ConvertTo<MetricTimeSpan>(note.Time, GameManager.Midi.GetTempoMap());
    //            timeStamps.Add((double)metricTimeSpan.Minutes * 60f + metricTimeSpan.Seconds + (double)metricTimeSpan.Milliseconds / 1000f);
    //        }
    //    }
    //}
    //// Update is called once per frame
    //void Update()
    //{
    //    if (spawnIndex < timeStamps.Count)
    //    {
    //        if (SongManager.GetAudioSourceTime() >= timeStamps[spawnIndex] - SongManager.Instance.noteTime)
    //        {
    //            var note = Instantiate(notePrefab, transform);
    //            notes.Add(note.GetComponent<Note>());
    //            note.GetComponent<Note>().assignedTime = (float)timeStamps[spawnIndex];
    //            spawnIndex++;
    //        }
    //    }

    //    if (inputIndex < timeStamps.Count)
    //    {
    //        double timeStamp = timeStamps[inputIndex];
    //        double marginOfError = SongManager.Instance.marginOfError;
    //        double audioTime = SongManager.GetAudioSourceTime() - (SongManager.Instance.inputDelayInMilliseconds / 1000.0);
    // have 1 observer class and make all the lanes subsribe to it. if a sound is heard, it will distribute the result to all the strings
    // if a m
    //        if (Input.GetKeyDown(input))
    //        {
    //            if (Math.Abs(audioTime - timeStamp) < marginOfError)
    //            {
    //                Hit();
    //                print($"Hit on {inputIndex} note");
    //                Destroy(notes[inputIndex].gameObject);
    //                inputIndex++;
    //            }
    //            else
    //            {
    //                print($"Hit inaccurate on {inputIndex} note with {Math.Abs(audioTime - timeStamp)} delay");
    //            }
    //        }
    //        if (timeStamp + marginOfError <= audioTime)
    //        {
    //            Miss();
    //            print($"Missed {inputIndex} note");
    //            inputIndex++;
    //        }
    //    }       

    //}
    //private void Hit()
    //{
    //    ScoreManager.Hit();
    //}
    //private void Miss()
    //{
    //    ScoreManager.Miss();
    //}
}
