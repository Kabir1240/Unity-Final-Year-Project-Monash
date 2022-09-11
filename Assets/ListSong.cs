using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//for UI
using UnityEngine.UI;
//for Firebase
using Firebase;
using Firebase.Database;
//for changing page
using UnityEngine.SceneManagement;

public class ListSong : MonoBehaviour
{
    //List<string> SongList;

    //[SerializeField] GameObject songbtn;
    //[SerializedField] Transform songList;

    //// Start is called before the first frame update
    //void Start() {
    //    //fetch data from database
    //    // Get the root reference location of the database
    //    DatabaseReference reference = FirebaseDatabase.DefaultInstance.RootReference;

    //    //accessing Level database
    //    reference.GetReference("Level").GetValueAsync().ContinueWithOnMainThread(task => {
    //        if(task.IsCompleted){
    //            //snapshot shows all data of Level
    //            DataSnapshot snapshot = task.Result;

    //            //looping through the SongIds list to get all song title to be displayed
    //            for(var i = 0; i < snapshot.SongIds.Count; i++){
    //                current = snapshot.SongIds[i];
    //                current_title = current.Title;

    //                //adding the title songs into the song list
    //                SongList.Add(current_title.ToString());
    //            }
    //        }
    //    })

    //    //creating the buttons & using the helper function when clicked
    //    for (int i = 0; i < SongList.Count; i++){
    //        GameObject button = (GameObject)Instantiate (songbtn);
    //        button.GetComponent<Text>().text = SongList[i];
    //        button.GetComponentInChildren<Button>().onClick.AddListener(
    //            () => {LoadScene(GamePage););
    //        button.transform.parent = songList;
    //    }
    //}

    ////helper function to change page
    //void LoadScene(string sceneName){
    //    SceneManager.LoadScene(sceneName);
    //}
}
