using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    private Animator animator;
    private Rigidbody2D rigidBody2D;
    [SerializeField] Vector2 direction;
    [SerializeField] float speed = 500.0f;
    private SpriteRenderer spriteRenderer;

    void Start()
    {
        animator = GetComponent<Animator>();
        rigidBody2D = GetComponent<Rigidbody2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        Keyboard();
    }

    void FixedUpdate()
    {
        Move();

        Reverse();
    }

    void Keyboard()
    {
        direction.x = Input.GetAxisRaw("Horizontal");
        direction.y = Input.GetAxisRaw("Vertical");
    }

    void Move()
    {
        if(rigidBody2D.velocity == Vector2.zero)
        {
            animator.SetBool("Run", false);
        }
        else
        {
            animator.SetBool("Run", true);
        }

        rigidBody2D.velocity = new Vector3(direction.x, direction.y, 0) * speed * Time.fixedDeltaTime;
    }

    void Reverse()
    {
        if (direction.x < 0)
        {
            spriteRenderer.flipX = false;
        }
        else if (direction.x > 0)
        {
            spriteRenderer.flipX = true;
        }
    }
}
