using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoteData
{
    public string accuracyType;
    public float startTime;
    public float endTime;
    public NoteData()
    {
        endTime = 0;
    }

    public void setStartTime(float startTime)
    {
        this.startTime = startTime;
    }
    public float getStartTime()
    {
        return startTime;
    }


    public void setEndTime(float endTime)
    {
        if (endTime == 0)
        {
            this.endTime = endTime;
        }
        
    }

    public float getEndTime()
    {
        return endTime;
    }

    public void setAccuracyType(string accuracyType)
    {
        this.accuracyType = accuracyType;
    }
}
