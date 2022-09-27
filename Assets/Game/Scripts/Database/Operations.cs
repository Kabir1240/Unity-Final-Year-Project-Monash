using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Firestore;
using Firebase.Extensions;
using System;
using Firebase.Auth;
using UnityEngine.SceneManagement;
using Firebase.Storage;
using UnityEngine.Networking;
using UnityEngine.UI;
using System.IO;

public class Operations : MonoBehaviour
{
    public static Operations instance;
    public static FirebaseFirestore db;
    public static FirebaseStorage storage;
    public static StorageReference storageRef;
    //[SerializeField] User currUser;
    //private FirebaseApp app;

    //holding a reference to every data asset so they don't get unloaded and changes can be persistent
    [SerializeField] private User user;
    [SerializeField] private Level level;
    [SerializeField] private AssetManager asset;
    [SerializeField] private Song song;
    [SerializeField] private ModuleLevel modLevel; // might not be needed
    //[SerializeField] private

    // Start is called before the first frame update
    void Awake()
    {
        DontDestroyOnLoad(gameObject);
        if (instance == null)
        {
            Debug.Log("name: " + gameObject.name);
            instance = this;
            //Debug.Log("Initializing..");
            //db = FirebaseFirestore.DefaultInstance;
            //Debug.Log("db object: " + db);
            //storage = FirebaseStorage.DefaultInstance;
            //Debug.Log("storage object: " + storage);
            //storageRef = storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");
        }
        else if (instance != this)
        {
            Destroy(instance.gameObject);
            instance = this;
        }
    }

    public static void InitializeDb()
    {
        Debug.Log("Initializing..");
        db = FirebaseFirestore.DefaultInstance;
        Debug.Log("db object: " + db);
        storage = FirebaseStorage.DefaultInstance;
        Debug.Log("storage object: " + storage);
        storageRef = storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");
    }

    public static Operations GetInstance()
    {
        return instance;
    }

    public void SaveTexture(Texture2D tex, string name)
    {
        //Texture2D tex = (Texture2D)currItem.transform.Find("Item").gameObject.transform.Find("ItemImg").gameObject.GetComponent<RawImage>().texture;
        byte[] texBytes = tex.EncodeToJPG(50);
        //UNCOMMENT THIS IF NOT TESTING
        //File.WriteAllBytes(Application.persistentDataPath + "/FIT3162Files/"+item.Name+".jpg", texBytes);
        Debug.Log("StoreManager: file saved at path " + Application.persistentDataPath + "/FIT3162Files/" + name + ".jpg");
        File.WriteAllBytes(Application.persistentDataPath + "/FIT3162Files/" + name + ".jpg", texBytes);
    }

    // for ContentImage
    public GameObject DownloadImageAndSave(RawImage rawImg, StorageReference imagesRef, string itemName)
    {
        //StorageReference imagesRef = storageRef.Child(item.Category).Child(item.Img);

        // Fetch the download URL
        imagesRef.GetDownloadUrlAsync().ContinueWithOnMainThread(task =>
        {
            if (!task.IsFaulted && !task.IsCanceled)
            {
                Debug.Log("Download URL: " + task.Result);
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), _parent.transform.Find("FlashcardContentImage(Clone)").gameObject));
                StartCoroutine(isDownloadingAndSave(Convert.ToString(task.Result), rawImg, itemName));

            }
        });

        return null;
    }



    // for ContentImage
    public GameObject DownloadImage(RawImage rawImg, StorageReference imagesRef)
    {
        //StorageReference imagesRef = storageRef.Child(item.Category).Child(item.Img);

        // Fetch the download URL
        imagesRef.GetDownloadUrlAsync().ContinueWithOnMainThread(task =>
        {
            if (!task.IsFaulted && !task.IsCanceled)
            {
                Debug.Log("Download URL: " + task.Result);
                //StartCoroutine(isDownloading(Convert.ToString(task.Result), _parent.transform.Find("FlashcardContentImage(Clone)").gameObject));
                StartCoroutine(isDownloading(Convert.ToString(task.Result), rawImg));

            }
        });

        return null;
    }

    // source: https://answers.unity.com/questions/1122905/how-do-you-download-image-to-uiimage.html
    // the one without www: https://github.com/Vikings-Tech/FirebaseStorageTutorial/blob/master/Assets/Scripts/ImageLoader.cs
    public IEnumerator isDownloading(string url, RawImage rawImg)
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
            if (rawImg != null)
            {
                Debug.Log(SceneManager.GetActiveScene().name + " pic: " + rawImg);
                rawImg.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
            }
           
        }

    }

    public IEnumerator isDownloadingAndSave(string url, RawImage rawImg, string itemName)
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
            if (rawImg != null)
            {
                Debug.Log(SceneManager.GetActiveScene().name + " pic: " + rawImg);
                rawImg.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
                Texture2D tex = (Texture2D)rawImg.texture;
                SaveTexture(tex, itemName);

            }

        }

    }

    //public void NewUserItem(Item item)
    //{
    //    currUser.addItems(item);

    //    Dictionary<string, object> newItem = new Dictionary<string, object>{
    //                { "Category", item.Category},
    //                { "Name", item.Name},
    //                { "Image", item.Img}};
    //    db.Collection("User").Document(currUser.Id).Collection("Items").Document(item.Id).SetAsync(newItem).ContinueWithOnMainThread(task =>
    //    {
    //        Debug.Log("StoreManager: Created new Item in Items collection in User");
    //    });
    //}

    //public async void FetchFromDb()
    //{
    //    CollectionReference shop = _db.Collection("Shop");

    //    shop.GetSnapshotAsync().ContinueWithOnMainThread(task =>
    //    {
    //        try
    //        {
    //            Debug.Log("Store: getting all item");
    //            QuerySnapshot allItemsQuerySnapshot = task.Result;
    //            Debug.Log("Store: items count: " + allItemsQuerySnapshot.Count);
    //            Debug.Log("Store: task status: " + task.IsCompletedSuccessfully);
    //            foreach (DocumentSnapshot documentSnapshot in allItemsQuerySnapshot.Documents)
    //            {
    //                Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
    //                Dictionary<string, object> item = documentSnapshot.ToDictionary();

    //                Item currItem = new Item(documentSnapshot.Id, item["Category"].ToString(), item["Image"].ToString(), item["Name"].ToString(), Convert.ToInt32(item["Price"]), item["Description"].ToString());
    //                Debug.Log("Store: id " + documentSnapshot.Id + " item " + currItem.Name + ", price " + currItem.Price);
    //                _items.Add(currItem);
    //                GameObject currItemObj = InstantiateItems(currItem, content.transform);
    //                _allItemsObj.Add(currItem.Id, currItemObj);

    //            }
    //        }
    //        catch (Exception e)
    //        {
    //            Debug.Log(e);
    //        }
    //    });
    //}

    public UnityEngine.Object LoadPrefabFromFile(string filename)
    {
        Debug.Log("Trying to load LevelPrefab from file (" + filename + ")...");
        var loadedObject = Resources.Load("Materials/" + filename);
        if (loadedObject == null)
        {
            throw new FileNotFoundException("...no file found - please check the configuration");
        }
        return loadedObject;
    }

}
