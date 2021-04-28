using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//Code Here
public class Bullet : objectManager
{
    public Rigidbody2D rb;
    public playerManager playerManager;
    public SpriteRenderer sprite;
    // Start is called before the first frame update
    void Start()
    {
        playerManager = GameObject.FindGameObjectWithTag("Player").GetComponent<playerManager>();
        speed = 30f;
        rb = this.GetComponent<Rigidbody2D>();
        rb.velocity = new Vector2(speed, 0);
        ScreenBoundStart = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, Camera.main.transform.position.z));
    }

    // Update is called once per frame
    void Update()
    {
        _ColorType = playerManager._ColorType;
        if (transform.position.x > ScreenBoundStart.x || transform.position.x < -ScreenBoundStart.x)
        {
            Destroy(this.gameObject);
        }
        if (playerManager._ColorType == ColorType.WHITE)
        {
            sprite.color = new Color(1, 1, 1, 1);
        }
        if (playerManager._ColorType == ColorType.RED)
        {
            sprite.color = new Color(1, 0, 0, 1);
        }
        if (playerManager._ColorType == ColorType.GREEN)
        {
            sprite.color = new Color(0, 1, 0, 1);
        }
        if (playerManager._ColorType == ColorType.BLUE)
        {
            sprite.color = new Color(0, 0, 1, 1);
        }
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag != "Player")
        {
            if(other.tag == "Enemy")
            {
                Destroy(this.gameObject);
            }
            else
            {

                Destroy(this.gameObject);
            }
        }
    }
}
