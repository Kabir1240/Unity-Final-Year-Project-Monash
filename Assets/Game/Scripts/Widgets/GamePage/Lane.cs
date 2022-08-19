
using Melanchall.DryWetMidi.Common;
using Melanchall.DryWetMidi.MusicTheory;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lane : MonoBehaviour
{
    public List<Note> noteRestrictions = new List<Note>();
    [SerializeField] int id;
    [SerializeField] private List<string> noteParseRestrictions;
    public KeyCode input;
    public GameObject notePrefab;
    List<Note> notes = new List<Note>();
    public List<double> timeStamps = new List<double>();

    int spawnIndex = 0;
    int inputIndex = 0;

    // Start is called before the first frame update
    void Start()
    {
        foreach (string note in noteParseRestrictions)
        {
            noteRestrictions.Add(Note.Parse(note));
            Debug.Log("lane " + id + ": " + Note.Parse(note).NoteName + " no:" + Note.Parse(note).NoteNumber);
        }
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

    public void InstantiateObj(string noteName, SevenBitNumber noteNumber){
        // instantiate the note object here
        // in the note object's update, we will update the speed according
        // to the tempo
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
