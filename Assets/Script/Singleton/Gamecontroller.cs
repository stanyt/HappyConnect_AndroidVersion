using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Gamecontroller : Singleton<Gamecontroller>
{
    public GameSettingData settingData;
    public UserData userDataTemplate;
   
    public UserData userData;

    [Header("游戏性")]
    public bool IsExistLeftUpInMap , IsExistRightUpInMap, IsExistMidTwoInMap, IsExistSingleInMap ;
    public int continuousNumConnectCounts;
    public int currentMin, currentMax;
    public int randomCounts,transCounts;
    public int height, width;

    new void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(gameObject);
        
    }
    private void Start()
    {
        
    }

    public void NumConnect(Hexagon BePlacedBox,Hexagon NextCheckBox) 
    {
        
        List<Hexagon> hexagons = new List<Hexagon>();
        hexagons.Add(BePlacedBox);
        CheckAroundNum(BePlacedBox.Row,BePlacedBox.Col,BePlacedBox.Number,hexagons);
        
        int numConnectCheckAmount = continuousNumConnectCounts != 0 ? settingData.NumConnectCheckAmount - 1 : settingData.NumConnectCheckAmount;

        if (hexagons.Count >= numConnectCheckAmount)
        {

            for (int i = 0; i < hexagons.Count; ++i)
            {
                //TODO:加上消失粒子效果
                if (hexagons[i] != BePlacedBox)
                {
                    StartCoroutine(hexagons[i].YieldClearNum());
                }

            }
            if (BePlacedBox.Number != 0)
            {
                StartCoroutine(BePlacedBox.YieldChangeNumAndCheck(BePlacedBox.Number * 2,NextCheckBox));
                //BePlacedBox.ChangeNum(BePlacedBox.Number * 2);

                //NumConnect(BePlacedBox);
            }
            else BePlacedBox.ClearNum();
        }
        else
        {
            continuousNumConnectCounts = 0;
            if (NextCheckBox && NextCheckBox.Number != 0) Instance.NumConnect(NextCheckBox,null);
            //检查数据
            //if (continuousNumConnectCounts == 0)
            {
                if (CheckGameOver())
                {
                    ButtonFucController.Instance.Revive();
                    Debug.Log("GameOver");
                }
            }
        }
    }

    void CheckAroundNum(int centerRow,int centerCol,int CheckNum, List<Hexagon> listHexagons)
    {
        //int centerRow = Self.Row, centerCol = Self.Col, CheckNum = Self.Number;
        int height = Instance.userData.arrPointData.Length;
        List<Vector2Int> vector2s = new List<Vector2Int>();
        GetAroundSixPoint(vector2s, centerRow, centerCol);
        for (int i = 0; i < vector2s.Count; ++i)
        {
            if (CheckPointExist(vector2s[i].x,vector2s[i].y))
            {
                Hexagon hexagon = Draw.Instance.transform.GetChild(Instance.userData.arrIndexToListIndex[vector2s[i].x][vector2s[i].y]).GetComponent<Hexagon>();
                //Debug.Log("CheckNum : " + CheckNum+" BeCheckedNum : "+ hexagon.Number);
                //符合要求的点计入可比较范围

                if(CheckNum == hexagon.Number && !listHexagons.Contains(hexagon) )
                {
                    listHexagons.Add(hexagon);
                    CheckAroundNum(hexagon.Row,hexagon.Col,hexagon.Number, listHexagons);//递归
                }
            }
        }
        
    }

    public int TheNOfNumBy2(int number)
    {
        int i = 0;
        while (true)
        {
            number /= 2;
            ++i;
            if (number == 1) return i;
        }
    }

    public void SetLevelAndExpAndScores(float exp,int scores,int awards)
    {
        if ((userData.Exp+=exp)>userData.NeedExp)
        {
            userData.Exp -= userData.NeedExp;
            userData.NeedExp *= settingData.expIncreaseRate;
            ++userData.Level;
            ButtonFucController.Instance.LevelUp();
            userData.Scores += settingData.LevelUpScores;
            userData.Awards += settingData.LevelUpAward;
        }
        userData.Scores += scores;
        userData.Awards += awards;
    }

    //关键代码
    public bool CheckGameOver()
    {
        CheckMapData();
        for (int i = 0; i < RandomNumberController.Instance.states.Count; i++)
        {
            switch (RandomNumberController.Instance.states[i])
            {
                case NumberController.NumberState.SINGLE:
                    if (IsExistSingleInMap)
                    {
                        return false;
                    }
                    break;
                case NumberController.NumberState.Left_UP:
                    if (IsExistLeftUpInMap)
                    {
                        return false;
                    }
                    break;
                case NumberController.NumberState.MID_TWO:
                    if (IsExistMidTwoInMap)
                    {
                        return false;
                    }
                    break;
                case NumberController.NumberState.RIGHT_UP:
                    if (IsExistRightUpInMap)
                    {
                        return false;
                    }
                    break;
            }
        }

         return RandomNumberController.Instance.states.Count==0? false: true;
    }
    void CheckMapData()
    {
        IsExistLeftUpInMap = false; IsExistRightUpInMap = false; IsExistMidTwoInMap = false; IsExistSingleInMap = false;
        for (int i = 0; i < userData.arrPointData.Length; ++i)
        {
            for (int j = 0; j < userData.arrPointData[i].Length; ++j)
            {
                if (userData.arrPointData[i][j] == 0)//空位置
                {
                    List<Vector2Int> vector2s = new List<Vector2Int>();
                    GetAroundSixPoint(vector2s, i, j);
                    if (!IsExistLeftUpInMap)
                    {
                        if ((CheckPointExist(vector2s[0].x,vector2s[0].y)&& userData.arrPointData[vector2s[0].x][vector2s[0].y]==0)||
                            (CheckPointExist(vector2s[3].x, vector2s[3].y) && userData.arrPointData[vector2s[3].x][vector2s[3].y] == 0))
                        {
                            IsExistLeftUpInMap = true;
                        }
                    }
                    if (!IsExistMidTwoInMap)
                    {
                        if ((CheckPointExist(vector2s[4].x, vector2s[4].y) && userData.arrPointData[vector2s[4].x][vector2s[4].y] == 0) ||
                            (CheckPointExist(vector2s[5].x, vector2s[5].y) && userData.arrPointData[vector2s[5].x][vector2s[5].y] == 0))
                        {
                            IsExistMidTwoInMap = true;
                        }
                    }
                    if (!IsExistRightUpInMap)
                    {
                        if ((CheckPointExist(vector2s[1].x, vector2s[1].y) && userData.arrPointData[vector2s[1].x][vector2s[1].y] == 0) ||
                            (CheckPointExist(vector2s[2].x, vector2s[2].y) && userData.arrPointData[vector2s[2].x][vector2s[2].y] == 0))
                        {
                            IsExistRightUpInMap = true;
                        }
                    }
                    IsExistSingleInMap = true;
                    if (IsExistLeftUpInMap && IsExistMidTwoInMap && IsExistRightUpInMap) return;
                }

            }
            
        }
    }

    void GetAroundSixPoint(List<Vector2Int> vector2s,int centerRow,int centerCol)
    {
        int height = Instance.userData.arrPointData.Length;
        if (centerRow > height / 2)
        {
            vector2s.Add(new Vector2Int(centerRow - 1, centerCol));
            vector2s.Add(new Vector2Int(centerRow - 1, centerCol + 1));
            vector2s.Add(new Vector2Int(centerRow + 1, centerCol));
            vector2s.Add(new Vector2Int(centerRow + 1, centerCol - 1));
        }
        else if (centerRow < height / 2)
        {
            vector2s.Add(new Vector2Int(centerRow - 1, centerCol - 1));
            vector2s.Add(new Vector2Int(centerRow - 1, centerCol));
            vector2s.Add(new Vector2Int(centerRow + 1, centerCol));
            vector2s.Add(new Vector2Int(centerRow + 1, centerCol + 1));
        }
        else
        {
            vector2s.Add(new Vector2Int(centerRow - 1, centerCol - 1));
            vector2s.Add(new Vector2Int(centerRow - 1, centerCol));
            vector2s.Add(new Vector2Int(centerRow + 1, centerCol - 1));
            vector2s.Add(new Vector2Int(centerRow + 1, centerCol));
        }
        vector2s.Add(new Vector2Int(centerRow, centerCol - 1));
        vector2s.Add(new Vector2Int(centerRow, centerCol + 1));
    }

    bool CheckPointExist(int row,int col)
    {
        int height = Instance.userData.arrPointData.Length;
        return row >= 0 && col >= 0 && row < height && col < Instance.userData.arrPointData[row].Length ? true : false;
    }

    public void ReStartGame()
    {
        userData = Instantiate(userDataTemplate);
        InitData();
        
        InitArrData();
        
        UIController.Instance.SetFreshPaid(settingData.InitNeedFreshAward);
        UIController.Instance.SetTransPaid(settingData.InitNeedTransAward);
        Draw.Instance.NewMap();
        RandomNumberController.Instance.RandomThreeNumberGroup();
        ButtonFucController.Instance.ClosePausePage();
        ButtonFucController.Instance.CloseGameOverPage();
    }
    public void Home()
    {
        SaveNowData();
        SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex - 1);
    }

   public void InitData()
    {
        
        if (settingData.NumConnectCheckAmount == 0)
            settingData.NumConnectCheckAmount = 2;
        continuousNumConnectCounts = 0;

        randomCounts = 0;
        
        userData.TransNeedAwards = settingData.InitNeedTransAward;
        userData.RefreshNeedAwards = settingData.InitNeedFreshAward;

        userData.NeedExp = settingData.initExp * Mathf.Pow(settingData.expIncreaseRate, userData.Level);
        currentMax = (int)Mathf.Pow(2, settingData.INitMaxOfRandomRange);
        currentMin = (int)Mathf.Pow(2, settingData.INitMinOfRandomRange);

        
    }

    public void SaveNowData()
    {
        
        PlayerPrefs.SetString("Player", JsonUtility.ToJson(userData));
        for(int i = 0; i < 3; ++i)
        {
            PlayerPrefs.SetString("Random" + i, JsonUtility.ToJson(userData.CurrentRandomGroup[i]));
        }
        PlayerPrefs.Save();
    }
    public void LoadData()
    {
        if (userDataTemplate) userData = Instantiate(userDataTemplate);
        
        if (PlayerPrefs.HasKey("Player"))
        {
            JsonUtility.FromJsonOverwrite(PlayerPrefs.GetString("Player"), userData);        
        }
        Debug.Log(userData.ListData.Count);
        Debug.Log(userData.ListData[0]);
        InitArrData();
        InitData();
    }
    public void DeleteAllData()
    {
        PlayerPrefs.DeleteAll();
    }

   public void InitArrData()
   {
        userData.arrPointData = new int[Instance.height][];//交错数据数组
        userData.arrIndexToListIndex = new short[height][];//交错数据数组

        for (int i = 0; i < height / 2; ++i)
        {
            userData.arrPointData[i] = new int[width - height / 2 + i];
            userData.arrIndexToListIndex[i] = new short[width - height / 2 + i];
            userData.arrPointData[height - 1 - i] = new int[width - height / 2 + i];
            userData.arrIndexToListIndex[height - 1 - i] = new short[width - height / 2 + i];
        }
        if (height % 2 != 0)
        {
            userData.arrPointData[height / 2] = new int[width];
            userData.arrIndexToListIndex[height / 2] = new short[width];
        }
        bool IsExist=false;
        if (userData.ListData.Count != 0) IsExist = true;
        for (short i = 0,k=0; i < userData.arrPointData.Length; ++i)
        {
            for (int j = 0; j < userData.arrPointData[i].Length; ++j,++k)
            {
                userData.arrIndexToListIndex[i][j] = k;
                if(!IsExist)
                    userData.ListData.Add(0);
            }
        }
        
    }
}
