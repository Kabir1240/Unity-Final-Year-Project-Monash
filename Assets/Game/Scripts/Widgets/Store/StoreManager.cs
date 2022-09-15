using Firebase.Extensions;
using Firebase.Firestore;
using Firebase.Storage;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class StoreManager : MonoBehaviour
{
    [SerializeField] User user;
    //[SerializeField] Button buyBtn; // taken from itemPanel too
    [SerializeField] GameObject itemPanel;
    //[SerializeField] TextMeshProUGUI itemName, itemDesc, itemPrice; // taken from itemPanel
    [SerializeField] GameObject content;
    [SerializeField] GameObject receiptPanel;
    [SerializeField] GameObject receiptContent;
    [SerializeField] TextMeshProUGUI price;
    [SerializeField] Button confirm;
    [SerializeField] Button goBack;
    [SerializeField] Button receiptBtn;

    FirebaseStorage storage;
    StorageReference storageRef;

    private FirebaseFirestore _db;
    private List<Item> _items;
    private List<Item> _boughtItems;


    // Start is called before the first frame update
    void Start()
    {
        _db = FirebaseFirestore.DefaultInstance;
        storage = FirebaseStorage.DefaultInstance;
        storageRef = storage.GetReferenceFromUrl("gs://fit3162-33646.appspot.com/");
        _items = new List<Item>();
        receiptPanel.SetActive(false);
        receiptBtn.onClick.AddListener(ShowReceipt);
        _boughtItems = new List<Item>();
        FetchFromDb();


    }

    public void UserBuy(Item item)
    {
        _boughtItems.Add(item);
    }

    public void ShowReceipt()
    {
        receiptPanel.SetActive(true);
        int boughtPrice = 0;
        foreach(Item item in _boughtItems)
        {
            boughtPrice += item.Price;
            InstantiateItems(item, receiptContent.transform);
            price.text = boughtPrice + "";
        }
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
                    InstantiateItems(currItem, content.transform);

                }
            }catch(Exception e)
            {
                Debug.Log(e);
            }
        });
    }

    // for ContentImage
    private GameObject downloadImage(GameObject flashcardObj, Item item)
    {
        StorageReference imagesRef = storageRef.Child(item.Category).Child(item.Img);

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
            RawImage thePic = item.transform.Find("Item").gameObject.transform.Find("ItemImg").gameObject.GetComponent<RawImage>();
            Debug.Log("StoreManager pic: "+thePic);
            thePic.texture = ((DownloadHandlerTexture)request.downloadHandler).texture;
        }

    }

    private void InstantiateItems(Item currItem, Transform parentTransform)
    {
        GameObject item = Instantiate(itemPanel, parentTransform);
        BuyItem boughtItem = item.GetComponent<BuyItem>();
        boughtItem.SetUI(currItem);
        downloadImage(item, currItem);


    } 
}
