using Firebase.Extensions;
using Firebase.Firestore;
using Firebase.Storage;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using Melanchall.DryWetMidi.Core;
using Melanchall.DryWetMidi.Interaction;
using Melanchall.DryWetMidi.Common;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Text.RegularExpressions;

/**
 * This class is the controller class for the Game Page and it handles all the
 * game logic, as well as the logic to instantiate the game states
 */
public class GameManager : MonoBehaviour
{
    // UI
    [SerializeField] TextMeshProUGUI score; 
    [SerializeField] TextMeshProUGUI comment;
    [SerializeField] TextMeshProUGUI title, planetNo;
    [SerializeField] TextMeshProUGUI sliderPercentage;

    [SerializeField] GameObject multiplier;
    [SerializeField] Button playSymbol; // play button
    [SerializeField] RawImage guitar; // guitar image container

    // Data Asset
    [SerializeField] AssetManager assetManager;
    [SerializeField] Song currSong;
    [SerializeField] Level lvl;
    [SerializeField] GameResult result;

    // Custom UI related class
    [SerializeField] Lane[] laneObjects; // lane objects container
    [SerializeField] ProgressBarCourse slider;

    // Sound processing library
    [SerializeField] public TestTarsos pitch;

    //Animation
    [SerializeField] private Animator pauseAnim;


    public bool IsPlaying, IsPaused;
    public float PauseDuration;
    public int DestroyedNotes;
    public bool Replay;
    public List<GameObject> InstantiatedNotes;
    public List<NoteInfo> NoteDetails;

    private FirebaseFirestore _db;
    private TempoMap _map;
    private Dictionary<string, int> _accuracy = new Dictionary<string, int>();
    private bool _doneSong, _doneMidi, _delayed, _error;
    private int _currI, _replayI, _currScore;
    private float _delay, _speed, _prevPause;
    private string _path;
    private float _startTime, _stopTime;

    FirebaseStorage storage;
    StorageReference storageRef;


    public MidiFile Midi;


    // Start is called before the first frame update
    void Start()
    {
        _db = Operations.db;
        //Debug.Log("initialized firestore");

        storageRef = Operations.storageRef;
        //Debug.Log("initialized firestorage");

        //_errorColor = new Color(198.0f, 66.0f, 79.0f);
        IsPlaying = false;
        IsPaused = false;
        _currI = 0;
        _startTime = 0;
        _stopTime = 0;
        PauseDuration = 0;
        _currScore = 0;
        DestroyedNotes = 0;
        score.text = "0";
        Replay = false;
        _delayed = false;
        _error = false;

        title.text = currSong.Title;
        planetNo.text = lvl.LevelId + "";

        LoadTexture();

        if (result.replay)
        {
            Replay = result.replay;
            _replayI = 0;
            NoteDetails = result.noteInfo;
            score.text = result.score.ToString();
            slider.setTotal(NoteDetails.Count*2);
            Debug.Log("GameManager: replaying note count: " + NoteDetails.Count);
            ReplayGamePlay();
        }
        else
        {
            NoteDetails = new List<NoteInfo>();
            InstantiatedNotes = new List<GameObject>();

            GetMidi();
            GetSong();

            InvokeRepeating("StartGame", 1.0f, 2.0f);
        }


    }

    private void LoadTexture()
    {
        Debug.Log("GameManager: starting the loading texture " + "file://" + assetManager.guitarImageLoc);
        Debug.Log("GameManager: File exists: " + File.Exists(assetManager.guitarImageLoc));
        if (!assetManager.guitarOri)
        {
            if (File.Exists(assetManager.guitarImageLoc))
            {
                StartCoroutine(Operations.GetInstance().isDownloading("file://" + assetManager.guitarImageLoc, guitar));
                return;
            }
        }

        Texture2D loadedObject = Resources.Load("Felicia/guitar") as Texture2D;
        if (loadedObject == null)
        {
            throw new FileNotFoundException("...no file found - please check the configuration");
        }
        guitar.texture = loadedObject;

    }

    public bool RestartState()
    {
        foreach (GameObject note in InstantiatedNotes)
        {
            Destroy(note);
        }

        NoteDetails = new List<NoteInfo>();
        InstantiatedNotes = new List<GameObject>();
        ConvertToNotes(_path);
        IsPlaying = false;
        IsPaused = false;
        _currI = 0;
        _startTime = 0;
        _stopTime = 0;
        PauseDuration = 0;
        _currScore = 0;
        DestroyedNotes = 0;
        score.text = "0";
        Replay = false;
        _delayed = false;
        return true;
    }

