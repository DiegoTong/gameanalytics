using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;

public class GPGSLeaderboard : MonoBehaviour
{
    void Start()
    {
        PlayGamesPlatform.Activate();
    }
    public void OpenLeaderboard()
    {
        Social.ShowLeaderboardUI();
    }

    public void UpdateLeaderboardScore()
    {
        if(PlayerPrefs.GetInt("ScoreToUpdate",0)==0)
        {
            return;
        }
        Social.ReportScore(PlayerPrefs.GetInt("ScoreToUpdate", 1), GPGSIds.leaderboard_highscore, (bool success) =>
        {
            if(success)
            {
                PlayerPrefs.SetInt("ScoreToUpdate", 0);
            }
        }
        );
    }
}
