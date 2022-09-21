using System.Collections;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using TMPro;
using Firebase.Firestore;
using System.Collections.Generic;
using Firebase.Extensions;
using System;
using UnityEngine.SceneManagement;

public class FirebaseManager : MonoBehaviour
{
    public static FirebaseManager instance;
    private FirebaseFirestore db;
    private FirebaseApp app;
    [SerializeField] User userData;

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

    private void Awake()
    {
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

        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(checkDependencyTask =>
        {
            var dependencyStatus = checkDependencyTask.Result;

            if (dependencyStatus == DependencyStatus.Available)
            {
                app = Firebase.FirebaseApp.DefaultInstance;

                InitializeFirebase();
            }
            else
            {
                Debug.LogError($"could not resolve all firebase dependencies: {dependencyStatus}");
            }
        });

        //db = FirebaseFirestore.DefaultInstance;
        Operations.InitializeDb();
        db = Operations.db;
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
                // SceneManager.LoadScene("MainPage");
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

    private void fetchAllUserItem()
    {
        userData.resetItems();
        CollectionReference userAchiev = db.Collection("User").Document(userData.Id).Collection("Items");
        userAchiev.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            Debug.Log("FirebaseManager: getting all user items");
            QuerySnapshot allFlashcardsQuerySnapshot = task.Result;
            Debug.Log("FirebaseManager: user items count: " + allFlashcardsQuerySnapshot.Count);
            Debug.Log("FirebaseManager: user items task status: " + task.IsCompletedSuccessfully);
            try
            {
                foreach (DocumentSnapshot documentSnapshot in allFlashcardsQuerySnapshot.Documents)
                {
                    Dictionary<string, object> item = documentSnapshot.ToDictionary();
                    Item currItem = new Item(documentSnapshot.Id, item["Category"].ToString(), item["Image"].ToString(), item["Name"].ToString());
                    Debug.Log("FirebaseManager: id " + documentSnapshot.Id + " item " + currItem.Name + ", image" + currItem.Img);
                    userData.addItems(currItem);

                }
            }
            catch (Exception e)
            {
                Debug.Log("FirebaseManager: " + e);
            }
        });
    }

    //private void SetUserData(string id, int accuracy, string email, int exp, int game_run, int level, string uname, int coin)
    //{
    //    userData.Id = id;
    //    userData.UserName = uname;
    //    userData.Email = email;
    //    userData.Accuracy = accuracy;
    //    userData.Exp = exp;
    //    userData.Level = level;
    //    userData.Coin = coin;
    //    userData.GameRuns = game_run;
    //}

    private void GetInitialUser(FirebaseUser user)
    {

        Debug.Log("user id: " + user.UserId);
        DocumentReference docRef = db.Collection("User").Document(user.UserId);
        docRef.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            Debug.Log("getting snapshot");
            DocumentSnapshot snapshot = task.Result;
            if (snapshot.Exists)
            {
                Debug.Log(String.Format("Document data for {0} document:", snapshot.Id));
                Dictionary<string, object> userDataDb = snapshot.ToDictionary();
                try
                {
                    // get max exp
                    GetMaxLevel(userDataDb, snapshot.Id);
                }
                catch (Exception e)
                {
                    Debug.Log("FirebaseManager: " + e);
                }

            }
            else
            {
                Debug.Log(String.Format("Document {0} does not exist!", snapshot.Id));
            }
        });
    }

    private void GetMaxLevel(Dictionary<string, object> userDataDb, string id)
    {
        DocumentReference userRef = db.Collection("Level").Document("" + Convert.ToInt32(userDataDb["Level"]));
        Debug.Log(userRef.ToString());
        int maxExp;

        userRef.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            DocumentSnapshot snapshot = task.Result;
            Debug.Log("FirebaseManager: max exp result: " + snapshot.Exists);
            if (snapshot.Exists)
            {
                Dictionary<string, object> dbData = snapshot.ToDictionary();
                int currMaxExp = Convert.ToInt32(dbData["Max_Exp"]);
                maxExp = currMaxExp;
                Debug.Log("got max exp: " + maxExp);

                userData.SetUserData(id, userDataDb, maxExp);
                fetchAllUserItem();
                SceneManager.LoadScene("MainPage");

            }
            else
            {
                Debug.Log(String.Format("Document {0} does not exist!", snapshot.Id));
            }
        });
    }

    private void NewUser(FirebaseUser user, string uname)
    {
        Debug.Log("Creating new user with id: " + user.UserId);
        DocumentReference docRef = db.Collection("User").Document(user.UserId);
        Dictionary<string, object> newUser = new Dictionary<string, object>{
        { "Accuracy", 0},
        { "Email", user.Email },
        { "Exp", 0},
        { "Game_run", 0},
        { "Level", 1},
        { "Username", uname},
        { "Coin", 0},
        {"Points",0 } };
        docRef.SetAsync(newUser).ContinueWithOnMainThread(task =>
        {
            Debug.Log(task.IsCanceled || task.IsFaulted);
            Debug.Log($"Added user: {user.UserId} to the User document");

            // !! CHANGE THIS IS THE LEVEL 1'S MAX EXP IS CHANGED !!
            userData.SetUserData(user.UserId, newUser, 200);
            userData.resetItems();
            SceneManager.LoadScene("MainPage");
        });
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

            //update User data asset here
        }
        else
        {
            //Debug.Log("user email verified: "+ user.IsEmailVerified);
            if (user.IsEmailVerified)
            {
                Debug.Log("user email verified");
                yield return new WaitForSeconds(1f);
                //GetUser(auth.CurrentUser);
                //AuthSceneManager.instance.ChangeScene(1);

            }
            GetInitialUser(auth.CurrentUser);
            //GetInitialUser(auth.CurrentUser);
            //SceneManager.LoadScene("MainPage");
            //else
            //{
            //    // TODO: Send Verification Email

            //    // Temporary solution
            //    AuthSceneManager.instance.ChangeScene(1);
            //}
        }
    }

    private IEnumerator RegisterLogic(string _username, string _email, string _password, string _confirmPassword)
    {
        if (_username == "")
        {
            registerOutputText.text = "Please enter your Username";
        }

        else if (_password != _confirmPassword)
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
                    //update User data asset here
                    NewUser(auth.CurrentUser, _username);
                    //NewUser(auth.CurrentUser, _username);
                    Debug.Log($"Firebase User Created Successfully: {user.DisplayName} ({user.UserId})");
                    registerOutputText.text = "Account created successfully";
                    registerOutputText.color = Color.green;
                    Invoke("LoadAuthentication", 3f); //Reload scene
                }
            }
        }
    }

    private void LoadAuthentication()
    {
        SceneManager.LoadScene("Authentication");
    }

    private void LoadMainPage()
    {
        SceneManager.LoadScene("MainPage");
    }
}