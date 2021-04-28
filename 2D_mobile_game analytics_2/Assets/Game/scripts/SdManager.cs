using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameAnalyticsSDK;
public class SdManager : MonoBehaviour
{

    private void Awake()
    {
        DontDestroyOnLoad(transform.gameObject);
        GameAnalytics.Initialize();
    }


}
