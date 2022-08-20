using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class SingleNote : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _noteName;
    public float speed;
    //public int x, y;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector3.right * Time.deltaTime * speed);

        // if the note is no longer visible
        if (transform.localPosition.x >= 1596.0f)
        {
            Destroy(gameObject);
        }
    }
}
