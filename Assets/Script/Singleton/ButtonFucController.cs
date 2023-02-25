using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonFucController : Singleton<ButtonFucController>
{
    private Button CancelTrans,GuidanceCloseButton;
    private Text FinalScores, FinalAwards;
    private GameObject TransTints,GameOverMask,ThreeGuidance,PausePage,GameOverPage,LevelUpPage,RevivePage;
    public GameObject TransMask,Ads2;
    public Button RefreshBtn, TransBtn, PauseButton, GuidanceButton;

    private void Start()
    {
        GameOverMask = transform.GetChild(2).gameObject;
        //Trans
        TransTints = transform.GetChild(0).gameObject;
        CancelTrans = transform.GetChild(1).GetComponent<Button>();
        CancelTrans.onClick.AddListener(TintsClose);
        TransTints.SetActive(false);
        CancelTrans.gameObject.SetActive(false);
        TransMask.SetActive(false);
        //Guidance
        ThreeGuidance = transform.GetChild(3).gameObject;
        GuidanceButton.onClick.AddListener(Guidance);
        GuidanceCloseButton = ThreeGuidance.transform.GetChild(0).GetComponent<Button>();
        GuidanceCloseButton.onClick.AddListener(GuidanceClose);
        //Pause
        PausePage = transform.GetChild(4).gameObject;
        PausePage.transform.GetChild(1).GetComponent<Button>().onClick.AddListener(ContinueGame);
        PausePage.transform.GetChild(2).GetComponent<Button>().onClick.AddListener(Gamecontroller.Instance.ReStartGame);
        PausePage.transform.GetChild(3).GetComponent<Button>().onClick.AddListener(Gamecontroller.Instance.Home);
        PauseButton.onClick.AddListener(PauseGame);
        //LevelUp
        LevelUpPage = transform.GetChild(5).gameObject;
        LevelUpPage.transform.GetChild(4).GetComponent<Button>().onClick.AddListener(DontPlayAds);
        LevelUpPage.transform.GetChild(2).GetComponent<Text>().text = "+" + Gamecontroller.Instance.settingData.LevelUpAward.ToString();
        //Revive
        RevivePage = transform.GetChild(6).gameObject;
        RevivePage.transform.GetChild(2).GetComponent<Button>().onClick.AddListener(GameOver);
        //GameOver
        GameOverPage = transform.GetChild(7).gameObject;
        FinalScores = GameOverPage.transform.GetChild(1).GetChild(0).GetComponent<Text>();
        FinalAwards = GameOverPage.transform.GetChild(1).GetChild(1).GetComponent<Text>();
        FinalAwards.text = Gamecontroller.Instance.settingData.LevelUpAward.ToString();
        GameOverPage.transform.GetChild(3).GetComponent<Button>().onClick.AddListener(Gamecontroller.Instance.ReStartGame);
        GameOverPage.transform.GetChild(4).GetComponent<Button>().onClick.AddListener(Gamecontroller.Instance.Home);
        //Sound
        PausePage.transform.GetChild(4).GetComponent<Button>().onClick.AddListener(Sound);
        //Vibrate
        PausePage.transform.GetChild(5).GetComponent<Button>().onClick.AddListener(Vibrate);
    }
    private void Update()
    {
        CheckAward();
        CheckScores();
    }

    void CheckAward()
    {
        RefreshBtn.interactable = (Gamecontroller.Instance.userData.Awards < Gamecontroller.Instance.userData.RefreshNeedAwards) ? false : true;
        if (Gamecontroller.Instance.userData.Awards < Gamecontroller.Instance.userData.TransNeedAwards)
        {
            TransBtn.interactable = false;
            TintsClose();
        }
        else TransBtn.interactable = true;
    }

    void CheckScores()
    {
        //TODO:待定
    }

    public void RandomFresh()
    {
        for (int i = 0; i < 3; ++i)
        {
            if(RandomNumberController.Instance.Point[i].GetChild(0))
                Destroy(RandomNumberController.Instance.Point[i].GetChild(0).gameObject);
        }
        Gamecontroller.Instance.userData.Awards -= Gamecontroller.Instance.userData.RefreshNeedAwards;
        Gamecontroller.Instance.userData.RefreshNeedAwards = Gamecontroller.Instance.settingData.freshIncrease * ++Gamecontroller.Instance.randomCounts
            + Gamecontroller.Instance.settingData.InitNeedFreshAward;
        UIController.Instance.SetFreshPaid(Gamecontroller.Instance.userData.RefreshNeedAwards);
        
    }

    public void TransUpdate()
    {
        //TODO:突出按钮和除currentmax外存在的数字
        TransTints.SetActive(true);
        CancelTrans.gameObject.SetActive(true);
        TransMask.SetActive(true);
        StartCoroutine(SelectNum());
    }
    //开启选择协程
    IEnumerator SelectNum()
    {
        while (TransTints.activeSelf)
        {
            if(Input.GetMouseButtonDown(0)){
                RaycastHit2D hit2D = Physics2D.Raycast(Input.mousePosition, Vector3.forward);
                if (hit2D && hit2D.collider.CompareTag("Box")&& hit2D.collider.GetComponent<Hexagon>().Number!=0)
                {
                    hit2D.collider.GetComponent<Hexagon>().ChangeNum(hit2D.collider.GetComponent<Hexagon>().Number * 2);
                    Gamecontroller.Instance.NumConnect(hit2D.collider.GetComponent<Hexagon>(), null);
                    
                    Gamecontroller.Instance.userData.Awards -= Gamecontroller.Instance.userData.TransNeedAwards;
                    Gamecontroller.Instance.userData.TransNeedAwards = Gamecontroller.Instance.settingData.freshIncrease * ++Gamecontroller.Instance.transCounts
                        + Gamecontroller.Instance.settingData.InitNeedTransAward;
                    UIController.Instance.SetTransPaid(Gamecontroller.Instance.userData.TransNeedAwards);
                    AudioManager.Instance.PlaySwitchEffect();
                }
                else
                {
                    Debug.Log(hit2D.collider);
                }
            }
            yield return null;
        }
        
    }
    void TintsClose()
    {
        TransTints.SetActive(false);
        CancelTrans.gameObject.SetActive(false);
        TransMask.SetActive(false);
    }
    public void CloseSelf()
    {
        Ads2.SetActive(false);
    }
    void Guidance()
    {
        GameOverMask.SetActive(true);
        ThreeGuidance.SetActive(true);
    }
    void GuidanceClose()
    {
        GameOverMask.SetActive(false);
        ThreeGuidance.SetActive(false);
    }
    void PauseGame()
    {
        GameOverMask.SetActive(true);
        PausePage.SetActive(true);

    }
    void ContinueGame()
    {
        GameOverMask.SetActive(false);
        PausePage.SetActive(false);
    }
   public void LevelUp()
    {
        LevelUpPage.SetActive(true);
        GameOverMask.SetActive(true);
    }
    void DontPlayAds()
    {
        LevelUpPage.SetActive(false);
        GameOverMask.SetActive(false);
    }
    public void ClosePausePage()
    {
        PausePage.SetActive(false);
        GameOverMask.SetActive(false);
    }

    public void Revive()
    {
        RevivePage.SetActive(true);
        GameOverMask.SetActive(true);
    }

    void GameOver()
    {
        RevivePage.SetActive(false);
        GameOverPage.SetActive(true);
        FinalScores.text = Gamecontroller.Instance.userData.Scores.ToString();
    }
    void Sound()
    {
        PausePage.transform.GetChild(4).GetChild(0).gameObject.SetActive(!PausePage.transform.GetChild(4).GetChild(0).gameObject.activeSelf);
    }
    public void CloseGameOverPage()
    {
        GameOverPage.SetActive(false);
        GameOverMask.SetActive(false);
    }
    void Vibrate()
    {
        Handheld.Vibrate();
    }
}
