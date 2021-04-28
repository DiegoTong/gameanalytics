using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class boss : Enemy
{
    // Start is called before the first frame update
    void Start()
    {
        sb = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<soundbites>();
        spawnmanager = GameObject.FindGameObjectWithTag("SpawnManager");
        sprite = GameObject.FindGameObjectWithTag("Boss").GetComponent<SpriteRenderer>();
        timer = 0;
        waitingTime = 3;
        speed = 1f;
        life = 15;
        ScreenBoundStart = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, Camera.main.transform.position.z));
        moveUpDown = false;
        _ColorType = ColorType.BLUE;
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        if (timer > waitingTime)
        {
            if(life >0)
            {
                shoot();
            }
            timer = 0;
        }

        if (life < 0)
        {
            sb.PlayExplosion();
            this.GetComponent<BoxCollider2D>().enabled = false;
            this.transform.GetChild(0).gameObject.SetActive(true);
        }
        if (_ColorType == ColorType.WHITE || Input.GetKeyDown(KeyCode.C))
        {
            sprite.color = new Color(1, 1, 1, 1);
        }
        if (_ColorType == ColorType.RED || Input.GetKeyDown(KeyCode.V))
        {
            sprite.color = new Color(1, 0, 0, 1);
        }
        if (_ColorType == ColorType.GREEN || Input.GetKeyDown(KeyCode.B))
        {
            sprite.color = new Color(0, 1, 0, 1);
        }
        if (_ColorType == ColorType.BLUE || Input.GetKeyDown(KeyCode.N))
        {
            sprite.color = new Color(0, 0, 1, 1);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "Bullet" && collision.GetComponent<objectManager>()._ColorType == _ColorType)
        {
            life--;
            Debug.Log("Life " + life);
        }
    }
    public void shoot()
    {
        sb.PlayShooting();
           GameObject bullet = Instantiate(eBulletPrefab);
        
        bullet.transform.position = new Vector2 (this.transform.position.x-2, this.transform.position.y+1);
    }
    public IEnumerator shooting()
    {
        while (true)
        {
            yield return new WaitForSeconds(5);
            shoot();
        }
    }
}
