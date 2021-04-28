using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using UnityEngine.UI;
public class GPGSAuthenticator : MonoBehaviour
{
    public static PlayGamesPlatform platform;
    // Start is called before the first frame update
    void start()
    {
        if (platform == null)
        {
            PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().Build();
            PlayGamesPlatform.InitializeInstance(config);
            PlayGamesPlatform.DebugLogEnabled = true;

            platform = PlayGamesPlatform.Activate();

            Social.Active.localUser.Authenticate(success =>
            {
                if (success)
                {
                    Debug.Log("Logged in usccessfully");
                    string userInfo = "Username: " + Social.localUser.userName +
                    "\nUser ID: " + Social.localUser.id +
                     "\nIsUnderage: " + Social.localUser.underage;
                    Debug.Log(userInfo);
                }
                else
                {
                    Debug.Log("Logged failed");
                }
            });
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
