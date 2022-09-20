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

public class StoreManager : MonoBehaviour
{
    [SerializeField] User user;

    [SerializeField] GameObject itemPrefab;
    [SerializeField] GameObject allItemPanel;
    [SerializeField] GameObject content;
    [SerializeField] GameObject receiptPanel;
    [SerializeField] GameObject receiptContent;
    [SerializeField] GameObject warningCoin;

    [SerializeField] Button confirm;
    [SerializeField] Button goBack;
    [SerializeField] Button receiptBtn;
    [SerializeField] Button okWarning;
    [SerializeField] Button backHome;

    [SerializeField] TextMeshProUGUI price;
    [SerializeField] TextMeshProUGUI tempPrice;

    FirebaseStorage storage;
    StorageReference storageRef;

    public bool receiptSection;

    private FirebaseFirestore _db;
    private List<Item> _items;
    private Dictionary<string, GameObject> _allItemsObj;
    private Dictionary<string, Item> _boughtItems;
    private Dictionary<string, GameObject> _boughtItemsObj;
    private int _boughtPrice;


    // Start is called before the first frame update
    void Start()
    {
        _db = Operations.db;
        storageRef = Operations.storageRef;
        //storage = FirebaseStorage.DefaultInstance;
        //storageRef = storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");
        _items = new List<Item>();
        _boughtItems = new Dictionary<string, Item>();
        _boughtItemsObj = new Dictionary<string, GameObject>();
        _allItemsObj = new Dictionary<string, GameObject>();
        _boughtPrice = 0;
        receiptSection = false;

        receiptPanel.SetActive(false);
        warningCoin.SetActive(false);

        receiptBtn.enabled = false;
        receiptBtn.onClick.AddListener(ShowReceipt);
        goBack.onClick.AddListener(Back);
        confirm.onClick.AddListener(AddToUser);
        okWarning.onClick.AddListener(() =>
        {
            warningCoin.SetActive(false);
        });
        backHome.onClick.AddListener(() =>
        {
            SceneManager.LoadScene("MainPage");
        });

        FetchFromDb();
    }

    private void AddToUser()
    {
        if (user.Coin >= _boughtPrice)
        {
            Debug.Log("StoreManager: enough money");
            user.Coin -= _boughtPrice;
            //update coin in database
            foreach (Item item in _boughtItems.Values)
            {
                user.addItems(item);

                Dictionary<string, object> newItem = new Dictionary<string, object>{
                    { "Category", item.Category},
                    { "Name", item.Name},
                    { "Image", item.Img}};
                _db.Collection("User").Document(user.Id).Collection("Items").Document(item.Id).SetAsync(newItem).ContinueWithOnMainThread(task =>
                {
                    Debug.Log("StoreManager: Created new Item in Items collection in User");
                });

                if (!File.Exists(Application.persistentDataPath + "/FIT3162Files/" + item.Name + ".jpg"))
                {
                    GameObject currItem = _boughtItemsObj[item.Id];
                    Texture2D tex = (Texture2D)currItem.transform.Find("Item").gameObject.transform.Find("ItemImg").gameObject.GetComponent<RawImage>().texture;
                    byte[] texBytes = tex.EncodeToJPG(50);
                    //UNCOMMENT THIS IF NOT TESTING
                    //File.WriteAllBytes(Application.persistentDataPath + "/FIT3162Files/"+item.Name+".jpg", texBytes);
                    Debug.Log("StoreManager: file saved at path " + Application.persistentDataPath + "/FIT3162Files/" + item.Name + ".jpg");
                    File.WriteAllBytes(Application.persistentDataPath + "/FIT3162Files/" + item.Name + ".jpg", texBytes);
                }
                

            }

            // fetch item images and save them to the persistent path (using the item name)
            // then in UserCollection, don't need to fetch foto from database anymore
            // then on button click, change the assetmanager path
            // then on gameplay, load the picture in assetmanager path first

            SceneManager.LoadScene("MainPage");
        }
        else
        {
            warningCoin.SetActive(true);
        }

        //// FOR TESTING
        //Debug.Log("StoreManager: enough money");
        //user.Coin -= _boughtPrice;
        //foreach (Item item in _boughtItems.Values)
        //{
        //    user.addItems(item);
        //    Dictionary<string, object> newItem = new Dictionary<string, object>{
        //            { "Category", item.Category},
        //            { "Name", item.Name},
        //            { "Image", item.Img}};
        //    _db.Collection("User").Document(user.Id).Collection("Items").Document(item.Id).SetAsync(newItem).ContinueWithOnMainThread(task =>
        //    {
        //        Debug.Log("StoreManager: Created new Item in Items collection in User");
        //    });
        //    //ConnectDatabase.GetInstance().NewUserItem(item);

        //    //saving image to persistent data path (if coin is enough)
        //    if (!File.Exists(Application.persistentDataPath + "/FIT3162Files/" + item.Name + ".jpg"))
        //    {
        //        GameObject currItem = _boughtItemsObj[item.Id];
        //        Texture2D tex = (Texture2D)currItem.transform.Find("Item").gameObject.transform.Find("ItemImg").gameObject.GetComponent<RawImage>().texture;
        //        byte[] texBytes = tex.EncodeToJPG(50);
        //        //UNCOMMENT THIS IF NOT TESTING
        //        //File.WriteAllBytes(Application.persistentDataPath + "/FIT3162Files/"+item.Name+".jpg", texBytes);
        //        Debug.Log("StoreManager: file saved at path " + Application.persistentDataPath + "/FIT3162Files/" + item.Name + ".jpg");
        //        File.WriteAllBytes(Application.persistentDataPath + "/FIT3162Files/" + item.Name + ".jpg", texBytes);
        //    }

        //}

    }

