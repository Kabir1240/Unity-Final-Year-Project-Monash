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
    [SerializeField] GameObject collectionPanel;
    [SerializeField] GameObject collectionContent;
    [SerializeField] GameObject itemPrefab;
    [SerializeField] GameObject content;
    [SerializeField] Button back;
    [SerializeField] User user;

    FirebaseStorage storage;
    StorageReference storageRef;

    private FirebaseFirestore _db;
    private List<Item> _items;
    private GameObject currItemObj, secondItemObj;

    // Start is called before the first frame update
    void Start()
    {
        _db = FirebaseFirestore.DefaultInstance;
        storage = FirebaseStorage.DefaultInstance;
        storageRef = storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");

        back.onClick.AddListener(() =>
        {
            SceneManager.LoadScene("MainPage");
        });

        _items = new List<Item>();

        InstantiateAllBought();
        InstantiateOriginal();

    }

    //private void FetchFromDb()
    //{
    //    CollectionReference userItems = _db.Collection("User").Document(user.Id).Collection("Items");

    //    userItems.GetSnapshotAsync().ContinueWithOnMainThread(task =>
    //    {
    //        try
    //        {
    //            Debug.Log("UserCollection: getting all item");
    //            QuerySnapshot allItemsQuerySnapshot = task.Result;
    //            Debug.Log("UserCollection:  items count: " + allItemsQuerySnapshot.Count);
    //            Debug.Log("UserCollection:  task status: " + task.IsCompletedSuccessfully);
    //            foreach (DocumentSnapshot documentSnapshot in allItemsQuerySnapshot.Documents)
    //            {
    //                Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
    //                Dictionary<string, object> item = documentSnapshot.ToDictionary();

    //                Item currItem = new Item(documentSnapshot.Id, item["Category"].ToString(), item["Image"].ToString(), item["Name"].ToString(), Convert.ToInt32(item["Price"]), item["Description"].ToString());
    //                Debug.Log("UserCollection:  id " + documentSnapshot.Id + " item " + currItem.Name + ", price " + currItem.Price);
    //                _items.Add(currItem);
    //                GameObject currItemObj = InstantiateItems(currItem, content.transform);

    //            }
    //        }
    //        catch (Exception e)
    //        {
    //            Debug.Log(e);
    //        }
    //    });
    //}

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
            downloadImage(secondItemObj, currItem);
            return secondItemObj;
        }
        else
        {
            Debug.Log("UserCollection: instantiating first ");
            GameObject item = Instantiate(itemPrefab, parentTransform);
            currItemObj = item;
            boughtItem = item.GetComponent<UserItem>();
            boughtItem.SetUI1(currItem);
            downloadImage(boughtItem.GetFirst(), currItem);
            secondItemObj = boughtItem.GetSecond();
            return item;
        }


    }

    private GameObject downloadImage(GameObject flashcardObj, Item item)
    {
        StorageReference imagesRef = storageRef.Child(item.Category).Child(item.Img);

        // Fetch the download URL
        imagesRef.GetDownloadUrlAsync().ContinueWithOnMainThread(task =>
        {
            if (!task.IsFaulted && !task.IsCanceled)
            {
                Debug.Log("UserCollection: " + task.Result);
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), _parent.transform.Find("FlashcardContentImage(Clone)").gameObject));
                StartCoroutine(isDownloading(Convert.ToString(task.Result), flashcardObj));

            }
        });

        return null;
    }

    // source: https://answers.unity.com/questions/1122905/how-do-you-download-image-to-uiimage.html
    // the one without www: https://github.com/Vikings-Tech/FirebaseStorageTutorial/blob/master/Assets/Scripts/ImageLoader.cs
    private IEnumerator isDownloading(string url, GameObject item)
    {

        Debug.Log("Download URL: " + url);
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(url);
        yield return request.SendWebRequest();
        Debug.Log("finished request");
        if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
        {
            Debug.Log(request.error);
        }

        else
        {
            RawImage thePic = item.transform.Find("ItemImg").gameObject.GetComponent<RawImage>();
            Debug.Log("UserCollection: " + thePic);
            thePic.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
        }

    }
}
