using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Asteroid : MonoBehaviour
{
    [SerializeField] Vector2 direction;
    [SerializeField] float speed = 5.0f;
    [SerializeField] Transform targetTransform;

    void Start()
    {
        targetTransform = GameObject.Find("Player").transform;

        direction = targetTransform.position - transform.position;

        direction.Normalize();
    }

    void Update()
    {
        Move();
    }

    void Move()
    {
        transform.Translate(direction * speed * Time.deltaTime);
    }
}
