using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class BuyItem : MonoBehaviour
{
    [SerializeField] Button buyBtn; // taken from itemPanel too
    [SerializeField] Button cancelBtn;
    //[SerializeField] GameObject buyImg;
    //[SerializeField] GameObject cancelImg;
    [SerializeField] GameObject itemPanel;
    [SerializeField] TextMeshProUGUI itemName, itemDesc, itemPrice; // taken from itemPanel
    [SerializeField] StoreManager manager;

    private Item currItem;
    private bool bought;

    // Start is called before the first frame update
    void Start()
    {
        buyBtn.onClick.AddListener(Buy);
        cancelBtn.onClick.AddListener(Buy);

        bought = false;
        manager = GameObject.Find("StorePage").GetComponent<StoreManager>();
        Debug.Log("BuyItem: manager item: " + manager.name);
    }

    public void BtnVisibility()
    {
        if (manager.receiptSection)
        {
            buyBtn.gameObject.SetActive(false);
            cancelBtn.gameObject.SetActive(false);
        }
        else
        {
            buyBtn.gameObject.SetActive(true);
            cancelBtn.gameObject.SetActive(true);
        }
    }

    public void BtnVisibility(bool visibility)
    {

        buyBtn.gameObject.SetActive(visibility);
        cancelBtn.gameObject.SetActive(visibility);
    }

    private void Buy()
    {
        if (!bought)
        {
            Debug.Log("BuyItem: buy " + itemName.text);
            buyBtn.gameObject.SetActive(false);
            cancelBtn.gameObject.SetActive(true);
            manager.UserBuy(currItem);
            bought = true;
        }
        else
        {
            Debug.Log("BuyItem: remove " + itemName.text);
            buyBtn.gameObject.SetActive(true);
            cancelBtn.gameObject.SetActive(false);
            manager.UserRemoves(currItem);
            bought = false;
        }

    }

    public void SetUI(Item item)
    {
        currItem = item;
        itemName.text = currItem.Name;
        itemDesc.text = currItem.Desc;
        itemPrice.text = currItem.Price + "";
    }
}
