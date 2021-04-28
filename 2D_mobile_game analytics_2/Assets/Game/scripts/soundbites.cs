using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class soundbites : MonoBehaviour
{
    // Start is called before the first frame update
    public AudioClip explosion;
    public AudioClip rock;
    public AudioClip shottingsound;
    public AudioSource _audioSource;
    void Start()
    {
        _audioSource = GetComponent<AudioSource>();
    }

    public void PlayExplosion()
    {
        _audioSource.PlayOneShot(explosion);
    }
    public void PlayRock()
    {
        _audioSource.PlayOneShot(rock);
    }
    public void PlayShooting()
    {
        _audioSource.PlayOneShot(shottingsound);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
