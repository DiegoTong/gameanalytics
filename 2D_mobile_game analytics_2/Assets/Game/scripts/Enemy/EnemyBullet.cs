using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBullet : Bullet
{
    float time;
    // Start is called before the first frame update
    void Start()
    {
        time = 0;
        speed = 15;
        rb = this.GetComponent<Rigidbody2D>();
        rb.velocity = new Vector2(-speed, 0);
        ScreenBoundStart = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, Camera.main.transform.position.z));
        _ColorType = ColorType.WHITE;
    }

    void Update()
    {
        time += Time.deltaTime;
        if (transform.position.x > ScreenBoundStart.x || transform.position.x < -ScreenBoundStart.x || time >5)
        {
            Destroy(this.gameObject);
        }
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag != "Enemy")
        {
           // Destroy(other.gameObject);
            //Destroy(this.gameObject);
        }
    }
}
