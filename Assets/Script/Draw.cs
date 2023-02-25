using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Draw : Singleton<Draw>
{
   
    public GameObject boxPrefab;
    public float leftRightGap,UpAndDownGap;
    private Vector2 beginPoint;
    private Vector2[][] arrPoint;
    
    private float beginGap, Diam, UpAndDownDiam;
    void Start()
    {
        NewMap();
    }
    public void NewMap()
    {
        beginPoint = Vector2.zero;
        beginGap = leftRightGap;
        Diam = 2 * leftRightGap;
        UpAndDownDiam = 2 * UpAndDownGap;
        InitData();
        ClearMap();
        DrawMap();
    }
    void InitData (){
        float w =Gamecontroller.Instance.width * Diam/2;//从中心点开始计算坐标
        beginPoint -=new Vector2(w,0);
        arrPoint = new Vector2[Gamecontroller.Instance.height][];//交错数组



        for (int i = 0; i < Gamecontroller.Instance.height /2; ++i) 
        {
            arrPoint[i] = new Vector2[Gamecontroller.Instance.width - Gamecontroller.Instance.height / 2 + i];
            
            arrPoint[Gamecontroller.Instance.height - 1 - i] = new Vector2[Gamecontroller.Instance.width - Gamecontroller.Instance.height / 2 + i];
            
        }
        
        //new 一个新坐标
        for (int i=0; i < Gamecontroller.Instance.height /2 ; ++i)
        {
            arrPoint[i][0] = new Vector2(beginGap * (Gamecontroller.Instance.height /2+1-i) + beginPoint.x, beginPoint.y+ (Gamecontroller.Instance.height / 2 - i) * UpAndDownDiam);
            arrPoint[Gamecontroller.Instance.height -1-i][0]=new Vector2(beginGap * (Gamecontroller.Instance.height / 2 + 1 - i) + beginPoint.x, beginPoint.y- (Gamecontroller.Instance.height / 2 - i) * UpAndDownDiam);
            
            for (int j = 1; j < arrPoint[i].Length; ++j)
            {
                arrPoint[i][j]=new Vector2(arrPoint[i][0].x+ Diam * j, arrPoint[i][0].y);
                arrPoint[Gamecontroller.Instance.height - 1 - i][j] = new Vector2(arrPoint[Gamecontroller.Instance.height - 1 - i][0].x + Diam * j, arrPoint[Gamecontroller.Instance.height - 1 - i][0].y);
            }
        }

        //特殊情况
        if (Gamecontroller.Instance.height % 2 != 0)
        {
            arrPoint[Gamecontroller.Instance.height / 2] = new Vector2[Gamecontroller.Instance.width];
            
            arrPoint[Gamecontroller.Instance.height /2][0] = new Vector2(beginGap + beginPoint.x, beginPoint.y);
            for (int j = 1; j < arrPoint[Gamecontroller.Instance.height /2].Length; ++j)
            {
                arrPoint[Gamecontroller.Instance.height / 2][j] = new Vector2(arrPoint[Gamecontroller.Instance.height / 2][0].x + Diam * j, arrPoint[Gamecontroller.Instance.height / 2][0].y);
            }
        }

    }

    void DrawMap()
    {
        short k = 0;
        for (int i = 0; i < arrPoint.Length; ++i)
        {
            for (int j = 0; j < arrPoint[i].Length; ++j,++k)
            {
                if(boxPrefab)
                {
                    
                    Hexagon h = Instantiate(boxPrefab, arrPoint[i][j], Quaternion.identity,transform).GetComponent<Hexagon>();
                    h.centerPoint = arrPoint[i][j]*0.01f;
                    h.transform.localPosition = arrPoint[i][j];//因为是ui
                    h.Row = i;
                    h.Col = j;

                }
            }
        }

    }

     void ClearMap()
    {
        int itemNums = transform.childCount;
        for (int i = 0; i < itemNums; i++)
        {
            Destroy(transform.GetChild(i).gameObject);
        }
    }
}

