using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;
using Firebase.Storage;
using Firebase.Extensions;
using UnityEngine.Networking;
using UnityEngine.UI;
using System.Collections;

public class FlashcardImage : MonoBehaviour, FlashcardInterface
{
    [SerializeField]private GameObject flashcardObject;
    [SerializeField] private TextMeshProUGUI titleObj, subheadingObj, pageNoObj;
    //public FlashcardImage() { 
    //    flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardImage");
    //    titleObj = flashcardObject.transform.Find("Title").GetComponent<TextMeshProUGUI>();
    //    subheadingObj = flashcardObject.transform.Find("Subheading").GetComponent<TextMeshProUGUI>();
    //    pageNoObj = flashcardObject.transform.Find("Circle").transform.Find("Number").GetComponent<TextMeshProUGUI>();
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
        //GameObject flashcardObject = (GameObject)FlashcardManager.LoadPrefabFromFile("FlashcardImage");
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

        return flashcardObject;
    }
}
