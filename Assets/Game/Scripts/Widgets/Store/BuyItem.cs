using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class BuyItem : MonoBehaviour
{
    [SerializeField] Button buyBtn; // taken from itemPanel too
    [SerializeField] GameObject itemPanel;
    [SerializeField] TextMeshProUGUI itemName, itemDesc, itemPrice; // taken from itemPanel
    [SerializeField] StoreManager manager;

    private Item currItem;

    // Start is called before the first frame update
    void Start()
    {
        buyBtn.onClick.AddListener(Buy);
    }

    private void Buy()
    {
        Debug.Log("BuyItem: triggered "+itemName.text);
    }

    public void SetUI(Item item)
    {
        currItem = item;
        itemName.text = currItem.Name;
        itemDesc.text = currItem.Desc;
        itemPrice.text = currItem.Price + "";
    }
}
