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
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UserCollection : MonoBehaviour
{
    //[SerializeField] GameObject collectionPanel; // the collection panel
    //[SerializeField] GameObject collectionContent; // horizontal content group
    [SerializeField] GameObject itemPrefab; // the item prefab
    [SerializeField] GameObject content; // horizontal content group
    [SerializeField] Button back;

    [SerializeField] User user; // User Data Asset

    private StorageReference storageRef;
    private FirebaseFirestore _db;

    private List<Item> _items;
    private GameObject currItemObj, secondItemObj;

    // Start is called before the first frame update
    void Start()
    {
        //_db = FirebaseFirestore.DefaultInstance;
        //storage = FirebaseStorage.DefaultInstance;
        //storageRef = storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");
        
        _db = Operations.db;
        storageRef = Operations.storageRef;

        back.onClick.AddListener(() =>
        {
            SceneManager.LoadScene("MainPage");
        });

        _items = new List<Item>();

        InstantiateAllBought();
        InstantiateOriginal();

    }


    private void InstantiateOriginal()
    {
        Debug.Log("UserCollection: Instantiate ori, count: "+_items.Count);
        if (_items.Count % 2 == 0)
        {
            GameObject ori = Instantiate(itemPrefab, content.transform);
            RawImage thePic = ori.transform.Find("Item").gameObject.transform.Find("ItemImg").gameObject.GetComponent<RawImage>();
            Texture2D loadedObject = Resources.Load("Felicia/guitar") as Texture2D;
            if (loadedObject == null)
            {
                throw new FileNotFoundException("...no file found - please check the configuration");
            }
            thePic.texture = loadedObject;
            ori.transform.Find("Item").gameObject.transform.Find("ItemName").gameObject.GetComponent<TextMeshProUGUI>().text = "Original skin";
        }
        else
        {
            secondItemObj.SetActive(true);
            RawImage thePic = secondItemObj.transform.Find("ItemImg").gameObject.GetComponent<RawImage>();
            Texture2D loadedObject = Resources.Load("Felicia/guitar") as Texture2D;
            if (loadedObject == null)
            {
                throw new FileNotFoundException("...no file found - please check the configuration");
            }
            thePic.texture = loadedObject;
            secondItemObj.transform.Find("ItemName").gameObject.GetComponent<TextMeshProUGUI>().text = "Original skin";

        }



    }
    private void InstantiateAllBought()
    {
        foreach (Item currItem in user.BoughtItems.Values)
        {
            Debug.Log("UserCollection:  id " + currItem.Id + " item " + currItem.Name + ", price " + currItem.Price);
            _items.Add(currItem);
            InstantiateItems(currItem, content.transform, _items.Count);

        }
    }

    private GameObject InstantiateItems(Item currItem, Transform parentTransform, int index)
    {
        UserItem boughtItem = null;
        if (index % 2 == 0)
        {
            Debug.Log("UserCollection: instantiating second ");
            secondItemObj.SetActive(true);
            boughtItem = currItemObj.GetComponent<UserItem>();
            boughtItem.SetUI2(currItem);

            StorageReference imagesRef = storageRef.Child(currItem.Category).Child(currItem.Img);
            RawImage thePic = secondItemObj.transform.Find("ItemImg").gameObject.GetComponent<RawImage>();
            Operations.GetInstance().DownloadImage(thePic, imagesRef);
            //downloadImage(secondItemObj, currItem);
            return secondItemObj;
        }
        else
        {
            Debug.Log("UserCollection: instantiating first ");
            GameObject item = Instantiate(itemPrefab, parentTransform);
            currItemObj = item;
            boughtItem = item.GetComponent<UserItem>();
            boughtItem.SetUI1(currItem);

            StorageReference imagesRef = storageRef.Child(currItem.Category).Child(currItem.Img);
            RawImage thePic = boughtItem.GetFirst().transform.Find("ItemImg").gameObject.GetComponent<RawImage>();
            
            Operations.GetInstance().DownloadImage(thePic, imagesRef);
            //downloadImage(boughtItem.GetFirst(), currItem);
            secondItemObj = boughtItem.GetSecond();
            return item;
        }


    }

    //private GameObject downloadImage(GameObject flashcardObj, Item item)
    //{
    //    StorageReference imagesRef = storageRef.Child(item.Category).Child(item.Img);

    //    // Fetch the download URL
    //    imagesRef.GetDownloadUrlAsync().ContinueWithOnMainThread(task =>
    //    {
    //        if (!task.IsFaulted && !task.IsCanceled)
    //        {
    //            Debug.Log("UserCollection: " + task.Result);
    //            //StartCoroutine(isDownloading(Convert.ToString(task.Result), _parent.transform.Find("FlashcardContentImage(Clone)").gameObject));
    //            StartCoroutine(isDownloading(Convert.ToString(task.Result), flashcardObj));

    //        }
    //    });

    //    return null;
    //}

    //// source: https://answers.unity.com/questions/1122905/how-do-you-download-image-to-uiimage.html
    //// the one without www: https://github.com/Vikings-Tech/FirebaseStorageTutorial/blob/master/Assets/Scripts/ImageLoader.cs
    //private IEnumerator isDownloading(string url, GameObject item)
    //{

    //    Debug.Log("Download URL: " + url);
    //    UnityWebRequest request = UnityWebRequestTexture.GetTexture(url);
    //    yield return request.SendWebRequest();
    //    Debug.Log("finished request");
    //    if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
    //    {
    //        Debug.Log(request.error);
    //    }

    //    else
    //    {
    //        RawImage thePic = item.transform.Find("ItemImg").gameObject.GetComponent<RawImage>();
    //        Debug.Log("UserCollection: " + thePic);
    //        thePic.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
    //    }

    //}
}
