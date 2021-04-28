using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyShip : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject LeftWing;
    public GameObject RightWing;
    public GameObject Middle;
    float timer;
    float timerChangeColor;
    int waitingTime;
    int speed;
    objectManager.ColorType newColor;
    public int lowerBound;
    public GameManager _gameManager;
    void Start()
    {
        timer = 0;
        waitingTime = 6;
        timerChangeColor = 0;
        speed = 5;
        lowerBound = 6;
        _gameManager = GameObject.FindGameObjectWithTag("GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if(LeftWing.GetComponent<boss>().life <0 && RightWing.GetComponent<boss>().life < 0 && Middle.GetComponent<boss>().life < 0)
        {
            timer += Time.deltaTime;
            if(timer > waitingTime)
            {
                _gameManager.isBossDead = true;
                timer = 0;
                Destroy(this.gameObject);
             
            }          
        }
        if (timerChangeColor > 5)
        {
            newColor = (objectManager.ColorType)Random.Range(0, 3);
            LeftWing.GetComponent<boss>()._ColorType = newColor;
            RightWing.GetComponent<boss>()._ColorType = newColor;
            Middle.GetComponent<boss>()._ColorType = newColor;
            timerChangeColor = 0;
        }
        timerChangeColor += Time.deltaTime;        
        if (transform.position.x > lowerBound)
        {
            transform.Translate(Vector3.left * Time.deltaTime * speed);
        }
    }
}
