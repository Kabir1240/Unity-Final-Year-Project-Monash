using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "Data", menuName = "AssetManager")]
public class AssetManager : ScriptableObject
{
    public string guitarImageLoc = "Felicia/guitar";
    public bool guitarOri = true;
    public Image guitarImage = null;

    private void OnEnable()
    {
        hideFlags = HideFlags.DontUnloadUnusedAsset;
    }
}
