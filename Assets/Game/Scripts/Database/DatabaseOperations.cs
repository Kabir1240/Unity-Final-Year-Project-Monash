using Firebase.Extensions;
using Firebase.Firestore;
using Firebase.Storage;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class DatabaseOperations: MonoBehaviour
{
    private static FirebaseFirestore _db = FirebaseFirestore.DefaultInstance;
    private static FirebaseStorage _storage= FirebaseStorage.DefaultInstance;
    private static StorageReference _storageRef= _storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");

    public GameObject DownloadImage(GameObject theObject, Dictionary<string, object> data)
    {
        StorageReference imagesRef = _storageRef.Child(Convert.ToString(data["Image"]));

        // Fetch the download URL
        imagesRef.GetDownloadUrlAsync().ContinueWithOnMainThread(task =>
        {
            if (!task.IsFaulted && !task.IsCanceled)
            {
                Debug.Log("Download URL: " + task.Result);
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), _parent.transform.Find("FlashcardContentImage(Clone)").gameObject));
                StartCoroutine(isDownloading(Convert.ToString(task.Result), theObject));

            }
        });

        return null;
    }
    // source: https://answers.unity.com/questions/1122905/how-do-you-download-image-to-uiimage.html
    // the one without www: https://github.com/Vikings-Tech/FirebaseStorageTutorial/blob/master/Assets/Scripts/ImageLoader.cs
    private static IEnumerator isDownloading(string url, GameObject flashcard)
    {

        UnityWebRequest request = UnityWebRequestTexture.GetTexture(url);
        yield return request.SendWebRequest();
        Debug.Log("finished request");
        if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
        {
            Debug.Log(request.error);
        }

        else
        {
            RawImage thePic = flashcard.transform.Find("Canvas").gameObject.transform.Find("Image").gameObject.GetComponent<RawImage>();
            Debug.Log(thePic);
            thePic.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
        }

    }
}

