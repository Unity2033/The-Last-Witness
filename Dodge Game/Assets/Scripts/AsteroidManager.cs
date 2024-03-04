using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AsteroidManager : MonoBehaviour
{
    [SerializeField] int circleSize = 10;
    [SerializeField] GameObject asteroid;
    [SerializeField] Transform playerTransform;

    void Start()
    {
        StartCoroutine(CreateAsteroid());
    }

    public IEnumerator CreateAsteroid()
    {
        while (true)
        {
            GameObject prefab = Instantiate
            (
                asteroid,
                Random.insideUnitCircle.normalized * circleSize + (Vector2)playerTransform.position,
                Quaternion.identity
            );

            yield return new WaitForSeconds(5f);
        }
    }


}
