using System.Collections;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using TMPro;

public class FirebaseManager : MonoBehaviour
{
    public static FirebaseManager instance;

    [Header("Firebase")]
    public FirebaseAuth auth;
    public FirebaseUser user;
    [Space(5F)]

    [Header("Login References")]
    [SerializeField] private TMP_InputField loginEmail;
    [SerializeField] private TMP_InputField loginPassword;
    [SerializeField] private TMP_Text loginOutputText;
    [Space(5F)]

    [Header("Register References")]
    [SerializeField] private TMP_InputField registerUsername;
    [SerializeField] private TMP_InputField registerEmail;
    [SerializeField] private TMP_InputField registerPassword;
    [SerializeField] private TMP_InputField registerConfirmPassword;
    [SerializeField] private TMP_Text registerOutputText;
 
       private void Awake() {
        DontDestroyOnLoad(gameObject);
        if (instance == null)
        {
            instance = this;
        }
        else if (instance != this)
        {
            Destroy(instance.gameObject);
            instance = this;
        }

        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(checkDependencyTask => {
            var dependencyStatus = checkDependencyTask.Result;

            if (dependencyStatus == DependencyStatus.Available)
            {   
                InitializeFirebase();
            }
            else
            {
                Debug.LogError($"could not resolve all firebase dependencies: {dependencyStatus}");
            }
        });
    }

    private void InitializeFirebase()
    {
        auth = FirebaseAuth.DefaultInstance;
        auth.StateChanged += AuthStateChanged;
        AuthStateChanged(this, null);
    }

    private void AuthStateChanged(object sender, System.EventArgs eventArgs)
    {
        if (auth.CurrentUser != user)
        {
            bool signedIn = user != auth.CurrentUser && auth.CurrentUser != null;
            if (!signedIn && user != null)
            {  
                // Update this later, this means that the user signed out.
                Debug.Log("signed out");
            }

            user = auth.CurrentUser;

            if (signedIn)
            {   
                // Update this later, this means that the user signed in
                Debug.Log($"Signed In: {user.DisplayName}");
            }
        }
    }

    public void ClearOutputs()
    {
        loginOutputText.text = "";
        registerOutputText.text = "";
    }

    public void LoginButton()
    {
        StartCoroutine(LoginLogic(loginEmail.text, loginPassword.text));
    }

    public void RegisterButton()
    {
        StartCoroutine(RegisterLogic(registerUsername.text, registerEmail.text, registerPassword.text, registerConfirmPassword.text));
    }

    private IEnumerator LoginLogic(string _email, string _password)
    {
        Credential credential = EmailAuthProvider.GetCredential(_email, _password);
        var loginTask = auth.SignInWithCredentialAsync(credential);
        yield return new WaitUntil(predicate: () => loginTask.IsCompleted);

        if (loginTask.Exception != null)
        {
            FirebaseException firebaseException = (FirebaseException)loginTask.Exception.GetBaseException();
            AuthError error = (AuthError)firebaseException.ErrorCode;

            string output = "Unknown Error, please try again";
            switch (error)
            {
                case AuthError.MissingEmail:
                    output = "Email cannot be left blank";
                    break;

                case AuthError.MissingPassword:
                    output = "Password cannot be left empty";
                    break;

                // You can add common Firebase exceptions here using this syntax

                case AuthError.InvalidEmail:
                    output = "Email not found";
                    break;

                case AuthError.WrongPassword:
                    output = "Incorrect password";
                    break;

                case AuthError.UserNotFound:
                    output = "Account does not exist";
                    break;
            }
            loginOutputText.text = output;
        }
        else
        {
            if (user.IsEmailVerified)
            {
                yield return new WaitForSeconds(1f);
                AuthSceneManager.instance.ChangeScene(1);
            }
            else
            {
                // TODO: Send Verification Email

                // Temporary solution
                AuthSceneManager.instance.ChangeScene(1);
            }
        }
    }

    private IEnumerator RegisterLogic(string _username, string _email, string _password, string _confirmPassword)
    {
        if(_username == "")
        {
            registerOutputText.text = "Please enter your Username";
        }

        else if(_password != _confirmPassword)
        {
            registerOutputText.text = "Passwords do not match";
        }

        else
        {
            var registerTask = auth.CreateUserWithEmailAndPasswordAsync(_email, _password);
            yield return new WaitUntil(predicate: () => registerTask.IsCompleted);

            if (registerTask.Exception != null)
            {
                FirebaseException firebaseException = (FirebaseException)registerTask.Exception.GetBaseException();
                AuthError error = (AuthError)firebaseException.ErrorCode;
                string output = "Unknown Error, please try again";
                switch (error)
                {
                    case AuthError.InvalidEmail:
                        output = "Invalid Email";
                        break;

                    case AuthError.EmailAlreadyInUse:
                        output = "Email is already in use";
                        break;

                    // You can add common Firebase exceptions here using this syntax

                    case AuthError.WeakPassword:
                        output = "Password is too weak";
                        break;

                    case AuthError.MissingEmail:
                        output = "Email cannot be left blank";
                        break;

                    case AuthError.MissingPassword:
                        output = "Password cannot be left blank";
                        break;
                }
                registerOutputText.text = output;
            }
            else
            {
                UserProfile profile = new UserProfile
                {
                    DisplayName = _username,
                };

                var defaultUserTask = user.UpdateUserProfileAsync(profile);
                yield return new WaitUntil(predicate: () => defaultUserTask.IsCompleted);
            
                if (defaultUserTask.Exception != null)
                {
                    user.DeleteAsync();
                    FirebaseException firebaseException = (FirebaseException)registerTask.Exception.GetBaseException();
                    AuthError error = (AuthError)firebaseException.ErrorCode;
                    string output = "Unknown Error, please try again";
                    switch (error)
                    {
                        case AuthError.Cancelled:
                            output = "update user cancelled";
                            break;

                        case AuthError.SessionExpired:
                            output = "Session Expired";
                            break;
                    }
                    registerOutputText.text = output;
                }
                else
                {
                    Debug.Log($"Firebase User Created Successfully: {user.DisplayName} ({user.UserId})");
                }
            }
        }
    }
}