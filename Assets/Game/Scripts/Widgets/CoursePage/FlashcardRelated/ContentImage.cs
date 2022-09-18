using Firebase.Extensions;
using Firebase.Storage;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class ContentImage : MonoBehaviour, FlashcardInterface
{
    [SerializeField] private GameObject flashcardObject;
    [SerializeField] private TextMeshProUGUI titleObj, subheadingObj, pageNoObj, contentObj;
    //private FirebaseStorage storage;
    //private StorageReference storageRef;
    //public ContentImage() {
    //    flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardContentImage");
    //    titleObj = flashcardObject.transform.Find("Title").GetComponent<TextMeshProUGUI>();
    //    subheadingObj = flashcardObject.transform.Find("Subheading").GetComponent<TextMeshProUGUI>();
    //    pageNoObj = flashcardObject.transform.Find("Circle").transform.Find("Number").GetComponent<TextMeshProUGUI>();
    //    contentObj = flashcardObject.transform.Find("Content").GetComponent<TextMeshProUGUI>();
    //}
    //void Start()
    //{
    //    storage = FirebaseStorage.DefaultInstance;
    //    storageRef = storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");
    //}

    public GameObject instantiatedObjFunctionality(GameObject flashcardObject, Dictionary<string, object> flashcard)
    {
        //TESTING
        return downloadImage(flashcardObject, flashcard);
    }

        public GameObject downloadImage(GameObject flashcardObj, Dictionary<string, object> flashcard)
    {
        // TODO: FOR TESTING PURPOSES ONLY DELETE THIS
        if (Convert.ToString(flashcard["Image"]) == "")
        {
            return flashcardObj;
        }
        StorageReference imagesRef = FlashcardManager.storageRef.Child("Images").Child(Convert.ToString(flashcard["Image"]));

        // Fetch the download URL
        imagesRef.GetDownloadUrlAsync().ContinueWithOnMainThread(task =>
        {
            if (!task.IsFaulted && !task.IsCanceled)
            {
                Debug.Log("Download URL: " + task.Result);
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), _parent.transform.Find("FlashcardContentImage(Clone)").gameObject));
                StartCoroutine(isDownloading(Convert.ToString(task.Result), flashcardObj));

            }
        });

        return null;
    }
    // source: https://answers.unity.com/questions/1122905/how-do-you-download-image-to-uiimage.html
    // the one without www: https://github.com/Vikings-Tech/FirebaseStorageTutorial/blob/master/Assets/Scripts/ImageLoader.cs
    private IEnumerator isDownloading(string url, GameObject flashcard)
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

    public GameObject setAllData(Dictionary<string, object> flashcard, string title, string subheading, int no)
    {
        //instantiate the game object here to the scene
        //GameObject flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardContentImage");
        //Debug.Log(flashcardObject);

        //GameObject parent = flashcardObject.transform.Find("FlashcardBasic").gameObject;
        //Debug.Log(parent);

        GameObject parent = flashcardObject;
        Debug.Log(parent);

        //TextMeshProUGUI titleObj = flashcardObject.transform.Find("Title").GetComponent<TextMeshProUGUI>();
        titleObj.text = title;
        Debug.Log(titleObj);

        //TextMeshProUGUI subheadingObj = flashcardObject.transform.Find("Subheading").GetComponent<TextMeshProUGUI>();
        subheadingObj.text = subheading;

        //TextMeshProUGUI pageNoObj = flashcardObject.transform.Find("Circle").transform.Find("Number").GetComponent<TextMeshProUGUI>();
        pageNoObj.text = no.ToString();

        //TextMeshProUGUI contentObj = flashcardObject.transform.Find("Content").GetComponent<TextMeshProUGUI>();
        contentObj.text = Convert.ToString(flashcard["Content"]);

        //manager.downloadImage(flashcardObject, flashcard);

        return flashcardObject;
    }
}
