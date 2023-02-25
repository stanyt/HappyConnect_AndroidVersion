using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[CreateAssetMenu(fileName ="UserData",menuName ="Data/UserData")]
public class UserData : ScriptableObject
{

    public int[][] arrPointData;//有 0,2的n次幂 两种状态
    public short[][] arrIndexToListIndex;//记录顺序
    public List<int> ListData = new List<int>();
    public int HighRecordScores, Awards, Scores, RefreshNeedAwards, TransNeedAwards, Level;
    public float Exp,NeedExp;
    public NumberController[] CurrentRandomGroup = new NumberController[3];
}
