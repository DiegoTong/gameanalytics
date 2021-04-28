using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GameAnalyticsSDK;
public class GameManager : MonoBehaviour
{
    // Start is called before the first frame update
    public Text gameOverText;
    public Button restart;
    public Button exit;
    public GameObject socialbuttons;
    public playerManager player;
    public bool gameOver;
    public float score;
    public int decimalscore;
    float finalScore;
    public SpawnManager _spawnManager;
    public bool isBossDead;
    public Button Shoot;
    public Button Change;
    public GPGSLeaderboard _leaderboard;
    public GPGSAchievements _achievements;
    public bool firstBoss;
    public int timesBosswasdefeated;
    public bool hasUpdatedLeaderboard;
    public bool reachLevel1;
    public bool reachLevel2;
    public bool reachLevel3;
    public int reachLevel1times;
    public int reachLevel2times;
    public int reachLevel3times;
    void Start()
    {
        timesBosswasdefeated = 0;
        firstBoss = false;
        hasUpdatedLeaderboard = false;
        score = 0;
        decimalscore = 0;
        finalScore = 0;
        isBossDead = false;
        GameAnalytics.NewProgressionEvent(GAProgressionStatus.Start, "FirstWorld", decimalscore);
        _achievements.UnlockRegular();
        reachLevel2 = false;
        reachLevel3 = false;
        reachLevel1 = false;
        reachLevel1times = 0;
        reachLevel2times = 0;
        reachLevel3times = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if(gameOver == true)
        {
            gameOverText.gameObject.SetActive(true);
            gameOverText.text = "Game Over! Final Score: " + finalScore;
            socialbuttons.SetActive(true);
            restart.gameObject.SetActive(true);
            exit.gameObject.SetActive(true);
            Shoot.gameObject.SetActive(false);
            Change.gameObject.SetActive(false);
            if(hasUpdatedLeaderboard == false)
            {
                _leaderboard.UpdateLeaderboardScore();
                hasUpdatedLeaderboard = true;
            }
        }
        if(score >= 30 && score <60)
        {
            _spawnManager.wave = 2;
            if(reachLevel1 == false)
            {
                reachLevel1times++;
                GameAnalytics.NewDesignEvent("Times reached level 1 ", reachLevel1times);
                reachLevel1 = true;
            }
        }
        else if(score >= 60 && score <120)
        {
            _spawnManager.wave = 3;
            if (reachLevel2 == false)
            {
                reachLevel2times++;
                GameAnalytics.NewDesignEvent("Times reached level 2 ", reachLevel2times);
                reachLevel2 = true;
            }
        }
        else if(score >= 120)
        {
            _spawnManager.wave = 4;
            if (reachLevel3 == false)
            {
                reachLevel3times++;
                GameAnalytics.NewDesignEvent("Times reached level 3 ", reachLevel3times);
                reachLevel3 = true;
            }
        }
        if (isBossDead == true)
        {
            timesBosswasdefeated++;
            GameAnalytics.NewDesignEvent("Times boss was defeated", timesBosswasdefeated);
            _spawnManager.wave = 1;
            isBossDead = false;
            score = 0;
            StartCoroutine(_spawnManager.AsteroidWave());
            if(firstBoss == false)
            {
                _achievements.UnlockFinalBoss();
                firstBoss = true;
            }
        }
        if(player.life <= 0)
        {
            GameAnalytics.NewProgressionEvent(GAProgressionStatus.Complete, "FirstWorld", decimalscore);
            gameOver = true;
            _achievements.UnlockDeath();
        }        
        score += Time.deltaTime;   
        if (player.life > 0)
        {
            PlayerPrefs.SetInt("ScoreToUpdate", PlayerPrefs.GetInt("ScoreToUpdate", 0)+1);
            finalScore += Time.deltaTime;
            decimalscore = Mathf.RoundToInt(finalScore);
            _achievements.UpdateIncremental();
          
        }

    }
}
