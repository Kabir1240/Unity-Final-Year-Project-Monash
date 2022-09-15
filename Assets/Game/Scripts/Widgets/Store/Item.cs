using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item
{
    private string _category, _img, _name, _id, _desc;
    private int price;

    public Item(string id, string category, string img, string name, int price, string desc)
    {
        _category = category;
        _id = id;
        _img = img;
        _name = name;
        _desc = desc;
        this.price = price;
    }

    public string Category { get => _category; set => _category = value; }
    public string Img { get => _img; set => _img = value; }
    public string Name { get => _name; set => _name = value; }
    public int Price { get => price; set => price = value; }
    public string Name1 { get => _name; set => _name = value; }
    public string Id { get => _id; set => _id = value; }
    public string Desc { get => _desc; set => _desc = value; }
}