    private void Back()
    {
        allItemPanel.SetActive(true);
        receiptPanel.SetActive(false);
        receiptSection = false;
    }

    public void UserBuy(Item item)
    {
        _boughtItems.Add(item.Id, item);
        _boughtPrice += item.Price;
        tempPrice.text = _boughtPrice + "";
        receiptBtn.enabled = true;
    }

    public void UserRemoves(Item item)
    {
        _boughtItems.Remove(item.Id);
        _boughtPrice -= item.Price;
        tempPrice.text = _boughtPrice + "";
        if (_boughtPrice == 0)
        {
            receiptBtn.enabled = false;
        }
    }

    private void ShowReceipt()
    {
        allItemPanel.SetActive(false);
        receiptPanel.SetActive(true);
        receiptSection = true;

        // these two loops reduces the amount of times instantiation and is needed when a user
        // repeats the buying and cancelling process
        foreach (Item item in _boughtItems.Values)
        {
            if (!_boughtItemsObj.ContainsKey(item.Id))
            {
                Debug.Log("StoreManager: instantiated " + item.Id);
                GameObject obj = Instantiate(_allItemsObj[item.Id], receiptContent.transform);
                obj.GetComponent<BuyItem>().BtnVisibility();
                _boughtItemsObj.Add(item.Id, obj);
            }
        }
        List<string> removeKey = new List<string>();
        foreach (string key in _boughtItemsObj.Keys)
        {
            if (!_boughtItems.ContainsKey(key))
            {
                Debug.Log("StoreManager: destroyed " + key);
                Destroy(_boughtItemsObj[key]);
                removeKey.Add(key);
            }
        }

        foreach (string key in removeKey)
        {
            _boughtItemsObj.Remove(key);
        }
        price.text = _boughtPrice + "";
    }

    private void FetchFromDb()
    {
        CollectionReference shop = _db.Collection("Shop");

        shop.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            try
            {
                Debug.Log("Store: getting all item");
                QuerySnapshot allItemsQuerySnapshot = task.Result;
                Debug.Log("Store: items count: " + allItemsQuerySnapshot.Count);
                Debug.Log("Store: task status: " + task.IsCompletedSuccessfully);
                foreach (DocumentSnapshot documentSnapshot in allItemsQuerySnapshot.Documents)
                {
                    Debug.Log(String.Format("Document data for {0} document:", documentSnapshot.Id));
                    Dictionary<string, object> item = documentSnapshot.ToDictionary();

                    Item currItem = new Item(documentSnapshot.Id, item["Category"].ToString(), item["Image"].ToString(), item["Name"].ToString(), Convert.ToInt32(item["Price"]), item["Description"].ToString());
                    Debug.Log("Store: id " + documentSnapshot.Id + " item " + currItem.Name + ", price " + currItem.Price);
                    _items.Add(currItem);
                    GameObject currItemObj = InstantiateItems(currItem, content.transform);
                    _allItemsObj.Add(currItem.Id, currItemObj);

                }
            }
            catch (Exception e)
            {
                Debug.Log(e);
            }
        });
    }

    //// for ContentImage
    //private GameObject downloadImage(GameObject flashcardObj, Item item)
    //{
    //    StorageReference imagesRef = storageRef.Child(item.Category).Child(item.Img);

    //    // Fetch the download URL
    //    imagesRef.GetDownloadUrlAsync().ContinueWithOnMainThread(task =>
    //    {
    //        if (!task.IsFaulted && !task.IsCanceled)
    //        {
    //            Debug.Log("Download URL: " + task.Result);
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
    //        RawImage thePic = item.transform.Find("Item").gameObject.transform.Find("ItemImg").gameObject.GetComponent<RawImage>();
    //        Debug.Log("StoreManager pic: " + thePic);
    //        thePic.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
    //    }

    //}

    private GameObject InstantiateItems(Item currItem, Transform parentTransform)
    {
        GameObject item = Instantiate(itemPrefab, parentTransform);
        BuyItem boughtItem = item.GetComponent<BuyItem>();
        boughtItem.SetUI(currItem);

        RawImage thePic = item.transform.Find("Item").gameObject.transform.Find("ItemImg").gameObject.GetComponent<RawImage>();
        StorageReference imagesRef = storageRef.Child(currItem.Category).Child(currItem.Img);

        Operations.GetInstance().DownloadImage(thePic, imagesRef);
        //downloadImage(item, currItem);
        if (user.BoughtItems.ContainsKey(currItem.Id))
        {
            Debug.Log("StoreManager: user has this already " + currItem.Name);
            boughtItem.BtnVisibility(false);
        }
        return item;

    }
}
