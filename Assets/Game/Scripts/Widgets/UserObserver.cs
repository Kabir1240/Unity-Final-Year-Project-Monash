using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface UserObserver
{
    void Notify(string assetName, User user);
}
