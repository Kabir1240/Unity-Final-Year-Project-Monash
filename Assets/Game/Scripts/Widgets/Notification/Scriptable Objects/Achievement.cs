using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[CreateAssetMenu(fileName = "Create Achievement", menuName = "Achievement")]
public class Achievement {

    private string name, assetAttribute, assetName, id, date;
    private int target, exp, coin;
    private System.DateTime achievedDate;
    private int currTar;
    public PropertiesName[] mRelatedProperties;
    public bool unlocked { get; set; }
    public string Name { get => name; }
    public string Id { get => id; }
    public string Date { get => date; }
    public string AssetAttribute { get => assetAttribute; }
    public string AssetName { get => assetName; }
    public int Target { get => target; }
    public int Exp { get => exp; }
    public int Coin { get => coin; }
    public DateTime AchievedDate { get => achievedDate; }
    public int CurrTar { get => currTar; set => currTar = value; }

    public Achievement(string name, string assetAttribute, string assetName, int target, int exp, int coin, int currTar, string id)
    {
        this.id = id;
        this.name = name;
        this.assetAttribute = assetAttribute;
        this.assetName = assetName;
        this.target = target;
        this.exp = exp;
        this.coin = coin;
        this.currTar = currTar;
    }

    public Achievement(string id, string name, string assetAttribute, string assetName, string date, int coin)
    {
        this.id = id;
        this.name = name;
        this.assetAttribute = assetAttribute;
        this.assetName = assetName;
        this.date = date;
        this.coin = coin;
    }

    public string toString()
    {
        return "[Achivement " + Name + "]";
    }


    public bool isAchieved(int receivedTar)
    {
        Debug.Log("checking is Achieved");
        if (receivedTar >= Target)
        {
            achievedDate = DateTime.Now;
            return true;
        }
        else
        {
            return false;
        }
    }

}
