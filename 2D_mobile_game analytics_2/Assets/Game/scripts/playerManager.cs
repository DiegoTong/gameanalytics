using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GameAnalyticsSDK;
public class playerManager : objectManager
{
    // Start is called before the first frame update
    public SpriteRenderer sprite;
    public Image shootB;
    public Slider healthbar;
    public int timesblue;
    public int timesred;
    public int timesgreen;
    int color;
    void Start()
    {
        sb = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<soundbites>();
        life = 100;
        timesblue =0;
        timesgreen = 0;
        timesred = 0;
        _ColorType = ColorType.BLUE;
    }

    // Update is called once per frame
    void Update()
    {
        healthbar.value = life;
        if (_ColorType == ColorType.WHITE || Input.GetKeyDown(KeyCode.C))
        {
            sprite.color = new Color(1, 1, 1, 1);
            shootB.color = new Color(1, 1, 1, 1);
        }
        if (_ColorType == ColorType.RED || Input.GetKeyDown(KeyCode.V))
        {
            sprite.color = new Color(1, 0, 0, 1);
            shootB.color = new Color(1, 0, 0, 1);
        }
        if (_ColorType == ColorType.GREEN || Input.GetKeyDown(KeyCode.B))
        {
            sprite.color = new Color(0, 1, 0, 1);
            shootB.color = new Color(0, 1, 0, 1);
        }
        if (_ColorType == ColorType.BLUE || Input.GetKeyDown(KeyCode.N))
        {
            sprite.color = new Color(0, 0, 1, 1);
            shootB.color = new Color(0, 0, 1, 1);
        }
        if(life <=0)
        {
            sb.PlayExplosion();
            gameObject.transform.Find("Particle System").gameObject.SetActive(true);
        }
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        Debug.Log("Hit");
        if (collision.tag != "Bullet" && collision.GetComponent<objectManager>()._ColorType != _ColorType && collision.tag != "Enemy")
        {

            Destroy(collision.gameObject);
            life = life-2;
        }
    }
    public void playShootingSound()
    {

    }
    public void ChangeColor()
    {
        if(color ==0)
        {
            timesblue++;
            GameAnalytics.NewDesignEvent("times blue ", timesblue);
            _ColorType = ColorType.BLUE;
        }
        else if (color == 1)
        {
            timesred++;
            GameAnalytics.NewDesignEvent("times red ", timesred);
            _ColorType = ColorType.RED;
        }
        else if (color == 2)
        {
            timesgreen++;
            GameAnalytics.NewDesignEvent("times green ", timesgreen);
            _ColorType = ColorType.GREEN;
        }
        color++;
        if(color>2)
        {
            color = 0;
        }
    }
}
