
using Melanchall.DryWetMidi.Common;
using Melanchall.DryWetMidi.Interaction;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoteInfo
{   
    // the expected notename and note midi number
    private string noteName;
    private SevenBitNumber noteNumber;
    //private Note currNote;
    //private int noteNumber;
    private double startTime;
    private double delayTime; // start of next note - current note start time
    private Lane laneAt;
    private int LaneNo;
    private NoteData data;

    public string NoteName { get => noteName; set => noteName = value; }
    public SevenBitNumber NoteNumber { get => noteNumber; set => noteNumber = value; }
    public double StartTime { get => startTime; set => startTime = value; }
    public double DelayTime { get => delayTime; set => delayTime = value; }
    //public Lane LaneAt { get => laneAt; set => laneAt = value; }
    public NoteData Data { get => data; set => data = value; }
    public int LaneNo1 { get => LaneNo; set => LaneNo = value; }
    //public Note CurrNote { get => currNote; set => currNote = value; }
}
