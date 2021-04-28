using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : objectManager
{
    public Transform enemy;
    public bool moveUpDown;
    public SpriteRenderer sprite;
    public GameObject eBulletPrefab;
    public float timer =0;
    public float waitingTime = 4;
    public GameObject spawnmanager;
    public float timerChangeColor=0;
    public float timeToDie = 0;
    objectManager.ColorType newColor;
    // Start is called before the first frame update
    void Start()
    {
        sb = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<soundbites>();
        spawnmanager = GameObject.FindGameObjectWithTag("SpawnManager");
        sprite = GetComponentInChildren<SpriteRenderer>();
        timer = 0;
        waitingTime = 4;
        speed = 1f;
        life = 5;
        ScreenBoundStart = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, Camera.main.transform.position.z));
        moveUpDown = false;
    }

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        if(life >0)
        {
            if (timer > waitingTime)
            {
                shoot();
                timer = 0;
            }
            if (moveUpDown == false)
            {
                transform.Translate(Vector3.up * Time.deltaTime * -speed);
            }
            else
            {
                transform.Translate(Vector3.up * Time.deltaTime * speed);
            }
            if (transform.position.y > ScreenBoundStart.y)
            {
                moveUpDown = false;
            }
            else if (transform.position.y < -ScreenBoundStart.y + 1.5)
            {
                moveUpDown = true;
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
            if (timerChangeColor > 7)
            {
                newColor = (objectManager.ColorType)Random.Range(0, 3);
                _ColorType = newColor;
                timerChangeColor = 0;
            }
        }
       
        if(life <0)
        {
            sb.PlayExplosion();
            gameObject.transform.Find("Particle System").gameObject.SetActive(true);
            timeToDie += Time.deltaTime;
            if (timeToDie >7)
            {
                Destroy(this.gameObject);
                timeToDie = 0;
                if ((spawnmanager.GetComponent<SpawnManager>().wave == 2 || spawnmanager.GetComponent<SpawnManager>().wave == 3))
                {
                    spawnmanager.GetComponent<SpawnManager>().spawnEnemy = true;
                }
            } 

        }
        timerChangeColor += Time.deltaTime;
    }
    public void shoot()
    {
        sb.PlayShooting();
        GameObject bullet = Instantiate(eBulletPrefab);
        bullet.transform.position = enemy.transform.position;
    }
    public IEnumerator shooting()
    {
        while (true)
        {
            yield return new WaitForSeconds(5);
            shoot();
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
}
