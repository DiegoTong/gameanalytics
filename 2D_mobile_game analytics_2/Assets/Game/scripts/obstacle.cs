using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class obstacle : objectManager
{
    // Start is called before the first frame update
    private Rigidbody2D rb;
    public SpriteRenderer sprite;
    private float lowerBound = -40;
    void Start()
    {
        sb = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<soundbites>();
        life = 1;
        sprite = this.GetComponent<SpriteRenderer>();
       // speed = 10f;
        rb = this.GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
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
        transform.Translate(Vector3.left * Time.deltaTime * speed);
        if (transform.position.x < lowerBound)
        {
            Destroy(gameObject);
        }
        if(life <=0 && this.tag == "Asteroid")
        {
            Destroy(this.gameObject);
        }
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Bullet" && other.GetComponent<objectManager>()._ColorType == _ColorType)
        {
            sb.PlayRock();
            life--;
        }
    }
}
