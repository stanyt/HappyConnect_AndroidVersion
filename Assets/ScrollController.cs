using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;


public class ScrollController : MonoBehaviour,IDragHandler,IBeginDragHandler,IEndDragHandler
{
    Vector2 Oriposition,firstPositon;
    RectTransform rectTransform;
    float HalfWidth;
    int LeftableCounts, RightableCounts;
    
    void Start()
    {
        
        rectTransform = GetComponent<RectTransform>();
        HalfWidth = rectTransform.anchoredPosition.x / 2;
        firstPositon = rectTransform.anchoredPosition;
    }
    private void OnEnable()
    {
        LeftableCounts = 2;
        RightableCounts = 0;
    }
    private void OnDisable()
    {
        rectTransform.anchoredPosition = firstPositon;
    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        Oriposition = rectTransform.anchoredPosition;
        rectTransform.anchoredPosition +=new Vector2( eventData.delta.x,rectTransform.anchoredPosition.y);
    }

    public void OnDrag(PointerEventData eventData)
    {
        rectTransform.anchoredPosition += new Vector2(eventData.delta.x, rectTransform.anchoredPosition.y);
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        
        if ((Oriposition - rectTransform.anchoredPosition).x>0&&(Oriposition-rectTransform.anchoredPosition).x>=HalfWidth&&LeftableCounts!=0)//×ó»¬
        {
            rectTransform.anchoredPosition =new Vector2( Oriposition.x - HalfWidth * 2,Oriposition.y);
            --LeftableCounts;
            ++RightableCounts;
        }
        else if((Oriposition - rectTransform.anchoredPosition).x < 0 && (Oriposition - rectTransform.anchoredPosition).x <= -HalfWidth&&RightableCounts!=0)//ÓÒ»¬
        {
            rectTransform.anchoredPosition = new Vector2(Oriposition.x + HalfWidth * 2, Oriposition.y);
            ++LeftableCounts;
            --RightableCounts;
        }
        else{
            rectTransform.anchoredPosition = Oriposition;
        }
    }



}
