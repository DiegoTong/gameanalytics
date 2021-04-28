using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movement : MonoBehaviour
{
    private Vector2 startingPoint;
    public Transform player;
    public float speed = 7.0f;
    private int rightTouch = 99;
    public GameObject bulletPrefab;
    public Transform circle;
    public Transform outerCircle;
    private void Start()
    {
        Input.multiTouchEnabled = true;
    }
    void FixedUpdate()
    {
        int i = 0;
        while(i < Input.touchCount)
        {
            Touch t = Input.GetTouch(i);
            Vector2 TouchPosi = getTouchPosition(t.position);
            if (t.phase == TouchPhase.Began)
            {
                if(t.position.x> Screen.width/2)
                {
                    rightTouch = t.fingerId;
                    startingPoint = TouchPosi;
                }
            }
            else if (t.phase == TouchPhase.Moved && rightTouch ==t.fingerId)
            {
                Vector2 offset = TouchPosi - startingPoint;
                Vector2 direction = Vector2.ClampMagnitude(offset, 1.0f);

                moveCharacter(direction);

                circle.transform.position = new Vector2(outerCircle.transform.position.x + direction.x, outerCircle.transform.position.y + direction.y);
            }
            else if (t.phase == TouchPhase.Ended && rightTouch == t.fingerId)
            {
                rightTouch = 99;
                circle.transform.position = new Vector2(outerCircle.transform.position.x, outerCircle.transform.position.y);
            }
            i++;
        }
    }

    Vector2 getTouchPosition(Vector2 touchPos)
    {
        return GetComponent<Camera>().ScreenToWorldPoint(new Vector3(touchPos.x, touchPos.y, transform.position.z));
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
