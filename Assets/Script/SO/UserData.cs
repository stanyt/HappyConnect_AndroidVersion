using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[CreateAssetMenu(fileName ="UserData",menuName ="Data/UserData")]
public class UserData : ScriptableObject
{

    public int[][] arrPointData;//�� 0,2��n���� ����״̬
    public short[][] arrIndexToListIndex;//��¼˳��
    public List<int> ListData = new List<int>();
    public int HighRecordScores, Awards, Scores, RefreshNeedAwards, TransNeedAwards, Level;
    public float Exp,NeedExp;
    public NumberController[] CurrentRandomGroup = new NumberController[3];
}
