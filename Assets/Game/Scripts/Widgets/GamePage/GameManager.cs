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
using System.Threading.Tasks;

public class GameManager : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI score;
    [SerializeField] TextMeshProUGUI comment;
    [SerializeField] GameObject multiplier;
    [SerializeField] Song currSong;
    [SerializeField] Lane[] laneObjects;
    [SerializeField] Button pauseBtn;
    [SerializeField] GameObject flowPanel;
    [SerializeField] Button playSymbol;
    [SerializeField] GameObject pauseSymbol;
    [SerializeField] GameResult result;
    [SerializeField] TestTarsos pitch;

    //public struct NoteInfo
    //{
    //    public string NoteName;
    //    public SevenBitNumber NoteNumber;
    //    public double StartTime;
    //    public double DelayTime; // start of next note - current note start time
    //    public Lane LaneAt;
    //    public NoteData data;
    //}

    //public struct NoteData
    //{
    //    public string accuracyType;
    //    public float startTime;
    //    public float endTime;
    //}

    // public struct NotePlayInfo

    public bool IsPlaying, IsPaused;

    private FirebaseFirestore _db;
    private TempoMap _map;
    private Note[] _notes;
    public List<NoteInfo> NoteDetails;
    private Dictionary<string, int> _accuracy = new Dictionary<string, int>();
    private bool _doneSong, _doneMidi, _delayed;
    private int currI, replayI;
    private float delay;
    private float _speed, _prevPause;
    private string _path;
    private int currScore;
    private float _startTime, _stopTime;
    public float PauseDuration;
    public int DestroyedNotes;
    public bool Replay;
    public float deltaTimeMan;
    public List<GameObject> InstantiatedNotes = new List<GameObject>();

    FirebaseStorage storage;
    StorageReference storageRef;


    public MidiFile Midi;


    // Start is called before the first frame update
    void Start()
    {
        _db = FirebaseFirestore.DefaultInstance;
        Debug.Log("initialized firestore");

        storage = FirebaseStorage.DefaultInstance;
        storageRef = storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");
        Debug.Log("initialized firestorage");

        pauseBtn.onClick.AddListener(Flow);
        playSymbol.onClick.AddListener(Flow);
        playSymbol.interactable = false;

        IsPlaying = false;
        IsPaused = false;
        currI = 0;
        _startTime = 0;
        _stopTime = 0;
        PauseDuration = 0;
        currScore = 0;
        DestroyedNotes = 0;
        score.text = "0";
        Replay = false;
        _delayed = false;
        deltaTimeMan = Time.deltaTime;

        if (result.replay)
        {
            Replay = result.replay;
            replayI = 0;
            NoteDetails = result.noteInfo;
            playSymbol.interactable = true;
            pauseBtn.interactable = false;
            flowPanel.SetActive(false);
            Debug.Log(NoteDetails.Count);
            ReplayGamePlay();
        }
        else
        {
            NoteDetails = new List<NoteInfo>();

            GetMidi();
            GetSong();

            InvokeRepeating("StartGame", 1.0f, 1.0f);
        }


    }

    private void ReplayGamePlay()
    {
        //float expectedEndTime = 2766.0f / currSong.speed;
        float diffWithActual = NoteDetails[0].Data.getExpectedEndTime() - NoteDetails[0].Data.getEndTime();
        Debug.Log("diff: " + diffWithActual);
        float delayExpected = 0.0f, delayActual = 0.0f;

        //if (diffWithActual < 0)
        //{
        //    delayActual = diffWithActual;
        //}
        //else
        //{
        //    delayExpected = diffWithActual;
        //}

        StartCoroutine(ReplayInstantiateExpected(delayExpected));
        //StartCoroutine(ReplayInstantiateActual(delayActual));


    }

    //private async void ReplayInstantiateExpected(float expectedDelay)
    //{
    //    Debug.Log("called1");
    //    await Task.Delay((int)expectedDelay);
    //    Debug.Log("called1");
    //    //float speed = _speed * 0.8f;
    //    while (currI < NoteDetails.Count)
    //    {
    //        Debug.Log(" i: " + currI + " _notes[i]: " + NoteDetails[currI] + " delay: " + expectedDelay);
    //        Debug.Log("note number:" + NoteDetails[currI].NoteName);
    //        Note currNote = new Note((SevenBitNumber)NoteDetails[currI].NoteNumber);
    //        laneObjects[NoteDetails[currI].LaneNo1].InstantiateObj(currNote.NoteName.ToString(), currNote.Octave.ToString(), currNote.NoteNumber, _speed, currI, 0);
    //        expectedDelay = (float)NoteDetails[currI].DelayTime;
    //        currI += 1;
    //        await Task.Delay((int)expectedDelay);
    //        //_noteDetails[i].LaneAt.InstantiateObj(_notes[i].NoteName.ToString(), _notes[i].NoteNumber);
    //        //delay = (float)_noteDetails[i].DelayTime;
    //    }
    //}

    public void Update()
    {
        deltaTimeMan = Time.deltaTime;
    }

    private IEnumerator ReplayInstantiateExpected(float expectedDelay)
    {
        Debug.Log("called1");
        yield return new WaitForSeconds(expectedDelay / 1000.0f);
        Debug.Log("called1");
        //float speed = _speed * 0.8f;
        while (currI < NoteDetails.Count)
        {
            //deltaTimeMan = Time.deltaTime;
            // if expectedDelay<0, then the actual end time is longer than expected, else it is faster
            Debug.Log("expected end: " + NoteDetails[currI].Data.getExpectedEndTime() + " actual end: " + NoteDetails[currI].Data.getEndTime());
            expectedDelay = NoteDetails[currI].Data.getExpectedEndTime() - NoteDetails[currI].Data.getEndTime();
            float tempDistance = NoteDetails[currI].Data.getExpectedEndPos() - NoteDetails[currI].Data.ActualEndPos;
            Vector3 distance = new Vector3(tempDistance,0,0);

            Debug.Log(" i: " + currI + " delay: " + expectedDelay + " distance: "+distance.x +"delta:"+ deltaTimeMan);
            Debug.Log(" i: " + currI + " expected note number:" + NoteDetails[currI].NoteNumber + " lane: " + NoteDetails[currI].LaneNo1);

            //Debug.Log(" i: " + replayI + " _notes[i]: " + NoteDetails[replayI] + " delay: " + expectedDelay);
            Debug.Log(" i: " + currI + " actual note number:" + NoteDetails[currI].Data.getNoteNumber() + " lane: " + NoteDetails[currI].Data.LaneNo);

            Note currNote;
            currNote = new Note((SevenBitNumber)NoteDetails[currI].NoteNumber);
            laneObjects[NoteDetails[currI].LaneNo1].InstantiateObj(currNote.NoteName.ToString(), currNote.Octave.ToString(), currNote.NoteNumber, currSong.speed, currI, 0, new Vector3(0, 0, 0));
            // TESTING
            //currNote = new Note((SevenBitNumber)40);
            //laneObjects[5].InstantiateObj(currNote.NoteName.ToString(), currNote.Octave.ToString(), currNote.NoteNumber, currSong.speed, replayI, 0, distance);
            //InstantiatedNotes[InstantiatedNotes.Count - 1].transform.Find("note").GetComponent<TextMeshProUGUI>().color = Color.blue;



            if (NoteDetails[currI].Data.getAccuracyType() != "missed" && Math.Abs(tempDistance) <= 204.0f)
            {
                currNote = new Note((SevenBitNumber)NoteDetails[currI].Data.getNoteNumber());
                laneObjects[NoteDetails[currI].Data.LaneNo].InstantiateObj(currNote.NoteName.ToString(), currNote.Octave.ToString(), currNote.NoteNumber, currSong.speed, replayI, 0, distance);
                InstantiatedNotes[InstantiatedNotes.Count - 1].transform.Find("note").GetComponent<TextMeshProUGUI>().color = Color.blue;
            }else if(NoteDetails[currI].Data.getAccuracyType() == "missed")
            {
                //currNote = new Note((SevenBitNumber)NoteDetails[currI].Data.getNoteNumber());
                string noteName, noteOctave;
                if (NoteDetails[currI].Data.getNoteNumber() !=-1)
                {
                    currNote = new Note((SevenBitNumber)NoteDetails[currI].Data.getNoteNumber());
                    noteName = currNote.NoteName.ToString();
                    noteOctave = currNote.Octave.ToString();
                }
                else
                {
                    noteName = "X";
                    noteOctave = "X";
                }
                laneObjects[(NoteDetails[currI].LaneNo1-1)%laneObjects.Length].InstantiateObj(noteName, noteOctave, currNote.NoteNumber, currSong.speed, currI, 0, distance);
                InstantiatedNotes[InstantiatedNotes.Count - 1].transform.Find("note").GetComponent<TextMeshProUGUI>().color = Color.red;
            }
            float delay = (float)NoteDetails[currI].DelayTime;
            currI += 1;
            yield return new WaitForSeconds(delay / 1000.0f);
            //_noteDetails[i].LaneAt.InstantiateObj(_notes[i].NoteName.ToString(), _notes[i].NoteNumber);
            //delay = (float)_noteDetails[i].DelayTime;
        }
    }

    //private IEnumerator ReplayInstantiateActual(float actualDelay)
    //{
    //    Debug.Log("called2");
    //    yield return new WaitForSeconds(actualDelay/1000.0f);
    //    Debug.Log("called2");
    //    while (replayI < NoteDetails.Count)
    //    {
    //        Debug.Log(" i: " + replayI + " _notes[i]: " + NoteDetails[replayI] + " delay: " + actualDelay);
    //        //Debug.Log("note number:" + NoteDetails[currI].Data.getNoteNumber());

    //        //Note currNote = new Note((SevenBitNumber)NoteDetails[currI].Data.getNoteNumber());
    //        //laneObjects[NoteDetails[replayI].Data.LaneNo].InstantiateObj(currNote.NoteName.ToString(), currNote.Octave.ToString(), currNote.NoteNumber, currSong.speed, replayI, 0);

    //        Note currNote = new Note((SevenBitNumber)40);
    //        laneObjects[5].InstantiateObj(currNote.NoteName.ToString(), currNote.Octave.ToString(), currNote.NoteNumber, currSong.speed, replayI, 0);

    //        if (replayI + 1 != NoteDetails.Count)
    //        {
    //            actualDelay = (float)NoteDetails[replayI + 1].Data.getEndTime() - NoteDetails[replayI].Data.getEndTime();
    //        }
    //        else
    //        {
    //            actualDelay = 0;
    //        }
    //        replayI += 1;
    //        yield return new WaitForSeconds(actualDelay);
    //        //_noteDetails[i].LaneAt.InstantiateObj(_notes[i].NoteName.ToString(), _notes[i].NoteNumber);
    //        //delay = (float)_noteDetails[i].DelayTime;
    //    }
    //}

    // imp
    private void Flow()
    {
        if (IsPlaying)
        {
            IsPlaying = false;
            IsPaused = true;
            _stopTime = Time.time;
            Debug.Log("stopTime: " + _stopTime);
            flowPanel.SetActive(true);
            playSymbol.gameObject.SetActive(true);
            pitch.Pause();
        }
        else
        {
            IsPlaying = true;
            if (_stopTime > 0)
            {
                _prevPause = PauseDuration;
                PauseDuration += Time.time - _stopTime + 3;
                Debug.Log("PauseDuration: " + PauseDuration);
            }
            flowPanel.SetActive(false);
            playSymbol.gameObject.SetActive(false);
            pitch.BtnOnClick();
            if (IsPaused)
            {
                //IsPaused = false;
                IsPlaying = false;
                StartCoroutine(PlayDelay());
            }
            else
            {
                StartCoroutine(InstantiateNote());
            }
            //StartCoroutine(InstantiateNote());
        }
    }

    private IEnumerator PlayDelay()
    {
        yield return new WaitForSeconds(3);
        IsPlaying = true;
        StartCoroutine(InstantiateNote());

    }

    private void StartGame()
    {
        if (!_doneSong || !_doneMidi)
        {
            //Debug.Log("song: "+_doneSong+" midi: "+_doneMidi);
            //SHOW LOADING PANEL
            return;
        }
        CancelInvoke();
        // ENABLE PLAY BUTTON
        playSymbol.interactable = true;
        //start instantiating the game objects based on the lane
        // possible way:
        delay = 0;
        //Debug.Log("_notes.Length: " + _notes.Length);
        Debug.Log("_noteDetails.Length: " + NoteDetails.Count);

    }

    public void GoToScore()
    {
        Debug.Log("go to score");
        pitch.Pause();
        // TODO: upload score to the database
        if (!result.replay)
        {
            currSong.speed = _speed;
            result.score = currScore;
            result.noteInfo = NoteDetails;
        }
        SceneManager.LoadScene("ScorePage");
    }

    private IEnumerator InstantiateNote()
    {
        // if paused, it is possible that it happens in the middle of a delay, thus to ensure that the length between notes
        // are still kept as actual, an additional delay check is needed
        if (IsPaused)
        {
            IsPaused = false;
            float tmpDelay = (delay / 1000.0f) - (_stopTime - (NoteDetails[currI - 1].Data.getStartTime() + _prevPause));
            //Debug.Log("delay: " + (delay / 1000.0f));
            //Debug.Log("tmpDelay: " + tmpDelay);
            if (tmpDelay > 0)
            {
                yield return new WaitForSeconds(tmpDelay);
            }

        }

        while (currI < NoteDetails.Count && IsPlaying)
        {
            //Debug.Log(" i: " + currI + " _notes[i]: " + NoteDetails[currI].NoteName.ToString() + " delay: " + (delay / 1000.0f));
            float currTime = Time.time - PauseDuration;
            if (currI == 0)
            {
                _startTime = currTime;
            }
            Note currNote = new Note(NoteDetails[currI].NoteNumber);
            laneObjects[NoteDetails[currI].LaneNo1].InstantiateObj(currNote.NoteName.ToString(), currNote.Octave.ToString(), currNote.NoteNumber, _speed, currI, currTime, new Vector3(0,0,0));

            NoteDetails[currI].Data.setStartTime(currTime);
            //Debug.Log(" i: " + currI+"starttime: " + NoteDetails[currI].Data.getStartTime() + " pause: " + PauseDuration);
            delay = (float)NoteDetails[currI].DelayTime;
            currI += 1;
            yield return new WaitForSeconds(delay / 1000.0f);
            //_noteDetails[i].LaneAt.InstantiateObj(_notes[i].NoteName.ToString(), _notes[i].NoteNumber);
            //delay = (float)_noteDetails[i].DelayTime;
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
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), _parent.transform.Find("FlashcardContentImage(Clone)").gameObject));

                // TEST IN ANDROID USES Application.persistentDataPath+"/SongFile.wav"
                //string path = Path.Combine(Application.dataPath + "/Resources/Materials/Midi", "SongFile.wav").Replace("\\", "/");
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
                Debug.Log("Download URL: " + task.Result);
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), _parent.transform.Find("FlashcardContentImage(Clone)").gameObject));

                // TEST IN ANDROID USES Application.persistentDataPath+"/Midifiles.mid"
                //string path = Path.Combine(Application.dataPath + "/Resources/Materials/Midi", "MidiFiles.mid").Replace("\\", "/");
                string path = Application.persistentDataPath + "/MidiFiles.mid";
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), path));
                isDownloading(Convert.ToString(task.Result), path);
                ConvertToNotes(_path);



            }
        });

    }

    private void isDownloading(string url, string path)
    {

        UnityWebRequest request = UnityWebRequest.Get(url);
        Debug.Log("PATH: " + path);

        using (request.downloadHandler = new DownloadHandlerFile(path))
        {

            request.SendWebRequest();
            Debug.Log("finished request");
            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(request.error);
            }

            else
            {
                //byte[] midiInByte = ((DownloadHandlerFile)request.downloadHandler).data;
                //BytesToMidiEventConverter converter = new BytesToMidiEventConverter();
                //ICollection<MidiEvent> file = converter.ConvertMultiple(midiInByte);

                //MidiFile midFile = MidiFile.Read(path);

                while (!request.downloadHandler.isDone)
                {
                    //Debug.Log(request.downloadProgress);
                    // might need to make a loading page
                }
                Debug.Log("File downloaded at: " + path);
                _path = path;

            }
        }

    }

    // Converts the Midi file to an array of notes
    private void ConvertToNotes(string filePath)
    {
        Debug.Log("converting to notes of file: " + filePath);
        try
        {
            Midi = MidiFile.Read(_path);
            //Midi = MidiFile.Read(Directory.GetCurrentDirectory() + "/Assets/Resources/Materials/Midi/MidiFiles.mid");
        }
        catch (Exception e)
        {
            Debug.Log(e);
        }

        Debug.Log("stuck");

        _map = Midi.GetTempoMap();
        Tempo tempo = _map.GetTempoAtTime((MidiTimeSpan)0);
        TimeSignature speed = _map.GetTimeSignatureAtTime((MidiTimeSpan)0);
        Debug.Log("time signature: " + speed.Numerator + "/" + speed.Denominator);

        // getting the speed in seconds
        _speed = 1 / (tempo.MicrosecondsPerQuarterNote * (4 / speed.Denominator) / speed.Numerator / 1000000.0f);
        Debug.Log("tempo: " + _map.GetTempoAtTime((MidiTimeSpan)0));
        Debug.Log("speed: " + _speed);

        foreach (Lane laneObj in laneObjects)
        {
            laneObj.speed = _speed;
        }

        ICollection<Note> midiNote = Midi.GetNotes();

        Note[] notes = new Note[midiNote.Count];
        midiNote.CopyTo(notes, 0);

        Debug.Log("notes length: " + notes.Length);
        try
        {
            PreprocessNotes(notes);
        }
        catch (Exception e)
        {
            Debug.Log(e);
        }

        Debug.Log("PREPROCESS FINISH");
        BaseScore();
        Debug.Log("CONVERT FINISH");
        _doneMidi = true;
        return;
    }

    private void BaseScore()
    {
        Debug.Log("went base score first");
        int perfect = 100000 / NoteDetails.Count;
        int great = (int)(0.88 * perfect);
        int good = (int)(0.78 * great);

        _accuracy.Add("perfect", perfect);
        _accuracy.Add("great", great);
        _accuracy.Add("good", good);
        _accuracy.Add("missed", 0);
        return;

    }

    private void PreprocessNotes(Note[] notes)
    {
        Debug.Log("preprocessing Notes");
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
                    Debug.Log("currNote: " + newInfo.NoteNumber + " start: " + newInfo.StartTime + " delay: " + newInfo.DelayTime + " lane: " + newInfo.LaneNo1);
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
                //Debug.Log("currNote: " + _notes[i].NoteName + _notes[i].Octave + " start: " + newInfo.StartTime + " delay: " + newInfo.DelayTime + " lane: " + newInfo.LaneAt);
                break;
            }
        }

        Debug.Log("finished here");
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
        currScore += _accuracy[data.getAccuracyType()];
        score.text = currScore.ToString();
    }

}
