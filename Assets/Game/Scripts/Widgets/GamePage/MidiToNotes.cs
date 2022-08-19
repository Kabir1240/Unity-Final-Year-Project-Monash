using Melanchall.DryWetMidi.Core;
using Melanchall.DryWetMidi.Interaction;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class MidiToNotes:MonoBehaviour
{
    private MidiFile midi;
    private TempoMap map;
    
    public MidiToNotes()
    {

    }

    public IEnumerable<Note> ToNotes(string filePath)
    {
        midi = MidiFile.Read(filePath);
        map = midi.GetTempoMap();
        IEnumerable<Note> notes = (IEnumerable<Note>)midi.GetNotes();
        //foreach (Note note in notes)
        //{
        //    //Debug.Log("note: " + note.NoteName + " octave: " + note.Octave + " number: " + note.NoteNumber+" time:"+ note.TimeAs<MetricTimeSpan>(map)+" length:"+ note.LengthAs<MetricTimeSpan>(map)+" tempo: ");
        //    Debug.Log("tempo: " + map.GetTempoAtTime((MidiTimeSpan)0));
        //}



        Debug.Log("tempo: " + map.GetTempoAtTime((MidiTimeSpan)0));
        return notes;
    }
}
