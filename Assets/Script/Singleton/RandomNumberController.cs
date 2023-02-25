using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomNumberController : Singleton<RandomNumberController>
{
    //随机算法与递增规则代码
    public GameObject Single, Left_UP, Mid_Two, Right_Up;
    public int minOfRandomRange, maxOfRandomRange;//先赋值
    public NumberController Template;
    public Transform[] Point=new Transform[3];
    public List<NumberController.NumberState> states= new List<NumberController.NumberState>();
    new void Awake()
    {
        base.Awake();
        minOfRandomRange=Gamecontroller.Instance.settingData.INitMinOfRandomRange;
        maxOfRandomRange=Gamecontroller.Instance.settingData.INitMaxOfRandomRange; 
        for (int i = 0; i < 3; ++i) Point[i] = transform.GetChild(i) ;
        LoadGroups();
       
    }
    private void Update()
    {
        if (IsTimeToRandom())
        {
            RandomThreeNumberGroup();
            int minPow =Gamecontroller.Instance.TheNOfNumBy2(Gamecontroller.Instance.currentMin);
            int maxPow = Gamecontroller.Instance.TheNOfNumBy2(Gamecontroller.Instance.currentMax);
            if (maxOfRandomRange!=maxPow||minOfRandomRange!=minPow)
            {
                maxOfRandomRange = maxPow;
                minOfRandomRange = minPow;
            }
        }
    }
    public void RandomThreeNumberGroup()
    {
        for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
        states.Clear();
        for(int i = 0; i < 3; ++i)
        {
            NumberController number=null;
            NumberController.NumberState randomNumberState = (NumberController.NumberState)Random.Range(0, 4);
            states.Add(randomNumberState);
            switch (randomNumberState)
            {
                case NumberController.NumberState.SINGLE:
                    {
                        number = Instantiate(Single, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
                        number.number1 =(int)Mathf.Pow(2,Random.Range(minOfRandomRange, maxOfRandomRange+1)) ;
                        break;
                    }
                case NumberController.NumberState.Left_UP:
                    {
                        number = Instantiate(Left_UP, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
                        number.number1 = (int)Mathf.Pow(2, Random.Range(minOfRandomRange, maxOfRandomRange+1));
                        number.number2 = (int)Mathf.Pow(2,Random.Range(minOfRandomRange, maxOfRandomRange+1));
                        break;
                    }
                case NumberController.NumberState.MID_TWO:
                    {
                        number = Instantiate(Mid_Two, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
                        number.number1 = (int)Mathf.Pow(2, Random.Range(minOfRandomRange, maxOfRandomRange+1));
                        number.number2 = (int)Mathf.Pow(2, Random.Range(minOfRandomRange, maxOfRandomRange+1));
                        break;
                    }
                    
                case NumberController.NumberState.RIGHT_UP:
                    {
                        number = Instantiate(Right_Up, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
                        number.number1 = (int)Mathf.Pow(2, Random.Range(minOfRandomRange, maxOfRandomRange+1));
                        number.number2 = (int)Mathf.Pow(2, Random.Range(minOfRandomRange, maxOfRandomRange+1));
                        break;
                    }
                default:Debug.Log("Random Error"); break;
            }
            if (number)
            {
                number.transform.SetParent(Point[i]);
                Gamecontroller.Instance.userData.CurrentRandomGroup[i] = (number);
            }
        }
        
    }

    bool IsTimeToRandom()
    {
        if (transform.childCount!=3)
        {
            return false;
        }
        for (int i = 0; i < 3; ++i)
        {
            if (Point[i].transform.childCount != 0)
            {
                return false;
            }
        }
        return true;
    }

    void LoadGroups()
    {
        
        for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);

        states.Clear();
        NumberController number = null;
        for (int i = 0; i < 3; ++i)
        {
            if (PlayerPrefs.GetString("Random"+i)!="")
            {
                
                Debug.Log(PlayerPrefs.GetString("Random" + i));
                JsonUtility.FromJsonOverwrite(PlayerPrefs.GetString("Random" + i), Template);
                states.Add(Template.numberState);
                switch (Template.numberState)
                {
                    case NumberController.NumberState.SINGLE:
                        {
                            number = Instantiate(Single, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
                            number.number1 = Template.number1;
                            break;
                        }
                    case NumberController.NumberState.Left_UP:
                        {
                            number = Instantiate(Left_UP, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
                            number.number1 = Template.number1;
                            number.number2 = Template.number2;
                            break;
                        }
                    case NumberController.NumberState.MID_TWO:
                        {
                            number = Instantiate(Mid_Two, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
                            number.number1 = Template.number1;
                            number.number2 = Template.number2;
                            break;
                        }

                    case NumberController.NumberState.RIGHT_UP:
                        {
                            number = Instantiate(Right_Up, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
                            number.number1 = Template.number1;
                            number.number2 = Template.number2;
                            break;
                        }
                    default: Debug.Log("Random TemPlate Error"); break;
                }

                

              
                number.transform.SetParent(Point[i]);
                Gamecontroller.Instance.userData.CurrentRandomGroup[i] = (number);
                
            }
        }
        if (number == null)
        {
            RandomThreeNumberGroup();
        }
    }
}
