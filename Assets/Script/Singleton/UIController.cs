using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class UIController : Singleton<UIController>
{
    public Text currentLevel, nextLevel, currentScores, HistoryScoresRecord, currentTargetNumber, currentAwards,FreshPaidAward,TransPaidAward;
    public Image ExpBar;
    private void Start()
    {
        SetFreshPaid(Gamecontroller.Instance.settingData.InitNeedFreshAward);
        SetTransPaid(Gamecontroller.Instance.settingData.InitNeedTransAward);
        HistoryScoresRecord.text = Gamecontroller.Instance.userData.HighRecordScores.ToString();
    }
    private void Update()
    {
        SetTargetNum(Gamecontroller.Instance.currentMax * 2);
        SetLevelAbout(Gamecontroller.Instance.userData.Level, Gamecontroller.Instance.userData.Exp / Gamecontroller.Instance.userData.NeedExp);
        SetAwards(Gamecontroller.Instance.userData.Awards);
        SetScores(Gamecontroller.Instance.userData.Scores);
        SetTransNum(Gamecontroller.Instance.currentMin);

    }
    public void SetTargetNum(int TargetNumber)
    {
        Instance.currentTargetNumber.text = TargetNumber.ToString();
        Instance.currentTargetNumber.GetComponentInParent<Image>().color = Gamecontroller.Instance.settingData.colors[Gamecontroller.Instance.TheNOfNumBy2(TargetNumber) - 1];
    }

    public void SetLevelAbout(int curLevel,float ExpProportion)
    {
        currentLevel.text = curLevel.ToString();
        nextLevel.text = (curLevel+1).ToString();
        ExpBar.fillAmount = ExpProportion;
    }

    public void SetScores(int currentScore)
    {
        currentScores.text = currentScore.ToString();
    }
    public void SetAwards(int currentAward)
    {
        currentAwards.text = currentAward.ToString();
    }

   public void SetFreshPaid(int needAwards)
    {
        FreshPaidAward.text = needAwards.ToString();
    }
    public void SetTransPaid(int needAwards)
    {
        TransPaidAward.text = needAwards.ToString();
    }
   public void SetTransNum(int minNumber)
    {
        Transform parent = TransPaidAward.transform.parent;
        for (int i = 0; i < 4; ++i)
        {
            parent.GetChild(i).GetComponent<Text>().text = minNumber.ToString();
            minNumber *= 2;
        }
    }

}
