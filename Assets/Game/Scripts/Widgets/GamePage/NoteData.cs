using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoteData
{
    private string accuracyType;
    private float startTime;
    private float expectedEndTime;
    private float endTime;
    private int noteNumber;
    public NoteData()
    {
        endTime = 0;
        expectedEndTime = 0;
    }

    public void setStartTime(float startTime)
    {
        this.startTime = startTime;
    }
    public float getStartTime()
    {
        return startTime;
    }

    public void setNoteNumber(int noteNumber)
    {
        this.noteNumber = noteNumber;
    }
    public int getNoteNumber()
    {
        return noteNumber;
    }


    public void setEndTime(float endTime)
    {
        if (this.endTime == 0)
        {
            this.endTime = endTime;
        }
        
    }

    public float getEndTime()
    {
        return endTime;
    }

    public void setExpectedEndTime(float endTime)
    {

        if (expectedEndTime == 0)
        {
            expectedEndTime = endTime;
        }
        

    }

    public float getExpectedEndTime()
    {
        return expectedEndTime;
    }

    public void setAccuracyType(string accuracyType)
    {
        this.accuracyType = accuracyType;
    }
    public string getAccuracyType()
    {
        return accuracyType;
    }
}