    private void ReplayGamePlay()
    {

        StartCoroutine(ReplayInstantiateExpected());
        //StartCoroutine(ReplayInstantiateActual(delayActual));


    }

    private bool CheckNoteName(Note currNote)
    {
        Debug.Log("currNote name: " + currNote.NoteName);
        string match = @".Sharp";
        return Regex.IsMatch(currNote.NoteName.ToString(), match);
    }

    private IEnumerator ReplayInstantiateExpected()
    {
        while (_currI < NoteDetails.Count)
        {

            float tempDistance = NoteDetails[_currI].Data.getExpectedEndPos() - NoteDetails[_currI].Data.ActualEndPos;

            // ensuring that the biggest negative offset is -270.0f and a positive offset of 958.0f
            if (tempDistance <= -270.0f)
            {
                tempDistance = -270.0f;
            }
            else if (tempDistance > 958.0f)
            {
                tempDistance = 958.0f;
            }

            Vector3 distance = new Vector3(tempDistance, 0, 0);

            Debug.Log("Replay i: " + _currI +" distance: " + distance.x);
            Debug.Log("Replay i: " + _currI + " expected note number:" + NoteDetails[_currI].NoteNumber + " lane: " + NoteDetails[_currI].LaneNo1);
            Debug.Log("Replay i: " + _currI + " actual note number:" + NoteDetails[_currI].Data.getNoteNumber() + " lane: " + NoteDetails[_currI].Data.LaneNo);

            Note currNote;
            currNote = new Note((SevenBitNumber)NoteDetails[_currI].NoteNumber);
            string currNoteName = currNote.NoteName.ToString();
            if (CheckNoteName(currNote))
            {
                currNoteName = currNoteName[0] + "#";
            }

            GameObject child;
            if (NoteDetails[_currI].Data.getAccuracyType() != "missed")
            {
                Note actualNote = new Note((SevenBitNumber)NoteDetails[_currI].Data.getNoteNumber());
                child = laneObjects[NoteDetails[_currI].LaneNo1].InstantiateObj(currNoteName, currNote.Octave.ToString(), currNote.NoteNumber, currSong.speed, _currI, 0, new Vector3(0, 0, 0));
                child.GetComponent<SingleNote>().manager = this;
                InstantiatedNotes.Add(child);

                string actualNoteName = actualNote.NoteName.ToString();
                if (CheckNoteName(actualNote))
                {
                    actualNoteName = actualNoteName[0] + "#";
                }

                child = laneObjects[NoteDetails[_currI].Data.LaneNo].InstantiateObj(actualNoteName, actualNote.Octave.ToString(), actualNote.NoteNumber, currSong.speed, _replayI, 0, distance);
                child.GetComponent<SingleNote>().manager = this;
                InstantiatedNotes.Add(child);

                InstantiatedNotes[InstantiatedNotes.Count - 1].transform.Find("note").GetComponent<TextMeshProUGUI>().color = Color.blue;
            }
            else
            {
                //currNote = new Note((SevenBitNumber)NoteDetails[currI].Data.getNoteNumber());
                string noteName, noteOctave;
                if (NoteDetails[_currI].Data.getNoteNumber() != -1)
                {
                    child = laneObjects[NoteDetails[_currI].LaneNo1].InstantiateObj(currNoteName, currNote.Octave.ToString(), currNote.NoteNumber, currSong.speed, _currI, 0, new Vector3(0, 0, 0));
                    child.GetComponent<SingleNote>().manager = this;
                    InstantiatedNotes.Add(child);

                    currNote = new Note((SevenBitNumber)NoteDetails[_currI].Data.getNoteNumber());
                    noteName = currNote.NoteName.ToString();
                    noteOctave = currNote.Octave.ToString();
                    if (CheckNoteName(currNote))
                    {
                        noteName = noteName[0] + "#";
                    }

                    child = laneObjects[NoteDetails[_currI].LaneNo1].InstantiateObj(noteName, noteOctave, currNote.NoteNumber, currSong.speed, _currI, 0, distance);
                    child.GetComponent<SingleNote>().manager = this;
                    InstantiatedNotes.Add(child);

                    InstantiatedNotes[InstantiatedNotes.Count - 1].transform.Find("note").GetComponent<TextMeshProUGUI>().color = Color.red;

                }
                else
                {
                    noteName = "X";
                    noteOctave = "X";
                    child = laneObjects[NoteDetails[_currI].LaneNo1].InstantiateObj(noteName, noteOctave, currNote.NoteNumber, currSong.speed, _currI, 0, new Vector3(0, 0, 0));
                    child.GetComponent<SingleNote>().manager = this;
                    InstantiatedNotes.Add(child);

                    child = laneObjects[NoteDetails[_currI].LaneNo1].InstantiateObj(currNoteName, currNote.Octave.ToString(), currNote.NoteNumber, currSong.speed, _currI, 0, new Vector3(0, 0, 0));
                    child.GetComponent<SingleNote>().manager = this;
                    InstantiatedNotes.Add(child);

                    InstantiatedNotes[InstantiatedNotes.Count - 1].transform.Find("note").GetComponent<TextMeshProUGUI>().color = Color.red;

                }
            }
            float delay = (float)NoteDetails[_currI].DelayTime;
            _currI += 1;
            yield return new WaitForSeconds(delay / 1000.0f);
        }
    }

