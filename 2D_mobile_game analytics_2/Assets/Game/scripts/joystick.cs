using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class joystick : MonoBehaviour
{
    public int leftTouch = 99;
    public Transform player;
    public float speed = 5.0f;
    private bool touchStart = false;
    private Vector2 pointA;
    private Vector2 pointB;

    public Transform circle;
    public Transform outerCircle;

    public Vector2 circleOrigin;

    private Vector2 screenBounds;
    private float objectWidth;
    private float objectHeight;

    public GameObject bulletPrefab;
    Rect topLeft;
    Rect bottomLeft;
    Rect topRight;
    Rect bottomRight;
    // Update is called once per frame
    private void Start()
    {
        topLeft = new Rect(0, 0, Screen.width / 2, Screen.height / 2);
        bottomLeft = new Rect(0, Screen.height / 2, Screen.width / 2, Screen.height / 2);
        topRight = new Rect(Screen.width / 2, 0, Screen.width / 2, Screen.height / 2);
        bottomRight = new Rect(Screen.width / 2, Screen.height / 2, Screen.width / 2, Screen.height / 2);

        Input.multiTouchEnabled = false;
        circleOrigin = circle.transform.position;
        screenBounds = Camera.main.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height, Camera.main.transform.position.z));
        objectWidth = player.GetChild(0).transform.GetComponent<SpriteRenderer>().bounds.extents.x; //extents = size of width / 2
        objectHeight = player.GetChild(0).transform.GetComponent<SpriteRenderer>().bounds.extents.y; //extents = size of height / 2
    }
    void Update()
    {




    }
    private void FixedUpdate()
    {
        if (Input.touchCount > 0)
        {
            int i = 0;
            while (i < Input.touchCount)
            {
                Touch t = Input.GetTouch(i);
                if (t.phase == TouchPhase.Began)
                {

                }
                else if (t.phase == TouchPhase.Moved)
                {

                }
                else if (t.phase == TouchPhase.Ended)
                {

                }
                //foreach (Touch touch in Input.touches)
                //{
                //    int id = touch.fingerId;
                //    if (EventSystem.current.IsPointerOverGameObject(id))
                //    {

                //    }
                //}
                var touchPos = t.position;
                if (topLeft.Contains(touchPos))
                {
                }
                if (bottomLeft.Contains(touchPos))
                {
                }
                if (topRight.Contains(touchPos))
                {


                }
                if (bottomRight.Contains(touchPos))
                {
                }
                i++;
            }
        }
        if (Input.GetKeyDown("space"))
        {
            ShootBullet();
        }
        if (Input.GetMouseButtonDown(0))
        {
            pointA = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, Camera.main.transform.position.z));

            //circle.transform.position = pointA;
            // outerCircle.transform.position = pointA;
            // circle.GetComponent<SpriteRenderer>().enabled = true;
            //outerCircle.GetComponent<SpriteRenderer>().enabled = true;
        }
        if (Input.GetMouseButton(0))
        {
            touchStart = true;
            pointB = Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, Camera.main.transform.position.z));
        }
        else
        {
            touchStart = false;
        }
        Vector3 viewPos = transform.position;
        viewPos.x = Mathf.Clamp(viewPos.x, screenBounds.x * -1 + objectWidth, screenBounds.x - objectWidth);
        viewPos.y = Mathf.Clamp(viewPos.y, screenBounds.y * -1 + objectHeight, screenBounds.y - objectHeight);
        transform.position = viewPos;


        if (touchStart)
        {
            Vector2 offset = pointB - pointA;
            Vector2 direction = Vector2.ClampMagnitude(offset, 1.0f);
            moveCharacter(direction);

            circle.transform.position = new Vector2(pointA.x + direction.x, pointA.y + direction.y);
        }
        else
        {
            circle.transform.position = circleOrigin;
         //   circle.GetComponent<SpriteRenderer>().enabled = false;
         //    outerCircle.GetComponent<SpriteRenderer>().enabled = false;
        }

    }
    void moveCharacter(Vector2 direction)
    {
        player.Translate(direction * speed * Time.deltaTime);
    }
    public void ShootBullet()
    {
        GameObject bullet = Instantiate(bulletPrefab);
        bullet.transform.position = player.transform.position;
    }
}
