using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Singleton<T> : MonoBehaviour where T:Singleton<T>
{

    public static T Instance { get;private set; }

   virtual protected void Awake()
    {
        if (Instance)
        {
            Destroy(gameObject);
            Debug.Log("Destroy");
            return;
        }else Instance = (T)this;
    }

}
