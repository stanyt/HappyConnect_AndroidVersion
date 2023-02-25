using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Hexagon : MonoBehaviour
{
    public float radius,borderWidth,yieldTime;
    private LineRenderer lineDraw;
    public int borderNumber,Row, Col;
    private float angle;
    public Vector2 centerPoint;
    private Text num1;
    
    private Image image;
    public Sprite boxSprite;
    public Sprite singleNumSprite;
    public bool IsUsed;
    public GameObject PrefabEffect;
    bool FirstChanged;
    public int Number { get { return num1.text.CompareTo("") == 0? 0 : int.Parse(num1.text); } }
    private void Start()
    {
        angle = 360 / borderNumber;
        lineDraw = GetComponent<LineRenderer>();
        image = GetComponent<Image>();
        num1 = transform.GetChild(0).GetComponent<Text>();
        FirstChanged = false;
        num1.text = "";
        image.sprite = boxSprite;
        image.color = Color.white;
        IsUsed = false;
        MyDrawBorder();
        if (Gamecontroller.Instance.userData.ListData[Gamecontroller.Instance.userData.arrIndexToListIndex[Row][Col]] != 0)
        {

            ChangeNum(Gamecontroller.Instance.userData.ListData[Gamecontroller.Instance.userData.arrIndexToListIndex[Row][Col]]);
        }
    }
    void MyDrawBorder()
    {
        //要先将角度转成弧度

        lineDraw.startColor = Color.white;
        lineDraw.endColor = Color.white;
        lineDraw.positionCount = borderNumber + 1;
        lineDraw.startWidth = borderWidth;
        lineDraw.endWidth = borderWidth;
        for (int i = 0; i < borderNumber + 1; ++i)
        {
            lineDraw.SetPosition(i, centerPoint + new Vector2(radius * Mathf.Cos(angle * (i + 0.5f) * Mathf.Deg2Rad), radius * Mathf.Sin(angle * (i + 0.5f) * Mathf.Deg2Rad)));
        }
    }

    public void ChangeNum(int num)
    {
        num1.text = num.ToString();
        image.sprite = singleNumSprite;
        
        
        IsUsed = true;
        Gamecontroller.Instance.userData.arrPointData[Row][Col] = num;
        Gamecontroller.Instance.userData.ListData[Gamecontroller.Instance.userData.arrIndexToListIndex[Row][Col]] = num;
        Gamecontroller.Instance.currentMax = Gamecontroller.Instance.currentMax > num ? Gamecontroller.Instance.currentMax : num;

        int min = Gamecontroller.Instance.currentMax;
        for (int i = 0; i < Gamecontroller.Instance.userData.arrPointData.Length; ++i)
        {
            for (int j = 0; j < Gamecontroller.Instance.userData.arrPointData[i].Length; ++j)
                if (Gamecontroller.Instance.userData.arrPointData[i][j] != 0&&min> Gamecontroller.Instance.userData.arrPointData[i][j])
                {
                    min = Gamecontroller.Instance.userData.arrPointData[i][j];
                }
        }
        Gamecontroller.Instance.currentMin = min;
        image.color = Gamecontroller.Instance.settingData.colors[Gamecontroller.Instance.TheNOfNumBy2(Number) - 1];

        if (!FirstChanged)
        {
            Instantiate(PrefabEffect, transform.position, Quaternion.identity,transform);
            FirstChanged = true;
        }
    }
    public IEnumerator YieldChangeNumAndCheck(int num, Hexagon NextCheckBox)
    {
        yield return new WaitForSeconds(yieldTime);
        ChangeNum(num);
        AudioManager.Instance.PlayConnectEffect();
        ++Gamecontroller.Instance.continuousNumConnectCounts;
        Gamecontroller.Instance.SetLevelAndExpAndScores(Gamecontroller.Instance.settingData.OneConnectExp* Gamecontroller.Instance.continuousNumConnectCounts,Gamecontroller.Instance.settingData.OneConnectScores* Gamecontroller.Instance.continuousNumConnectCounts, 
            Gamecontroller.Instance.settingData.OneConnectAward * Gamecontroller.Instance.continuousNumConnectCounts);
        Gamecontroller.Instance.NumConnect(this, NextCheckBox);
        
    }
     public IEnumerator YieldClearNum()
    {
        yield return new WaitForSeconds(yieldTime);
        ClearNum();
    }
    public void ClearNum()
    {
        num1.text = "";
        image.sprite = boxSprite;
        image.color = Color.white;
        IsUsed = false;
        Gamecontroller.Instance.userData.arrPointData[Row][Col] = 0;
        Gamecontroller.Instance.userData.ListData[Gamecontroller.Instance.userData.arrIndexToListIndex[Row][Col]] = 0;
        FirstChanged = false;
    }

    
}
