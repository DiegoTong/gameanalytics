using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;
public class GPGSAchievements : MonoBehaviour
{
    public void OpenAchievemtsPanel()
    {
        Social.ShowAchievementsUI();
    }
    public void UpdateIncremental()
    {
        PlayGamesPlatform.Instance.IncrementAchievement(GPGSIds.achievement_pass_level_3, 1, (null));
    }
    public void UnlockRegular()
    {
        Social.ReportProgress(GPGSIds.achievement_prism,100f,null);
    }
    public void UnlockFinalBoss()
    {
        Social.ReportProgress(GPGSIds.achievement_defeat_the_boss, 100f, null);
    }
    public void UnlockDeath()
    {
        Social.ReportProgress(GPGSIds.achievement_you_are_dead, 100f, null);
    }
}
