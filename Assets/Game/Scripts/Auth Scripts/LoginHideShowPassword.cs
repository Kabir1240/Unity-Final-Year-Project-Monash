using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LoginHideShowPassword : MonoBehaviour
{

    [SerializeField] private TMP_InputField loginPassword;
    
    public void HideShowLoginPassword()
    {
        if (loginPassword.contentType == TMP_InputField.ContentType.Password)
        {
            loginPassword.contentType = TMP_InputField.ContentType.Standard;
        }
        else
        {
            loginPassword.contentType = TMP_InputField.ContentType.Password;
        }
    }
}
