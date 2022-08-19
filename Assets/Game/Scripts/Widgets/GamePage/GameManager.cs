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

public class GameManager : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI score;
    [SerializeField] TextMeshProUGUI comment;
    [SerializeField] GameObject multiplier;
    [SerializeField] Song currSong;
    [SerializeField] Lane[] laneObjects;

    public struct NoteInfo
    {
        public string NoteName;
        public SevenBitNumber NoteNumber;
        public double StartTime;
        public double DelayTime; // start of next note - current note start time
        public Lane LaneAt;
    }

    private FirebaseFirestore _db;
    private TempoMap _map;
    private Note[] _notes;
    private List<NoteInfo> _noteDetails;
    private int _perfect, _great, _good, _miss;
    private bool _doneSong, _doneMidi;


    //private string _path;

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

        _noteDetails = new List<NoteInfo>();

        GetMidi();
        GetSong();

        InvokeRepeating("StartGame", 1.0f, 1.0f);
    }

    private void StartGame()
    {
        if (!_doneSong || !_doneMidi)
        {
            return;
        }
        CancelInvoke();
        //start instantiating the game objects based on the lane
        // possible way:
        double delay = 0;
        for(int i = 0; i<_notes.Length;i++)
        {
            
            StartCoroutine(InstantiateNote(delay, i));
            delay = _noteDetails[i].DelayTime;
        }
            
    }

    private IEnumerator InstantiateNote(double delay, int i)
    {
        _noteDetails[i].LaneAt.InstantiateObj(_notes[i].NoteName.ToString(), _notes[i].NoteNumber);
        yield return new WaitForSeconds((float)(delay / 1000.0d));
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
                string path = Path.Combine(Application.dataPath + "/Resources/Materials/Midi", "SongFile.wav").Replace("\\", "/");
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
                string path = Path.Combine(Application.dataPath + "/Resources/Materials/Midi", "MidiFiles.mid").Replace("\\", "/");
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), path));
                isDownloading(Convert.ToString(task.Result), path);
                ConvertToNotes(path);
                _doneMidi = true;

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
                
            }
        }

    }

    // Converts the Midi file to an array of notes
    private void ConvertToNotes(string filePath)
    {
        Debug.Log("converting to notes of file: " + filePath);
        try
        {
            Midi = MidiFile.Read(Directory.GetCurrentDirectory() + "/Assets/Resources/Materials/Midi/MidiFiles.mid");
        }
        catch (Exception e)
        {
            Debug.Log(e);
        }

        Debug.Log("stuck");

        _map = Midi.GetTempoMap();
        Debug.Log("tempo: " + _map.GetTempoAtTime((MidiTimeSpan)0));

        ICollection<Note> midiNote = Midi.GetNotes();
        _notes = new Note[midiNote.Count];
        midiNote.CopyTo(_notes, 0);

        PreprocessNotes();
        BaseScore();
    }

    private void BaseScore()
    {
        Debug.Log("went base score first");
        _perfect = 100000 / _notes.Length;
        _great = (int)0.88 * _perfect;
        _good = (int)0.78 * _great;
        _miss = 0;

    }

    private void PreprocessNotes()
    {
        Debug.Log("preprocessing Notes");
        for (int i = 0; i < _notes.Length - 1; i++)
        {
            foreach (Lane currLane in laneObjects)
            {
                if (currLane.checkNoteRestriction(_notes[i]))
                {
                    NoteInfo newInfo = new NoteInfo();
                    newInfo.StartTime = _notes[i].TimeAs<MetricTimeSpan>(_map).TotalMilliseconds;
                    newInfo.DelayTime = _notes[i + 1].TimeAs<MetricTimeSpan>(_map).TotalMilliseconds - newInfo.StartTime;
                    newInfo.LaneAt = currLane;
                    _noteDetails.Add(newInfo);
                    Debug.Log("currNote: " + _notes[i].NoteName + _notes[i].Octave + " start: " + newInfo.StartTime + " delay: " + newInfo.DelayTime + " lane: " + newInfo.LaneAt);
                    break;
                }
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

}
