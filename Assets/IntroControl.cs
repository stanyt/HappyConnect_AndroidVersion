using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class IntroControl : MonoBehaviour
{
    public void NewGame()
    {
        Gamecontroller.Instance.DeleteAllData();
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
        if (Gamecontroller.Instance.userDataTemplate) Gamecontroller.Instance.userData = Instantiate(Gamecontroller.Instance.userDataTemplate);
        Gamecontroller.Instance.InitData();
        Gamecontroller.Instance.InitArrData();
    }

    public void ContinueGame()
    {
        //»Ö¸´Êý¾Ý
        Gamecontroller.Instance.LoadData();
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
    }
    public void EndGame()
    {
        Application.Quit();
    }
}
