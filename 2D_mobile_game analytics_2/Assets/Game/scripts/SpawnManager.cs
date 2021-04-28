using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public int wave;
    public GameObject asteroidPrefab;
    public GameObject wallPrefab;
    public GameObject enemyPrefab;
    public GameObject bossPrefab;
    public float respawnTime = 2f;
    private Vector2 ScreenBoundStart;
    float timer = 0;
    float timerChangeColor;
    float waitingTime = 4;
    objectManager.ColorType newColor;
    //  public GameObject[] numEnemies;
    public bool spawnEnemy;
    public bool spawnBoss;
    // Start is called before the first frame update
    void Start()
    {
 
        wave = 1;
        spawnEnemy = false;
        spawnBoss = false;
        ScreenBoundStart = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, Camera.main.transform.position.z));
        StartCoroutine(AsteroidWave());
        //     numEnemies = GameObject.FindGameObjectsWithTag("Enemy");
        
    }
    private void SpawnAsteroid(int dificulty)
    {
        if(dificulty <2)
        {
            GameObject asteroid = Instantiate(asteroidPrefab);
            asteroid.transform.position = new Vector2(ScreenBoundStart.x * 2, Random.Range(-ScreenBoundStart.y, ScreenBoundStart.y));
            asteroid.GetComponent<obstacle>()._ColorType = newColor;
            asteroid.GetComponent<obstacle>().speed = 10;
        }
        else
        {
            GameObject asteroid = Instantiate(asteroidPrefab);
            asteroid.transform.position = new Vector2(ScreenBoundStart.x * 2, Random.Range(-ScreenBoundStart.y, ScreenBoundStart.y));
            asteroid.GetComponent<obstacle>()._ColorType = newColor;
            asteroid.GetComponent<obstacle>().speed = 13;
        }
    }
    private void SpawnWall(int dificulty)
    {
        if (dificulty < 2)
        {
            GameObject wall = Instantiate(wallPrefab);
            wall.transform.position = new Vector2(ScreenBoundStart.x * 2, Random.Range(-ScreenBoundStart.y, ScreenBoundStart.y));
            wall.GetComponent<obstacle>()._ColorType = newColor;
            wall.GetComponent<obstacle>().speed = 1;
        }
        else
        {
            GameObject wall = Instantiate(wallPrefab);
            wall.transform.position = new Vector2(ScreenBoundStart.x * 2, Random.Range(-ScreenBoundStart.y, ScreenBoundStart.y));
            wall.GetComponent<obstacle>()._ColorType = newColor;
            wall.GetComponent<obstacle>().speed = 2;
        }
    }
    public IEnumerator AsteroidWave()
    {
        while(wave == 1)
        {
            respawnTime = 2f;
            yield return new WaitForSeconds(respawnTime);
            SpawnAsteroid(wave);
        }
        spawnEnemy = true;
        while (wave ==2)
        {
            respawnTime = 2f;
            yield return new WaitForSeconds(respawnTime);
            SpawnAsteroid(wave);
            SpawnAsteroid(wave);
        }
        while (wave == 3)
        {
            respawnTime = 2f;
            yield return new WaitForSeconds(respawnTime);
            SpawnAsteroid(wave);
            SpawnWall(wave);
        }
        spawnEnemy = false;
        spawnBoss = true;
        while (wave == 4)
        {
            respawnTime = 1f;
            yield return new WaitForSeconds(respawnTime);
            SpawnAsteroid(wave);
            SpawnWall(wave);
        }
    }
    // Update is called once per frame
    void Update()
    {
        if (spawnEnemy)
        {
            timer += Time.deltaTime;
            if (timer > waitingTime)
            {
                GameObject enemy = Instantiate(enemyPrefab);
                enemy.transform.position = new Vector2(ScreenBoundStart.x - 1, ScreenBoundStart.y + 1);
                spawnEnemy = false;
                timer = 0;
            }
        }
        if(spawnBoss)
        {
            GameObject boss = Instantiate(bossPrefab);
            boss.transform.position = new Vector2(ScreenBoundStart.x + 8, 0);
            spawnBoss = false;       
        }
        timerChangeColor += Time.deltaTime;
        if (timerChangeColor >9)
        {
            newColor = (objectManager.ColorType)Random.Range(0, 3);
            timerChangeColor = 0;
        }
    }
}
