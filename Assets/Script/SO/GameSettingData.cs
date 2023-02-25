using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName = "GameSettingData", menuName = "Data/GameSettingData")]
public class GameSettingData : ScriptableObject
{
    public float initExp, expIncreaseRate, OneConnectExp;
    public int OneConnectAward, LevelUpAward,AdsAward, OneConnectScores, LevelUpScores, freshIncrease;
    public int NumConnectCheckAmount,InitNeedFreshAward,InitNeedTransAward, INitMaxOfRandomRange, INitMinOfRandomRange;
                                                                           

    public List<Color> colors = new List<Color>{new Color(92/255f, 190/255f, 228/255f)/*蓝色*/,new Color(152/255f, 220/255f, 85/255f)/*绿色*/,new Color(220/255f, 101/255f, 85/255f)/*红色*/,new Color(126/255f, 142/255f, 213/255f)/*蓝紫色*/,
    new Color(231/255f, 106/255f, 130/255f)/*粉红色*/,new Color(89/255f, 203/255f, 134/255f)/*深绿色*/,new Color(237/255f, 150/255f, 74/255f)/*橙色*/,new Color(187/255f, 126/255f, 213/255f)/*粉紫色*/,
    new Color(255/255f, 198/255f, 62/255f)/*橙黄色*/,new Color(73/255f, 124/255f, 244/255f)/*海蓝色*/};


    [TextArea]
    public string GameModeGuides, Ads1Link, Ads2Link,LevelUpAdsLink;
}
