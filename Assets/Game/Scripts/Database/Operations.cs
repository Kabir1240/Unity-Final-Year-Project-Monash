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
    // Start is called before the first frame update
    void Awake()
    {
        DontDestroyOnLoad(gameObject);
        if (instance == null)
        {
            Debug.Log("name: " + gameObject.name);
            instance = this;
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
        storage = FirebaseStorage.DefaultInstance;
        storageRef = storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");
    }

    public static Operations GetInstance()
    {
        return instance;
    }

    //public List<Item> fetchAllUserItem()
    //{
    //    currUser.resetItems();
    //    List<Item> allItems = new List<Item>();
    //    CollectionReference userAchiev = db.Collection("User").Document(currUser.Id).Collection("Items");
    //    userAchiev.GetSnapshotAsync().ContinueWithOnMainThread(task =>
    //    {
    //        Debug.Log("FirebaseManager: getting all user items");
    //        QuerySnapshot allFlashcardsQuerySnapshot = task.Result;
    //        Debug.Log("FirebaseManager: user items count: " + allFlashcardsQuerySnapshot.Count);
    //        Debug.Log("FirebaseManager: user items task status: " + task.IsCompletedSuccessfully);
    //        try
    //        {
    //            foreach (DocumentSnapshot documentSnapshot in allFlashcardsQuerySnapshot.Documents)
    //            {
    //                Dictionary<string, object> item = documentSnapshot.ToDictionary();
    //                Item currItem = new Item(documentSnapshot.Id, item["Category"].ToString(), item["Image"].ToString(), item["Name"].ToString());
    //                Debug.Log("FirebaseManager: id " + documentSnapshot.Id + " item " + currItem.Name + ", image" + currItem.Img);
    //                currUser.addItems(currItem);
    //                allItems.Add(currItem);

    //            }
    //        }
    //        catch (Exception e)
    //        {
    //            Debug.Log("FirebaseManager: " + e);
    //        }
    //    });
    //    return allItems;
    //}

    //// User related changes are done directly through User Dataset
    //public User GetInitialUser(FirebaseUser user)
    //{
    //    Debug.Log("user id: " + user.UserId);
    //    DocumentReference docRef = db.Collection("User").Document(user.UserId);
    //    docRef.GetSnapshotAsync().ContinueWithOnMainThread(task =>
    //    {
    //        Debug.Log("getting snapshot");
    //        DocumentSnapshot snapshot = task.Result;
    //        if (snapshot.Exists)
    //        {
    //            Debug.Log(String.Format("Document data for {0} document:", snapshot.Id));
    //            Dictionary<string, object> userDataDb = snapshot.ToDictionary();
    //            try
    //            {
    //                currUser.SetUserData(snapshot.Id, userDataDb);
    //                fetchAllUserItem();
    //                SceneManager.LoadScene("MainPage");
    //            }
    //            catch (Exception e)
    //            {
    //                Debug.Log("FirebaseManager: " + e);
    //            }

    //        }
    //        else
    //        {
    //            Debug.Log(String.Format("Document {0} does not exist!", snapshot.Id));
    //        }
    //    });

    //    return currUser;
    //}

    //public void NewUser(FirebaseUser user, string uname)
    //{
    //    Debug.Log("Creating new user with id: " + user.UserId);
    //    DocumentReference docRef = db.Collection("User").Document(user.UserId);
    //    Dictionary<string, object> newUser = new Dictionary<string, object>{
    //    { "Accuracy", 0},
    //    { "Email", user.Email },
    //    { "Exp", 0},
    //    { "Game_run", 0},
    //    { "Level", 1},
    //    { "Username", uname},
    //    { "Coin", 0}};
    //    docRef.SetAsync(newUser).ContinueWithOnMainThread(task =>
    //    {
    //        Debug.Log(task.IsCanceled || task.IsFaulted);
    //        Debug.Log($"Added user: {user.UserId} to the User document");
    //        //SceneManager.LoadScene("MainPage");
    //        currUser.SetUserData(user.UserId, newUser);
    //        currUser.resetItems();
    //        SceneManager.LoadScene("MainPage");
    //    });

    //    //SetUserData(user.UserId, 0, user.Email, 0,0,1,0, uname);
    //    //SceneManager.LoadScene("MainPage");
    //}

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
    private IEnumerator isDownloading(string url, RawImage rawImg)
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
