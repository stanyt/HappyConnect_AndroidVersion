using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class NumberController : MonoBehaviour
{
    public enum  NumberState
    {
        SINGLE, Left_UP, MID_TWO, RIGHT_UP
    };
    public int number1,number2;
    public Text Num1,Num2;
    public NumberState numberState;
    public bool isUsed;
    public Image imageNum1, imageNum2;

    private void Start()
    {
        
        Num1.text = number1.ToString();
        imageNum1.color = Gamecontroller.Instance.settingData.colors[Gamecontroller.Instance.TheNOfNumBy2(number1) - 1];
        if (numberState != NumberState.SINGLE)
        {
            imageNum2.color = Gamecontroller.Instance.settingData.colors[Gamecontroller.Instance.TheNOfNumBy2(number2) - 1];
            Num2.text = number2.ToString();
        }
        
    }

    public bool Trans(Hexagon TargetBox,int currentOnDragNumIndex)
    {
        if (TargetBox.IsUsed) return false;
        int nextCol=-10, nextRow=-10,height= Gamecontroller.Instance.height;
        Hexagon nextTarget = null;
        switch (numberState)
        {
            case NumberState.SINGLE:
                {
                    TargetBox.ChangeNum(number1);
                    break;
                }
            case NumberState.Left_UP:
                {
                    if(TargetBox.Row<height/2)
                    {
                        nextCol = currentOnDragNumIndex == 1 ? TargetBox.Col + 1 : TargetBox.Col - 1;
                    }
                    else if(TargetBox.Row > height / 2)
                    {
                        nextCol = TargetBox.Col;
                    }
                    else
                    {
                        nextCol = currentOnDragNumIndex == 1 ? TargetBox.Col  : TargetBox.Col - 1; 
                    }
                    
                    nextRow = currentOnDragNumIndex == 1 ? TargetBox.Row + 1 : TargetBox.Row - 1;
                    break;
                }
            case NumberState.MID_TWO:
                {
                    nextCol = currentOnDragNumIndex == 1 ? TargetBox.Col + 1 : TargetBox.Col - 1;
                    nextRow = TargetBox.Row;
                    break;
                }
            case NumberState.RIGHT_UP:
                { 
                    nextRow = currentOnDragNumIndex == 1 ? TargetBox.Row + 1 : TargetBox.Row - 1;
                    if (TargetBox.Row < height / 2)
                    {
                        nextCol = TargetBox.Col ;
                    }
                    else if (TargetBox.Row > height / 2)
                    {
                        nextCol = currentOnDragNumIndex == 1 ? TargetBox.Col - 1 : TargetBox.Col + 1;
                    }
                    else
                    {
                        nextCol = currentOnDragNumIndex == 1 ? TargetBox.Col - 1 : TargetBox.Col ;
                    }

                    break;
                }

        }
        if (nextCol != -10 && nextRow != -10)
        {
            if (nextCol < 0 || nextRow < 0 || nextRow >= height || nextCol >= Gamecontroller.Instance.userData.arrIndexToListIndex[nextRow].Length
                || Draw.Instance.transform.GetChild(Gamecontroller.Instance.userData.arrIndexToListIndex[nextRow][nextCol]).GetComponent<Hexagon>().IsUsed) return false;
            
            nextTarget = Draw.Instance.transform.GetChild(Gamecontroller.Instance.userData.arrIndexToListIndex[nextRow][nextCol]).GetComponent<Hexagon>();

            if (currentOnDragNumIndex == 1)
            {
                nextTarget.ChangeNum(number2);
                TargetBox.ChangeNum(number1);
            }
            else
            {
                TargetBox.ChangeNum(number2);
                nextTarget.ChangeNum(number1);
            }
  
        }
        //先进行第二个数字的消除(更改逻辑成先进行选中数字的消除,新增连续消除次数)
        if(TargetBox.Number!=0)
        {
            Gamecontroller.Instance.NumConnect(TargetBox,nextTarget);
        }
        //TODO:可能出现连续协程与这个相撞的情况
        //if (nextTarget &&nextTarget.Number!=0) Gamecontroller.Instance.NumConnect(nextTarget);
        
        return true;
    }

}