    public void Pause()
    {
        IsPlaying = false;
        IsPaused = true;
        _stopTime = Time.time;
        Debug.Log("stopTime: " + _stopTime);
        pitch.Pause();
    }

    public void Play()
    {
        IsPlaying = true;
        if (_stopTime > 0)
        {
            _prevPause = PauseDuration;
            PauseDuration += Time.time - _stopTime + 3;
            Debug.Log("PauseDuration: " + PauseDuration);
        }
        if (IsPaused)
        {
            Debug.Log("went pause");
            pauseAnim.gameObject.SetActive(true);
            IsPlaying = false;
            pauseAnim.Play("pauseAnim");
            //StartCoroutine(PlayDelay());

        }
        else
        {
            StartCoroutine(InstantiateNote());
        }
    }

    public void PlayDelay()
    {
        //yield return new WaitForSeconds(3);
        IsPlaying = true;
        StartCoroutine(InstantiateNote());

    }

    private void StartGame()
    {
        if (_error)
        {
            SceneManager.LoadScene("EachPlanetPage");
        }
        if (!_doneSong || !_doneMidi)
        {
            return;
        }
        CancelInvoke();
        // ENABLE PLAY BUTTON
        playSymbol.interactable = true;
        //start instantiating the game objects based on the lane
        // possible way:
        _delay = 0;
        slider.setTotal(NoteDetails.Count);
        //Debug.Log("_notes.Length: " + _notes.Length);
        Debug.Log("GameManager: _noteDetails.Length: " + NoteDetails.Count);

    }

    public void GoToScore()
    {
        Debug.Log("GameManager: go to score");
        pitch.Pause();

        if (!result.replay)
        {
            currSong.speed = _speed;
            result.score = _currScore;
            result.noteInfo = NoteDetails;
        }
        SceneManager.LoadScene("ScorePage");
    }

    public IEnumerator InstantiateNote()
    {
        // if paused, it is possible that it happens in the middle of a delay, thus to ensure that the length between notes
        // are still kept as actual, an additional delay check is needed
        if (IsPaused)
        {
            IsPaused = false;
            float tmpDelay = (_delay / 1000.0f) - (_stopTime - (NoteDetails[_currI - 1].Data.getStartTime() + _prevPause));

            if (tmpDelay > 0)
            {
                yield return new WaitForSeconds(tmpDelay);
            }
            //pitch.BtnOnClick();

        }
        pitch.BtnOnClick();

        GameObject child;
        while (_currI < NoteDetails.Count && IsPlaying)
        {
            //Debug.Log(" i: " + currI + " _notes[i]: " + NoteDetails[currI].NoteName.ToString() + " delay: " + (delay / 1000.0f));
            float currTime = Time.time - PauseDuration;
            if (_currI == 0)
            {
                _startTime = currTime;
            }
            Note currNote = new Note(NoteDetails[_currI].NoteNumber);
            string noteName = currNote.NoteName.ToString();
            if (CheckNoteName(currNote))
            {
                noteName = noteName[0] + "#";
            }
            child = laneObjects[NoteDetails[_currI].LaneNo1].InstantiateObj(noteName, currNote.Octave.ToString(), currNote.NoteNumber, _speed, _currI, currTime, new Vector3(0, 0, 0));
            child.GetComponent<SingleNote>().manager = this;
            InstantiatedNotes.Add(child);

            NoteDetails[_currI].Data.setStartTime(currTime);
            //Debug.Log(" i: " + currI+"starttime: " + NoteDetails[currI].Data.getStartTime() + " pause: " + PauseDuration);
            _delay = (float)NoteDetails[_currI].DelayTime;
            _currI += 1;
            yield return new WaitForSeconds(_delay / 1000.0f);

        }

    }

