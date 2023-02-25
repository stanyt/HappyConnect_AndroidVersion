using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
public class itemOnDrag : MonoBehaviour, IDragHandler, IEndDragHandler, IBeginDragHandler
{
    private Transform OriParent;
    private CanvasGroup canvasGroup;
    public int currentOnDragNum;
    private void Start()
    {
        OriParent = transform.parent;
        canvasGroup = GetComponent<CanvasGroup>();
    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        if (eventData.pointerCurrentRaycast.gameObject.CompareTag("Num1"))
        {
            currentOnDragNum = 1;
        }
        else currentOnDragNum = 2;
        
        transform.SetParent(OriParent.parent);
        transform.position += new Vector3( eventData.delta.x, eventData.delta.y);
        canvasGroup.blocksRaycasts = false;
    }

    public void OnDrag(PointerEventData eventData)
    {
        transform.position += new Vector3(eventData.delta.x, eventData.delta.y);
        canvasGroup.blocksRaycasts = false;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        GameObject Object = eventData.pointerCurrentRaycast.gameObject;
        if (Object)
        {
            if (!Object.CompareTag("Box"))
            {
                transform.position = OriParent.position;
                transform.SetParent(OriParent);
            }
            else
            {
                if (GetComponent<NumberController>().Trans(Object.GetComponentInParent<Hexagon>(), currentOnDragNum))
                {
                    RandomNumberController.Instance.states.Remove(GetComponent<NumberController>().numberState);
                    for(int i=0;i<3;++i)
                    {
                        if (OriParent==RandomNumberController.Instance.Point[i])
                        {
                            Gamecontroller.Instance.userData.CurrentRandomGroup[i] = null;
                            break;
                        }
                    }
                    Destroy(gameObject);
                    AudioManager.Instance.PlayDownEffect();
                }
                else
                {
                    transform.position = OriParent.position;
                    transform.SetParent(OriParent);
                }
            }
        }
        transform.position += new Vector3(eventData.delta.x, eventData.delta.y);
        canvasGroup.blocksRaycasts = true;
    }
}
