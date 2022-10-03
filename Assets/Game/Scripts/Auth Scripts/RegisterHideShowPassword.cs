using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RegisterHideShowPassword : MonoBehaviour
{
    [SerializeField] private TMP_InputField registerPassword;
    [SerializeField] private TMP_InputField registerConfirmPassword;

    public void HideShowRegisterPassword()
    {
        if (registerPassword.contentType == TMP_InputField.ContentType.Password)
        {
            registerPassword.contentType = TMP_InputField.ContentType.Standard;
        }
        else
        {
            registerPassword.contentType = TMP_InputField.ContentType.Password;
        }
    }

    public void HideShowRegisterConfirmPassword()
    {
        if (registerConfirmPassword.contentType == TMP_InputField.ContentType.Password)
        {
            registerConfirmPassword.contentType = TMP_InputField.ContentType.Standard;
        }
        else
        {
            registerConfirmPassword.contentType = TMP_InputField.ContentType.Password;
        }
    }
}