    private void GetSong()
    {
        StorageReference songRef = storageRef.Child("Song").Child(currSong.WavLocation);

        // download the midi file
        songRef.GetDownloadUrlAsync().ContinueWithOnMainThread(task =>
        {
            if (!task.IsFaulted && !task.IsCanceled)
            {
                Debug.Log("Download URL: " + task.Result);

                string path = Application.persistentDataPath + "/SongFile.wav";
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), path));
                isDownloading(Convert.ToString(task.Result), path);
                _doneSong = true;
                // set it to the audiosource

            }
        });
    }

    private void GetMidi()
    {
        StorageReference midiRef = storageRef.Child("Song").Child(currSong.MidiLocation);

        // download the midi file
        midiRef.GetDownloadUrlAsync().ContinueWithOnMainThread(task =>
        {
            if (!task.IsFaulted && !task.IsCanceled)
            {
                Debug.Log("GameManager: Download URL: " + task.Result);

                string path = Application.persistentDataPath + "/FIT3162Files/MidiFiles.mid";
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), path));
                isDownloading(Convert.ToString(task.Result), path);
                ConvertToNotes(_path);
                BaseScore();
            }
        });

    }

    private void isDownloading(string url, string path)
    {

        UnityWebRequest request = UnityWebRequest.Get(url);
        Debug.Log("GameManager: PATH: " + path);

        using (request.downloadHandler = new DownloadHandlerFile(path))
        {

            request.SendWebRequest();
            Debug.Log("GameManager: finished request");
            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(request.error);
                _error = true;
            }

            else
            {

                while (!request.downloadHandler.isDone)
                {
                    //Debug.Log(request.downloadProgress);
                    // might need to make a loading page
                }
                Debug.Log("GameManager: File downloaded at: " + path);
                _path = path;

            }
        }

    }

    // Converts the Midi file to an array of notes
    private void ConvertToNotes(string filePath)
    {
        //Debug.Log("GameManager: converting to notes of file: " + filePath);
        try
        {
            Midi = MidiFile.Read(_path);
            //Midi = MidiFile.Read(Directory.GetCurrentDirectory() + "/Assets/Resources/Materials/Midi/MidiFiles.mid");
        }
        catch (Exception e)
        {
            Debug.Log(e);
            _error = true;
            return;
        }

        //Debug.Log("stuck");

        _map = Midi.GetTempoMap();
        Tempo tempo = _map.GetTempoAtTime((MidiTimeSpan)0);
        TimeSignature speed = _map.GetTimeSignatureAtTime((MidiTimeSpan)0);
        //Debug.Log("time signature: " + speed.Numerator + "/" + speed.Denominator);

        // getting the speed in seconds
        _speed = 1 / (tempo.MicrosecondsPerQuarterNote * (4 / speed.Denominator) / speed.Numerator / 1000000.0f);
        //Debug.Log("tempo: " + _map.GetTempoAtTime((MidiTimeSpan)0));
        Debug.Log("speed: " + _speed);

        foreach (Lane laneObj in laneObjects)
        {
            laneObj.speed = _speed;
        }

        ICollection<Note> midiNote = Midi.GetNotes();

        Note[] notes = new Note[midiNote.Count];
        midiNote.CopyTo(notes, 0);

        Debug.Log("GameManager: notes length: " + notes.Length);
        try
        {
            PreprocessNotes(notes);
        }
        catch (Exception e)
        {
            Debug.Log(e);
            _error = true;
            return;
        }

        //Debug.Log("PREPROCESS FINISH");
        //Debug.Log("CONVERT FINISH");
        _doneMidi = true;
        return;
    }

    private void BaseScore()
    {
        //Debug.Log("went base score first");
        int perfect = 100000 / NoteDetails.Count;
        int great = (int)(0.88 * perfect);
        int good = (int)(0.88 * great);
        Debug.Log("GameManager: score perfect: " + perfect + ", great: " + great + ", good: " + good);

        _accuracy.Add("perfect", perfect);
        _accuracy.Add("great", great);
        _accuracy.Add("good", good);
        _accuracy.Add("missed", 0);
        return;

    }

    private void PreprocessNotes(Note[] notes)
    {
        Debug.Log("GameManager: preprocessing Notes");
        for (int i = 0; i < notes.Length - 1; i++)
        {
            //Debug.Log("preprocessing Notes: i: "+i);
            foreach (Lane currLane in laneObjects)
            {
                //Debug.Log("preprocessing Notes: lane: " + currLane._id);
                //Debug.Log("preprocessing Notes: notename: " + _notes[i].NoteName);
                if (currLane.checkNoteRestriction(notes[i]))
                {
                    //Debug.Log("preprocessing Notes: true: "+_notes[i].NoteName);
                    NoteInfo newInfo = new NoteInfo();
                    newInfo.StartTime = notes[i].TimeAs<MetricTimeSpan>(_map).TotalMilliseconds;
                    newInfo.DelayTime = notes[i + 1].TimeAs<MetricTimeSpan>(_map).TotalMilliseconds - newInfo.StartTime;
                    //newInfo.LaneAt = currLane;
                    newInfo.NoteName = notes[i].NoteName.ToString();
                    newInfo.NoteNumber = notes[i].NoteNumber;
                    newInfo.LaneNo1 = currLane._id;
                    newInfo.Data = new NoteData();
                    NoteDetails.Add(newInfo);
                    //Debug.Log("GameManager: currNote: " + newInfo.NoteNumber + " start: " + newInfo.StartTime + " delay: " + newInfo.DelayTime + " lane: " + newInfo.LaneNo1);
                    break;
                }
            }
        }

        foreach (Lane currLane in laneObjects)
        {
            //Debug.Log("preprocessing Notes: lane: " + currLane._id);
            //Debug.Log("preprocessing Notes: notename: " + _notes[i].NoteName);
            if (currLane.checkNoteRestriction(notes[notes.Length - 1]))
            {
                NoteInfo newInfo = new NoteInfo();
                newInfo.StartTime = notes[notes.Length - 1].TimeAs<MetricTimeSpan>(_map).TotalMilliseconds;
                newInfo.DelayTime = 0;
                //newInfo.LaneAt = currLane;
                newInfo.NoteName = notes[notes.Length - 1].NoteName.ToString();
                newInfo.NoteNumber = notes[notes.Length - 1].NoteNumber;
                newInfo.LaneNo1 = currLane._id;
                newInfo.Data = new NoteData();
                NoteDetails.Add(newInfo);
                //Debug.Log("GameManager: currNote: " + newInfo.NoteNumber + " start: " + newInfo.StartTime + " delay: " + newInfo.DelayTime + " lane: " + newInfo.LaneNo1);
                break;
            }
        }

        //Debug.Log("finished here");
        return;
    }

    public void DetectedNote(string note)
    {
        Debug.Log("DETECTED NOTE:" + note);
        int noteMidi = int.Parse(note);
        Note currNoteObj = new Note((SevenBitNumber)noteMidi);

        if (InstantiatedNotes.Count > 0)
        {
            GameObject currNote = InstantiatedNotes[0];
            //InstantiatedNotes.RemoveAt(0);

            SingleNote noteScript = currNote.GetComponent<SingleNote>();
            NoteDetails[noteScript.index].Data.setNoteNumber(noteMidi);

            // storing the lane of the detected note
            for (int i = 0; i < laneObjects.Length; i++)
            {
                //Debug.Log("preprocessing Notes: lane: " + currLane._id);
                //Debug.Log("preprocessing Notes: notename: " + _notes[i].NoteName);
                if (laneObjects[i].checkNoteRestriction(currNoteObj))
                {
                    NoteDetails[noteScript.index].Data.LaneNo = i;
                    break;
                }
            }

            // instant miss if the note played is different
            if (NoteDetails[noteScript.index].NoteNumber != noteMidi)
            {
                NoteDetails[noteScript.index].Data.setAccuracyType("missed");
            }
            CalculateScore(NoteDetails[noteScript.index].Data);
            noteScript.Consume();
        }

    }

    private void CalculateScore(NoteData data)
    {
        _currScore += _accuracy[data.getAccuracyType()];
        score.text = _currScore.ToString();
    }

    public void UpdateProgressBar()
    {
        Debug.Log("GameManager: updatebar called");
        slider.Next();
        //Debug.Log("slider: " + slider.value);
    }
}
