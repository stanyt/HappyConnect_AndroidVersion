#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<Hexagon>
struct List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Vector2Int>
struct List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD;
// System.Collections.Generic.List`1<NumberController/NumberState>
struct List_1_tB728C84B38500C9451A333E63EED455678C9A664;
// Singleton`1<AudioManager>
struct Singleton_1_t463884EE648275DEFF7CE265B168788375C102F8;
// Singleton`1<ButtonFucController>
struct Singleton_1_tEAE2001E1C7D5693BD6DE825E8EEE8AC7023D7C4;
// Singleton`1<Draw>
struct Singleton_1_tDBCC9781F34942E75DAC8C05CD15527C17206EF2;
// Singleton`1<Gamecontroller>
struct Singleton_1_tC2F5A0B4D469CD33E39AB10F37DD814CAFD4E539;
// Singleton`1<System.Object>
struct Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3;
// Singleton`1<RandomNumberController>
struct Singleton_1_t14D87CF5A19904D2378C84323FA404A0A6B1BEF5;
// Singleton`1<UIController>
struct Singleton_1_t024D6FE05EE509D47C5116F452A2A51023F31F29;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Int16[][]
struct Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
// UnityEngine.Vector2[][]
struct Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Hexagon[]
struct HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// NumberController[]
struct NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// NumberController/NumberState[]
struct NumberStateU5BU5D_tCDAD8C159140390B1474EF79CF470FBCA4BDF1FC;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioManager
struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5;
// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// ButtonFucController
struct ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Draw
struct Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameSettingData
struct GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F;
// Gamecontroller
struct Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// Hexagon
struct Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// IntroControl
struct IntroControl_t1A48A8F6D08FCEAC0BA5290FCC9BA766538374E3;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// NumberController
struct NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// RandomNumberController
struct RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// ScrollController
struct ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UserData
struct UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// itemOnDrag
struct itemOnDrag_t6BDD32F756C01808A739D32C9A3D94835712CAF1;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// ButtonFucController/<SelectNum>d__23
struct U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9;
// Hexagon/<YieldChangeNumAndCheck>d__19
struct U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682;
// Hexagon/<YieldClearNum>d__20
struct U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB728C84B38500C9451A333E63EED455678C9A664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0EB3ABCEBF8AD992C5504A03E22528C469F4F111;
IL2CPP_EXTERN_C String_t* _stringLiteral1EFF49A1CEFA2EA6EA2C1FF085B28B7E898C4A4A;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF493D6E4EC27C0164F5DEFB3BCF041F9412E6B;
IL2CPP_EXTERN_C String_t* _stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC;
IL2CPP_EXTERN_C String_t* _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81;
IL2CPP_EXTERN_C String_t* _stringLiteralB06F0D03206731E93EE343D0A0B6BF32CED75663;
IL2CPP_EXTERN_C String_t* _stringLiteralC0AE16B573B4BB3076441BD0CBDBE19D7B154FEF;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD3C4D55F58BF724549657EDA09204E53395E1B2C;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonFucController_ContinueGame_m56B5B3C3B1C08572609A682FAADDEA3C24CDE71E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonFucController_DontPlayAds_m806658B6829E3C13791AB667989492EB6E2E028C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonFucController_GameOver_mCB6F7343B60AAAEEEDCA633F3F24F75C4D948C95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonFucController_GuidanceClose_mDE76191D7AAD97B72A413FAF38BA342ED4BF26A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonFucController_Guidance_m7378FA99786BA166411D502E9531417A2A4C4710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonFucController_PauseGame_m01CC7E1C93DEFA32204FBA4D7F630E3E06791380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonFucController_Sound_m9489D9AA28697D1FFA64E3131189D2669B40EF0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonFucController_TintsClose_m3C37FC722233C1F96BF418738CB78EA63C61BA24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ButtonFucController_Vibrate_m5ACE42270977D05493A3B84C20A54A8E4AE88FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_mC25A91D60F4C0DC87303DAA477B1FC0EC0C41EC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_mE66B6E7D930F8CD5FDDD4531DD6230749040B1FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_m230A60E6437456F2B694A918E1489C90A6302DF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gamecontroller_Home_m1AFCB0B1DE0140FB48CFE179CCBE592307D80FD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gamecontroller_ReStartGame_m61CE8A7D0FEA6B61ED84FF7901C01C554674BCF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF03CD2D0CF090D5115AC0B1D1693C4352624878F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8E3033D8A20DF2E2BD74F2667F31F70EB91CC2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mFA59461CB5E5BF85E9B93754B8C4EA44F338B03F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD5512C7D39FE641D0D8D1069CC4610F35E03AD98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m103CC2425123E3119A2C7865BAB43403D3598F99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE7CAD0A0114E2ABE951778EECF36B786DE521A24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA3250ABD65BCE9348473F2B3898AC487E6FCDFCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_Awake_m988743021D568F37F70A2665E372AB0D5C83FB75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_Awake_mA29AD07345F5099B4F4C3F53DBC90A2FBF1CAE66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m09A5DF51BFCAECC9A911575ADE90437781F80F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m17F5D815769AB282789095F7F7380EC95EEF84C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m4AEDFE335BBB1F0E4B9FE38C55B04A4B9A03AACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m8684452EF28D2585F6120C9831F115879F632625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mE1C742E07E6001DA76D84607DD22EE8A33751B1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mFE1F169B3A4ACC45C77AD7FDEB8D45CA5E74A7CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSelectNumU3Ed__23_System_Collections_IEnumerator_Reset_m3BE0A849DFC7D766224D7B94AAA30DAAE95FEC54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CYieldChangeNumAndCheckU3Ed__19_System_Collections_IEnumerator_Reset_mDD6F79C21C39587A558A3FA55C03C56E3B653D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CYieldClearNumU3Ed__20_System_Collections_IEnumerator_Reset_m22A5AF829CE825C24983CD5BBB3DA86A7E210421_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77;
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF;
struct Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD;
struct NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____items_1)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__items_1() const { return ____items_1; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_StaticFields, ____emptyArray_5)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Hexagon>
struct List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46, ____items_1)); }
	inline HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* get__items_1() const { return ____items_1; }
	inline HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_StaticFields, ____emptyArray_5)); }
	inline HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(HexagonU5BU5D_t4C83FD706B4B3BD6679B850BB7926DFB281690CF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____items_1)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2Int>
struct List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD, ____items_1)); }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* get__items_1() const { return ____items_1; }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_StaticFields, ____emptyArray_5)); }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<NumberController/NumberState>
struct List_1_tB728C84B38500C9451A333E63EED455678C9A664  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NumberStateU5BU5D_tCDAD8C159140390B1474EF79CF470FBCA4BDF1FC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB728C84B38500C9451A333E63EED455678C9A664, ____items_1)); }
	inline NumberStateU5BU5D_tCDAD8C159140390B1474EF79CF470FBCA4BDF1FC* get__items_1() const { return ____items_1; }
	inline NumberStateU5BU5D_tCDAD8C159140390B1474EF79CF470FBCA4BDF1FC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NumberStateU5BU5D_tCDAD8C159140390B1474EF79CF470FBCA4BDF1FC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB728C84B38500C9451A333E63EED455678C9A664, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB728C84B38500C9451A333E63EED455678C9A664, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB728C84B38500C9451A333E63EED455678C9A664, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB728C84B38500C9451A333E63EED455678C9A664_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NumberStateU5BU5D_tCDAD8C159140390B1474EF79CF470FBCA4BDF1FC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB728C84B38500C9451A333E63EED455678C9A664_StaticFields, ____emptyArray_5)); }
	inline NumberStateU5BU5D_tCDAD8C159140390B1474EF79CF470FBCA4BDF1FC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NumberStateU5BU5D_tCDAD8C159140390B1474EF79CF470FBCA4BDF1FC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NumberStateU5BU5D_tCDAD8C159140390B1474EF79CF470FBCA4BDF1FC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// ButtonFucController/<SelectNum>d__23
struct U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9  : public RuntimeObject
{
public:
	// System.Int32 ButtonFucController/<SelectNum>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ButtonFucController/<SelectNum>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ButtonFucController ButtonFucController/<SelectNum>d__23::<>4__this
	ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9, ___U3CU3E4__this_2)); }
	inline ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Hexagon/<YieldChangeNumAndCheck>d__19
struct U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682  : public RuntimeObject
{
public:
	// System.Int32 Hexagon/<YieldChangeNumAndCheck>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Hexagon/<YieldChangeNumAndCheck>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Hexagon Hexagon/<YieldChangeNumAndCheck>d__19::<>4__this
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___U3CU3E4__this_2;
	// System.Int32 Hexagon/<YieldChangeNumAndCheck>d__19::num
	int32_t ___num_3;
	// Hexagon Hexagon/<YieldChangeNumAndCheck>d__19::NextCheckBox
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___NextCheckBox_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682, ___U3CU3E4__this_2)); }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_num_3() { return static_cast<int32_t>(offsetof(U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682, ___num_3)); }
	inline int32_t get_num_3() const { return ___num_3; }
	inline int32_t* get_address_of_num_3() { return &___num_3; }
	inline void set_num_3(int32_t value)
	{
		___num_3 = value;
	}

	inline static int32_t get_offset_of_NextCheckBox_4() { return static_cast<int32_t>(offsetof(U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682, ___NextCheckBox_4)); }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * get_NextCheckBox_4() const { return ___NextCheckBox_4; }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 ** get_address_of_NextCheckBox_4() { return &___NextCheckBox_4; }
	inline void set_NextCheckBox_4(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * value)
	{
		___NextCheckBox_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NextCheckBox_4), (void*)value);
	}
};


// Hexagon/<YieldClearNum>d__20
struct U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394  : public RuntimeObject
{
public:
	// System.Int32 Hexagon/<YieldClearNum>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Hexagon/<YieldClearNum>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Hexagon Hexagon/<YieldClearNum>d__20::<>4__this
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394, ___U3CU3E4__this_2)); }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// NumberController/NumberState
struct NumberState_tAB3BFBB9B6B5E708BC0BDE5FCD6BF6FD02F48FD8 
{
public:
	// System.Int32 NumberController/NumberState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberState_tAB3BFBB9B6B5E708BC0BDE5FCD6BF6FD02F48FD8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Audio.AudioMixerGroup
struct AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// GameSettingData
struct GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Single GameSettingData::initExp
	float ___initExp_4;
	// System.Single GameSettingData::expIncreaseRate
	float ___expIncreaseRate_5;
	// System.Single GameSettingData::OneConnectExp
	float ___OneConnectExp_6;
	// System.Int32 GameSettingData::OneConnectAward
	int32_t ___OneConnectAward_7;
	// System.Int32 GameSettingData::LevelUpAward
	int32_t ___LevelUpAward_8;
	// System.Int32 GameSettingData::AdsAward
	int32_t ___AdsAward_9;
	// System.Int32 GameSettingData::OneConnectScores
	int32_t ___OneConnectScores_10;
	// System.Int32 GameSettingData::LevelUpScores
	int32_t ___LevelUpScores_11;
	// System.Int32 GameSettingData::freshIncrease
	int32_t ___freshIncrease_12;
	// System.Int32 GameSettingData::NumConnectCheckAmount
	int32_t ___NumConnectCheckAmount_13;
	// System.Int32 GameSettingData::InitNeedFreshAward
	int32_t ___InitNeedFreshAward_14;
	// System.Int32 GameSettingData::InitNeedTransAward
	int32_t ___InitNeedTransAward_15;
	// System.Int32 GameSettingData::INitMaxOfRandomRange
	int32_t ___INitMaxOfRandomRange_16;
	// System.Int32 GameSettingData::INitMinOfRandomRange
	int32_t ___INitMinOfRandomRange_17;
	// System.Collections.Generic.List`1<UnityEngine.Color> GameSettingData::colors
	List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * ___colors_18;
	// System.String GameSettingData::GameModeGuides
	String_t* ___GameModeGuides_19;
	// System.String GameSettingData::Ads1Link
	String_t* ___Ads1Link_20;
	// System.String GameSettingData::Ads2Link
	String_t* ___Ads2Link_21;
	// System.String GameSettingData::LevelUpAdsLink
	String_t* ___LevelUpAdsLink_22;

public:
	inline static int32_t get_offset_of_initExp_4() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___initExp_4)); }
	inline float get_initExp_4() const { return ___initExp_4; }
	inline float* get_address_of_initExp_4() { return &___initExp_4; }
	inline void set_initExp_4(float value)
	{
		___initExp_4 = value;
	}

	inline static int32_t get_offset_of_expIncreaseRate_5() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___expIncreaseRate_5)); }
	inline float get_expIncreaseRate_5() const { return ___expIncreaseRate_5; }
	inline float* get_address_of_expIncreaseRate_5() { return &___expIncreaseRate_5; }
	inline void set_expIncreaseRate_5(float value)
	{
		___expIncreaseRate_5 = value;
	}

	inline static int32_t get_offset_of_OneConnectExp_6() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___OneConnectExp_6)); }
	inline float get_OneConnectExp_6() const { return ___OneConnectExp_6; }
	inline float* get_address_of_OneConnectExp_6() { return &___OneConnectExp_6; }
	inline void set_OneConnectExp_6(float value)
	{
		___OneConnectExp_6 = value;
	}

	inline static int32_t get_offset_of_OneConnectAward_7() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___OneConnectAward_7)); }
	inline int32_t get_OneConnectAward_7() const { return ___OneConnectAward_7; }
	inline int32_t* get_address_of_OneConnectAward_7() { return &___OneConnectAward_7; }
	inline void set_OneConnectAward_7(int32_t value)
	{
		___OneConnectAward_7 = value;
	}

	inline static int32_t get_offset_of_LevelUpAward_8() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___LevelUpAward_8)); }
	inline int32_t get_LevelUpAward_8() const { return ___LevelUpAward_8; }
	inline int32_t* get_address_of_LevelUpAward_8() { return &___LevelUpAward_8; }
	inline void set_LevelUpAward_8(int32_t value)
	{
		___LevelUpAward_8 = value;
	}

	inline static int32_t get_offset_of_AdsAward_9() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___AdsAward_9)); }
	inline int32_t get_AdsAward_9() const { return ___AdsAward_9; }
	inline int32_t* get_address_of_AdsAward_9() { return &___AdsAward_9; }
	inline void set_AdsAward_9(int32_t value)
	{
		___AdsAward_9 = value;
	}

	inline static int32_t get_offset_of_OneConnectScores_10() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___OneConnectScores_10)); }
	inline int32_t get_OneConnectScores_10() const { return ___OneConnectScores_10; }
	inline int32_t* get_address_of_OneConnectScores_10() { return &___OneConnectScores_10; }
	inline void set_OneConnectScores_10(int32_t value)
	{
		___OneConnectScores_10 = value;
	}

	inline static int32_t get_offset_of_LevelUpScores_11() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___LevelUpScores_11)); }
	inline int32_t get_LevelUpScores_11() const { return ___LevelUpScores_11; }
	inline int32_t* get_address_of_LevelUpScores_11() { return &___LevelUpScores_11; }
	inline void set_LevelUpScores_11(int32_t value)
	{
		___LevelUpScores_11 = value;
	}

	inline static int32_t get_offset_of_freshIncrease_12() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___freshIncrease_12)); }
	inline int32_t get_freshIncrease_12() const { return ___freshIncrease_12; }
	inline int32_t* get_address_of_freshIncrease_12() { return &___freshIncrease_12; }
	inline void set_freshIncrease_12(int32_t value)
	{
		___freshIncrease_12 = value;
	}

	inline static int32_t get_offset_of_NumConnectCheckAmount_13() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___NumConnectCheckAmount_13)); }
	inline int32_t get_NumConnectCheckAmount_13() const { return ___NumConnectCheckAmount_13; }
	inline int32_t* get_address_of_NumConnectCheckAmount_13() { return &___NumConnectCheckAmount_13; }
	inline void set_NumConnectCheckAmount_13(int32_t value)
	{
		___NumConnectCheckAmount_13 = value;
	}

	inline static int32_t get_offset_of_InitNeedFreshAward_14() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___InitNeedFreshAward_14)); }
	inline int32_t get_InitNeedFreshAward_14() const { return ___InitNeedFreshAward_14; }
	inline int32_t* get_address_of_InitNeedFreshAward_14() { return &___InitNeedFreshAward_14; }
	inline void set_InitNeedFreshAward_14(int32_t value)
	{
		___InitNeedFreshAward_14 = value;
	}

	inline static int32_t get_offset_of_InitNeedTransAward_15() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___InitNeedTransAward_15)); }
	inline int32_t get_InitNeedTransAward_15() const { return ___InitNeedTransAward_15; }
	inline int32_t* get_address_of_InitNeedTransAward_15() { return &___InitNeedTransAward_15; }
	inline void set_InitNeedTransAward_15(int32_t value)
	{
		___InitNeedTransAward_15 = value;
	}

	inline static int32_t get_offset_of_INitMaxOfRandomRange_16() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___INitMaxOfRandomRange_16)); }
	inline int32_t get_INitMaxOfRandomRange_16() const { return ___INitMaxOfRandomRange_16; }
	inline int32_t* get_address_of_INitMaxOfRandomRange_16() { return &___INitMaxOfRandomRange_16; }
	inline void set_INitMaxOfRandomRange_16(int32_t value)
	{
		___INitMaxOfRandomRange_16 = value;
	}

	inline static int32_t get_offset_of_INitMinOfRandomRange_17() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___INitMinOfRandomRange_17)); }
	inline int32_t get_INitMinOfRandomRange_17() const { return ___INitMinOfRandomRange_17; }
	inline int32_t* get_address_of_INitMinOfRandomRange_17() { return &___INitMinOfRandomRange_17; }
	inline void set_INitMinOfRandomRange_17(int32_t value)
	{
		___INitMinOfRandomRange_17 = value;
	}

	inline static int32_t get_offset_of_colors_18() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___colors_18)); }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * get_colors_18() const { return ___colors_18; }
	inline List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E ** get_address_of_colors_18() { return &___colors_18; }
	inline void set_colors_18(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * value)
	{
		___colors_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_18), (void*)value);
	}

	inline static int32_t get_offset_of_GameModeGuides_19() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___GameModeGuides_19)); }
	inline String_t* get_GameModeGuides_19() const { return ___GameModeGuides_19; }
	inline String_t** get_address_of_GameModeGuides_19() { return &___GameModeGuides_19; }
	inline void set_GameModeGuides_19(String_t* value)
	{
		___GameModeGuides_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameModeGuides_19), (void*)value);
	}

	inline static int32_t get_offset_of_Ads1Link_20() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___Ads1Link_20)); }
	inline String_t* get_Ads1Link_20() const { return ___Ads1Link_20; }
	inline String_t** get_address_of_Ads1Link_20() { return &___Ads1Link_20; }
	inline void set_Ads1Link_20(String_t* value)
	{
		___Ads1Link_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ads1Link_20), (void*)value);
	}

	inline static int32_t get_offset_of_Ads2Link_21() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___Ads2Link_21)); }
	inline String_t* get_Ads2Link_21() const { return ___Ads2Link_21; }
	inline String_t** get_address_of_Ads2Link_21() { return &___Ads2Link_21; }
	inline void set_Ads2Link_21(String_t* value)
	{
		___Ads2Link_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ads2Link_21), (void*)value);
	}

	inline static int32_t get_offset_of_LevelUpAdsLink_22() { return static_cast<int32_t>(offsetof(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F, ___LevelUpAdsLink_22)); }
	inline String_t* get_LevelUpAdsLink_22() const { return ___LevelUpAdsLink_22; }
	inline String_t** get_address_of_LevelUpAdsLink_22() { return &___LevelUpAdsLink_22; }
	inline void set_LevelUpAdsLink_22(String_t* value)
	{
		___LevelUpAdsLink_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelUpAdsLink_22), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UserData
struct UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32[][] UserData::arrPointData
	Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* ___arrPointData_4;
	// System.Int16[][] UserData::arrIndexToListIndex
	Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* ___arrIndexToListIndex_5;
	// System.Collections.Generic.List`1<System.Int32> UserData::ListData
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___ListData_6;
	// System.Int32 UserData::HighRecordScores
	int32_t ___HighRecordScores_7;
	// System.Int32 UserData::Awards
	int32_t ___Awards_8;
	// System.Int32 UserData::Scores
	int32_t ___Scores_9;
	// System.Int32 UserData::RefreshNeedAwards
	int32_t ___RefreshNeedAwards_10;
	// System.Int32 UserData::TransNeedAwards
	int32_t ___TransNeedAwards_11;
	// System.Int32 UserData::Level
	int32_t ___Level_12;
	// System.Single UserData::Exp
	float ___Exp_13;
	// System.Single UserData::NeedExp
	float ___NeedExp_14;
	// NumberController[] UserData::CurrentRandomGroup
	NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22* ___CurrentRandomGroup_15;

public:
	inline static int32_t get_offset_of_arrPointData_4() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___arrPointData_4)); }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* get_arrPointData_4() const { return ___arrPointData_4; }
	inline Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF** get_address_of_arrPointData_4() { return &___arrPointData_4; }
	inline void set_arrPointData_4(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* value)
	{
		___arrPointData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrPointData_4), (void*)value);
	}

	inline static int32_t get_offset_of_arrIndexToListIndex_5() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___arrIndexToListIndex_5)); }
	inline Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* get_arrIndexToListIndex_5() const { return ___arrIndexToListIndex_5; }
	inline Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77** get_address_of_arrIndexToListIndex_5() { return &___arrIndexToListIndex_5; }
	inline void set_arrIndexToListIndex_5(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* value)
	{
		___arrIndexToListIndex_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrIndexToListIndex_5), (void*)value);
	}

	inline static int32_t get_offset_of_ListData_6() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___ListData_6)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_ListData_6() const { return ___ListData_6; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_ListData_6() { return &___ListData_6; }
	inline void set_ListData_6(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___ListData_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ListData_6), (void*)value);
	}

	inline static int32_t get_offset_of_HighRecordScores_7() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___HighRecordScores_7)); }
	inline int32_t get_HighRecordScores_7() const { return ___HighRecordScores_7; }
	inline int32_t* get_address_of_HighRecordScores_7() { return &___HighRecordScores_7; }
	inline void set_HighRecordScores_7(int32_t value)
	{
		___HighRecordScores_7 = value;
	}

	inline static int32_t get_offset_of_Awards_8() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___Awards_8)); }
	inline int32_t get_Awards_8() const { return ___Awards_8; }
	inline int32_t* get_address_of_Awards_8() { return &___Awards_8; }
	inline void set_Awards_8(int32_t value)
	{
		___Awards_8 = value;
	}

	inline static int32_t get_offset_of_Scores_9() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___Scores_9)); }
	inline int32_t get_Scores_9() const { return ___Scores_9; }
	inline int32_t* get_address_of_Scores_9() { return &___Scores_9; }
	inline void set_Scores_9(int32_t value)
	{
		___Scores_9 = value;
	}

	inline static int32_t get_offset_of_RefreshNeedAwards_10() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___RefreshNeedAwards_10)); }
	inline int32_t get_RefreshNeedAwards_10() const { return ___RefreshNeedAwards_10; }
	inline int32_t* get_address_of_RefreshNeedAwards_10() { return &___RefreshNeedAwards_10; }
	inline void set_RefreshNeedAwards_10(int32_t value)
	{
		___RefreshNeedAwards_10 = value;
	}

	inline static int32_t get_offset_of_TransNeedAwards_11() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___TransNeedAwards_11)); }
	inline int32_t get_TransNeedAwards_11() const { return ___TransNeedAwards_11; }
	inline int32_t* get_address_of_TransNeedAwards_11() { return &___TransNeedAwards_11; }
	inline void set_TransNeedAwards_11(int32_t value)
	{
		___TransNeedAwards_11 = value;
	}

	inline static int32_t get_offset_of_Level_12() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___Level_12)); }
	inline int32_t get_Level_12() const { return ___Level_12; }
	inline int32_t* get_address_of_Level_12() { return &___Level_12; }
	inline void set_Level_12(int32_t value)
	{
		___Level_12 = value;
	}

	inline static int32_t get_offset_of_Exp_13() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___Exp_13)); }
	inline float get_Exp_13() const { return ___Exp_13; }
	inline float* get_address_of_Exp_13() { return &___Exp_13; }
	inline void set_Exp_13(float value)
	{
		___Exp_13 = value;
	}

	inline static int32_t get_offset_of_NeedExp_14() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___NeedExp_14)); }
	inline float get_NeedExp_14() const { return ___NeedExp_14; }
	inline float* get_address_of_NeedExp_14() { return &___NeedExp_14; }
	inline void set_NeedExp_14(float value)
	{
		___NeedExp_14 = value;
	}

	inline static int32_t get_offset_of_CurrentRandomGroup_15() { return static_cast<int32_t>(offsetof(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6, ___CurrentRandomGroup_15)); }
	inline NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22* get_CurrentRandomGroup_15() const { return ___CurrentRandomGroup_15; }
	inline NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22** get_address_of_CurrentRandomGroup_15() { return &___CurrentRandomGroup_15; }
	inline void set_CurrentRandomGroup_15(NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22* value)
	{
		___CurrentRandomGroup_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentRandomGroup_15), (void*)value);
	}
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.CanvasGroup
struct CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Singleton`1<AudioManager>
struct Singleton_1_t463884EE648275DEFF7CE265B168788375C102F8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_t463884EE648275DEFF7CE265B168788375C102F8_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_t463884EE648275DEFF7CE265B168788375C102F8_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<ButtonFucController>
struct Singleton_1_tEAE2001E1C7D5693BD6DE825E8EEE8AC7023D7C4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tEAE2001E1C7D5693BD6DE825E8EEE8AC7023D7C4_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_tEAE2001E1C7D5693BD6DE825E8EEE8AC7023D7C4_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<Draw>
struct Singleton_1_tDBCC9781F34942E75DAC8C05CD15527C17206EF2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tDBCC9781F34942E75DAC8C05CD15527C17206EF2_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_tDBCC9781F34942E75DAC8C05CD15527C17206EF2_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<Gamecontroller>
struct Singleton_1_tC2F5A0B4D469CD33E39AB10F37DD814CAFD4E539  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tC2F5A0B4D469CD33E39AB10F37DD814CAFD4E539_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_tC2F5A0B4D469CD33E39AB10F37DD814CAFD4E539_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<System.Object>
struct Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	RuntimeObject * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<RandomNumberController>
struct Singleton_1_t14D87CF5A19904D2378C84323FA404A0A6B1BEF5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_t14D87CF5A19904D2378C84323FA404A0A6B1BEF5_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_t14D87CF5A19904D2378C84323FA404A0A6B1BEF5_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// Singleton`1<UIController>
struct Singleton_1_t024D6FE05EE509D47C5116F452A2A51023F31F29  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct Singleton_1_t024D6FE05EE509D47C5116F452A2A51023F31F29_StaticFields
{
public:
	// T Singleton`1::<Instance>k__BackingField
	UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * ___U3CInstanceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Singleton_1_t024D6FE05EE509D47C5116F452A2A51023F31F29_StaticFields, ___U3CInstanceU3Ek__BackingField_4)); }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * get_U3CInstanceU3Ek__BackingField_4() const { return ___U3CInstanceU3Ek__BackingField_4; }
	inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 ** get_address_of_U3CInstanceU3Ek__BackingField_4() { return &___U3CInstanceU3Ek__BackingField_4; }
	inline void set_U3CInstanceU3Ek__BackingField_4(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * value)
	{
		___U3CInstanceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Hexagon
struct Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Hexagon::radius
	float ___radius_4;
	// System.Single Hexagon::borderWidth
	float ___borderWidth_5;
	// System.Single Hexagon::yieldTime
	float ___yieldTime_6;
	// UnityEngine.LineRenderer Hexagon::lineDraw
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___lineDraw_7;
	// System.Int32 Hexagon::borderNumber
	int32_t ___borderNumber_8;
	// System.Int32 Hexagon::Row
	int32_t ___Row_9;
	// System.Int32 Hexagon::Col
	int32_t ___Col_10;
	// System.Single Hexagon::angle
	float ___angle_11;
	// UnityEngine.Vector2 Hexagon::centerPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___centerPoint_12;
	// UnityEngine.UI.Text Hexagon::num1
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___num1_13;
	// UnityEngine.UI.Image Hexagon::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_14;
	// UnityEngine.Sprite Hexagon::boxSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___boxSprite_15;
	// UnityEngine.Sprite Hexagon::singleNumSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___singleNumSprite_16;
	// System.Boolean Hexagon::IsUsed
	bool ___IsUsed_17;

public:
	inline static int32_t get_offset_of_radius_4() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___radius_4)); }
	inline float get_radius_4() const { return ___radius_4; }
	inline float* get_address_of_radius_4() { return &___radius_4; }
	inline void set_radius_4(float value)
	{
		___radius_4 = value;
	}

	inline static int32_t get_offset_of_borderWidth_5() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___borderWidth_5)); }
	inline float get_borderWidth_5() const { return ___borderWidth_5; }
	inline float* get_address_of_borderWidth_5() { return &___borderWidth_5; }
	inline void set_borderWidth_5(float value)
	{
		___borderWidth_5 = value;
	}

	inline static int32_t get_offset_of_yieldTime_6() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___yieldTime_6)); }
	inline float get_yieldTime_6() const { return ___yieldTime_6; }
	inline float* get_address_of_yieldTime_6() { return &___yieldTime_6; }
	inline void set_yieldTime_6(float value)
	{
		___yieldTime_6 = value;
	}

	inline static int32_t get_offset_of_lineDraw_7() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___lineDraw_7)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_lineDraw_7() const { return ___lineDraw_7; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_lineDraw_7() { return &___lineDraw_7; }
	inline void set_lineDraw_7(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___lineDraw_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineDraw_7), (void*)value);
	}

	inline static int32_t get_offset_of_borderNumber_8() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___borderNumber_8)); }
	inline int32_t get_borderNumber_8() const { return ___borderNumber_8; }
	inline int32_t* get_address_of_borderNumber_8() { return &___borderNumber_8; }
	inline void set_borderNumber_8(int32_t value)
	{
		___borderNumber_8 = value;
	}

	inline static int32_t get_offset_of_Row_9() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___Row_9)); }
	inline int32_t get_Row_9() const { return ___Row_9; }
	inline int32_t* get_address_of_Row_9() { return &___Row_9; }
	inline void set_Row_9(int32_t value)
	{
		___Row_9 = value;
	}

	inline static int32_t get_offset_of_Col_10() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___Col_10)); }
	inline int32_t get_Col_10() const { return ___Col_10; }
	inline int32_t* get_address_of_Col_10() { return &___Col_10; }
	inline void set_Col_10(int32_t value)
	{
		___Col_10 = value;
	}

	inline static int32_t get_offset_of_angle_11() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___angle_11)); }
	inline float get_angle_11() const { return ___angle_11; }
	inline float* get_address_of_angle_11() { return &___angle_11; }
	inline void set_angle_11(float value)
	{
		___angle_11 = value;
	}

	inline static int32_t get_offset_of_centerPoint_12() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___centerPoint_12)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_centerPoint_12() const { return ___centerPoint_12; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_centerPoint_12() { return &___centerPoint_12; }
	inline void set_centerPoint_12(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___centerPoint_12 = value;
	}

	inline static int32_t get_offset_of_num1_13() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___num1_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_num1_13() const { return ___num1_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_num1_13() { return &___num1_13; }
	inline void set_num1_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___num1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___num1_13), (void*)value);
	}

	inline static int32_t get_offset_of_image_14() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___image_14)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_14() const { return ___image_14; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_14() { return &___image_14; }
	inline void set_image_14(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_14), (void*)value);
	}

	inline static int32_t get_offset_of_boxSprite_15() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___boxSprite_15)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_boxSprite_15() const { return ___boxSprite_15; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_boxSprite_15() { return &___boxSprite_15; }
	inline void set_boxSprite_15(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___boxSprite_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxSprite_15), (void*)value);
	}

	inline static int32_t get_offset_of_singleNumSprite_16() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___singleNumSprite_16)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_singleNumSprite_16() const { return ___singleNumSprite_16; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_singleNumSprite_16() { return &___singleNumSprite_16; }
	inline void set_singleNumSprite_16(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___singleNumSprite_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___singleNumSprite_16), (void*)value);
	}

	inline static int32_t get_offset_of_IsUsed_17() { return static_cast<int32_t>(offsetof(Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048, ___IsUsed_17)); }
	inline bool get_IsUsed_17() const { return ___IsUsed_17; }
	inline bool* get_address_of_IsUsed_17() { return &___IsUsed_17; }
	inline void set_IsUsed_17(bool value)
	{
		___IsUsed_17 = value;
	}
};


// IntroControl
struct IntroControl_t1A48A8F6D08FCEAC0BA5290FCC9BA766538374E3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// NumberController
struct NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 NumberController::number1
	int32_t ___number1_4;
	// System.Int32 NumberController::number2
	int32_t ___number2_5;
	// UnityEngine.UI.Text NumberController::Num1
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Num1_6;
	// UnityEngine.UI.Text NumberController::Num2
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Num2_7;
	// NumberController/NumberState NumberController::numberState
	int32_t ___numberState_8;
	// System.Boolean NumberController::isUsed
	bool ___isUsed_9;
	// UnityEngine.UI.Image NumberController::imageNum1
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___imageNum1_10;
	// UnityEngine.UI.Image NumberController::imageNum2
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___imageNum2_11;

public:
	inline static int32_t get_offset_of_number1_4() { return static_cast<int32_t>(offsetof(NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144, ___number1_4)); }
	inline int32_t get_number1_4() const { return ___number1_4; }
	inline int32_t* get_address_of_number1_4() { return &___number1_4; }
	inline void set_number1_4(int32_t value)
	{
		___number1_4 = value;
	}

	inline static int32_t get_offset_of_number2_5() { return static_cast<int32_t>(offsetof(NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144, ___number2_5)); }
	inline int32_t get_number2_5() const { return ___number2_5; }
	inline int32_t* get_address_of_number2_5() { return &___number2_5; }
	inline void set_number2_5(int32_t value)
	{
		___number2_5 = value;
	}

	inline static int32_t get_offset_of_Num1_6() { return static_cast<int32_t>(offsetof(NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144, ___Num1_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Num1_6() const { return ___Num1_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Num1_6() { return &___Num1_6; }
	inline void set_Num1_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Num1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Num1_6), (void*)value);
	}

	inline static int32_t get_offset_of_Num2_7() { return static_cast<int32_t>(offsetof(NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144, ___Num2_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Num2_7() const { return ___Num2_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Num2_7() { return &___Num2_7; }
	inline void set_Num2_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Num2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Num2_7), (void*)value);
	}

	inline static int32_t get_offset_of_numberState_8() { return static_cast<int32_t>(offsetof(NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144, ___numberState_8)); }
	inline int32_t get_numberState_8() const { return ___numberState_8; }
	inline int32_t* get_address_of_numberState_8() { return &___numberState_8; }
	inline void set_numberState_8(int32_t value)
	{
		___numberState_8 = value;
	}

	inline static int32_t get_offset_of_isUsed_9() { return static_cast<int32_t>(offsetof(NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144, ___isUsed_9)); }
	inline bool get_isUsed_9() const { return ___isUsed_9; }
	inline bool* get_address_of_isUsed_9() { return &___isUsed_9; }
	inline void set_isUsed_9(bool value)
	{
		___isUsed_9 = value;
	}

	inline static int32_t get_offset_of_imageNum1_10() { return static_cast<int32_t>(offsetof(NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144, ___imageNum1_10)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_imageNum1_10() const { return ___imageNum1_10; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_imageNum1_10() { return &___imageNum1_10; }
	inline void set_imageNum1_10(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___imageNum1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageNum1_10), (void*)value);
	}

	inline static int32_t get_offset_of_imageNum2_11() { return static_cast<int32_t>(offsetof(NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144, ___imageNum2_11)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_imageNum2_11() const { return ___imageNum2_11; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_imageNum2_11() { return &___imageNum2_11; }
	inline void set_imageNum2_11(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___imageNum2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageNum2_11), (void*)value);
	}
};


// ScrollController
struct ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 ScrollController::Oriposition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___Oriposition_4;
	// UnityEngine.Vector2 ScrollController::firstPositon
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___firstPositon_5;
	// UnityEngine.RectTransform ScrollController::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_6;
	// System.Single ScrollController::HalfWidth
	float ___HalfWidth_7;
	// System.Int32 ScrollController::LeftableCounts
	int32_t ___LeftableCounts_8;
	// System.Int32 ScrollController::RightableCounts
	int32_t ___RightableCounts_9;

public:
	inline static int32_t get_offset_of_Oriposition_4() { return static_cast<int32_t>(offsetof(ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA, ___Oriposition_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_Oriposition_4() const { return ___Oriposition_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_Oriposition_4() { return &___Oriposition_4; }
	inline void set_Oriposition_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___Oriposition_4 = value;
	}

	inline static int32_t get_offset_of_firstPositon_5() { return static_cast<int32_t>(offsetof(ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA, ___firstPositon_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_firstPositon_5() const { return ___firstPositon_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_firstPositon_5() { return &___firstPositon_5; }
	inline void set_firstPositon_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___firstPositon_5 = value;
	}

	inline static int32_t get_offset_of_rectTransform_6() { return static_cast<int32_t>(offsetof(ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA, ___rectTransform_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_6() const { return ___rectTransform_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_6() { return &___rectTransform_6; }
	inline void set_rectTransform_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_6), (void*)value);
	}

	inline static int32_t get_offset_of_HalfWidth_7() { return static_cast<int32_t>(offsetof(ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA, ___HalfWidth_7)); }
	inline float get_HalfWidth_7() const { return ___HalfWidth_7; }
	inline float* get_address_of_HalfWidth_7() { return &___HalfWidth_7; }
	inline void set_HalfWidth_7(float value)
	{
		___HalfWidth_7 = value;
	}

	inline static int32_t get_offset_of_LeftableCounts_8() { return static_cast<int32_t>(offsetof(ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA, ___LeftableCounts_8)); }
	inline int32_t get_LeftableCounts_8() const { return ___LeftableCounts_8; }
	inline int32_t* get_address_of_LeftableCounts_8() { return &___LeftableCounts_8; }
	inline void set_LeftableCounts_8(int32_t value)
	{
		___LeftableCounts_8 = value;
	}

	inline static int32_t get_offset_of_RightableCounts_9() { return static_cast<int32_t>(offsetof(ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA, ___RightableCounts_9)); }
	inline int32_t get_RightableCounts_9() const { return ___RightableCounts_9; }
	inline int32_t* get_address_of_RightableCounts_9() { return &___RightableCounts_9; }
	inline void set_RightableCounts_9(int32_t value)
	{
		___RightableCounts_9 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// itemOnDrag
struct itemOnDrag_t6BDD32F756C01808A739D32C9A3D94835712CAF1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform itemOnDrag::OriParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___OriParent_4;
	// UnityEngine.CanvasGroup itemOnDrag::canvasGroup
	CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * ___canvasGroup_5;
	// System.Int32 itemOnDrag::currentOnDragNum
	int32_t ___currentOnDragNum_6;

public:
	inline static int32_t get_offset_of_OriParent_4() { return static_cast<int32_t>(offsetof(itemOnDrag_t6BDD32F756C01808A739D32C9A3D94835712CAF1, ___OriParent_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_OriParent_4() const { return ___OriParent_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_OriParent_4() { return &___OriParent_4; }
	inline void set_OriParent_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___OriParent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriParent_4), (void*)value);
	}

	inline static int32_t get_offset_of_canvasGroup_5() { return static_cast<int32_t>(offsetof(itemOnDrag_t6BDD32F756C01808A739D32C9A3D94835712CAF1, ___canvasGroup_5)); }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * get_canvasGroup_5() const { return ___canvasGroup_5; }
	inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F ** get_address_of_canvasGroup_5() { return &___canvasGroup_5; }
	inline void set_canvasGroup_5(CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * value)
	{
		___canvasGroup_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvasGroup_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentOnDragNum_6() { return static_cast<int32_t>(offsetof(itemOnDrag_t6BDD32F756C01808A739D32C9A3D94835712CAF1, ___currentOnDragNum_6)); }
	inline int32_t get_currentOnDragNum_6() const { return ___currentOnDragNum_6; }
	inline int32_t* get_address_of_currentOnDragNum_6() { return &___currentOnDragNum_6; }
	inline void set_currentOnDragNum_6(int32_t value)
	{
		___currentOnDragNum_6 = value;
	}
};


// AudioManager
struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148  : public Singleton_1_t463884EE648275DEFF7CE265B168788375C102F8
{
public:
	// UnityEngine.AudioClip AudioManager::SwitchClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___SwitchClip_5;
	// UnityEngine.AudioClip AudioManager::DownClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___DownClip_6;
	// UnityEngine.AudioClip AudioManager::ConnectClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___ConnectClip_7;
	// UnityEngine.AudioSource AudioManager::BGMAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___BGMAudioSource_8;
	// UnityEngine.AudioSource AudioManager::SoundEffectsAudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___SoundEffectsAudioSource_9;
	// UnityEngine.Audio.AudioMixer AudioManager::mixer
	AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * ___mixer_10;

public:
	inline static int32_t get_offset_of_SwitchClip_5() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___SwitchClip_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_SwitchClip_5() const { return ___SwitchClip_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_SwitchClip_5() { return &___SwitchClip_5; }
	inline void set_SwitchClip_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___SwitchClip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SwitchClip_5), (void*)value);
	}

	inline static int32_t get_offset_of_DownClip_6() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___DownClip_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_DownClip_6() const { return ___DownClip_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_DownClip_6() { return &___DownClip_6; }
	inline void set_DownClip_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___DownClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DownClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectClip_7() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___ConnectClip_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_ConnectClip_7() const { return ___ConnectClip_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_ConnectClip_7() { return &___ConnectClip_7; }
	inline void set_ConnectClip_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___ConnectClip_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectClip_7), (void*)value);
	}

	inline static int32_t get_offset_of_BGMAudioSource_8() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___BGMAudioSource_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_BGMAudioSource_8() const { return ___BGMAudioSource_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_BGMAudioSource_8() { return &___BGMAudioSource_8; }
	inline void set_BGMAudioSource_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___BGMAudioSource_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BGMAudioSource_8), (void*)value);
	}

	inline static int32_t get_offset_of_SoundEffectsAudioSource_9() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___SoundEffectsAudioSource_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_SoundEffectsAudioSource_9() const { return ___SoundEffectsAudioSource_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_SoundEffectsAudioSource_9() { return &___SoundEffectsAudioSource_9; }
	inline void set_SoundEffectsAudioSource_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___SoundEffectsAudioSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundEffectsAudioSource_9), (void*)value);
	}

	inline static int32_t get_offset_of_mixer_10() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___mixer_10)); }
	inline AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * get_mixer_10() const { return ___mixer_10; }
	inline AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 ** get_address_of_mixer_10() { return &___mixer_10; }
	inline void set_mixer_10(AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * value)
	{
		___mixer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixer_10), (void*)value);
	}
};


// ButtonFucController
struct ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89  : public Singleton_1_tEAE2001E1C7D5693BD6DE825E8EEE8AC7023D7C4
{
public:
	// UnityEngine.UI.Button ButtonFucController::CancelTrans
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___CancelTrans_5;
	// UnityEngine.UI.Button ButtonFucController::GuidanceCloseButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___GuidanceCloseButton_6;
	// UnityEngine.UI.Text ButtonFucController::FinalScores
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___FinalScores_7;
	// UnityEngine.UI.Text ButtonFucController::FinalAwards
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___FinalAwards_8;
	// UnityEngine.GameObject ButtonFucController::TransTints
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TransTints_9;
	// UnityEngine.GameObject ButtonFucController::GameOverMask
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOverMask_10;
	// UnityEngine.GameObject ButtonFucController::ThreeGuidance
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ThreeGuidance_11;
	// UnityEngine.GameObject ButtonFucController::PausePage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PausePage_12;
	// UnityEngine.GameObject ButtonFucController::GameOverPage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOverPage_13;
	// UnityEngine.GameObject ButtonFucController::LevelUpPage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LevelUpPage_14;
	// UnityEngine.GameObject ButtonFucController::RevivePage
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___RevivePage_15;
	// UnityEngine.GameObject ButtonFucController::TransMask
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TransMask_16;
	// UnityEngine.GameObject ButtonFucController::Ads2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ads2_17;
	// UnityEngine.UI.Button ButtonFucController::RefreshBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___RefreshBtn_18;
	// UnityEngine.UI.Button ButtonFucController::TransBtn
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___TransBtn_19;
	// UnityEngine.UI.Button ButtonFucController::PauseButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___PauseButton_20;
	// UnityEngine.UI.Button ButtonFucController::GuidanceButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___GuidanceButton_21;

public:
	inline static int32_t get_offset_of_CancelTrans_5() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___CancelTrans_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_CancelTrans_5() const { return ___CancelTrans_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_CancelTrans_5() { return &___CancelTrans_5; }
	inline void set_CancelTrans_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___CancelTrans_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CancelTrans_5), (void*)value);
	}

	inline static int32_t get_offset_of_GuidanceCloseButton_6() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___GuidanceCloseButton_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_GuidanceCloseButton_6() const { return ___GuidanceCloseButton_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_GuidanceCloseButton_6() { return &___GuidanceCloseButton_6; }
	inline void set_GuidanceCloseButton_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___GuidanceCloseButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidanceCloseButton_6), (void*)value);
	}

	inline static int32_t get_offset_of_FinalScores_7() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___FinalScores_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_FinalScores_7() const { return ___FinalScores_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_FinalScores_7() { return &___FinalScores_7; }
	inline void set_FinalScores_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___FinalScores_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FinalScores_7), (void*)value);
	}

	inline static int32_t get_offset_of_FinalAwards_8() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___FinalAwards_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_FinalAwards_8() const { return ___FinalAwards_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_FinalAwards_8() { return &___FinalAwards_8; }
	inline void set_FinalAwards_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___FinalAwards_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FinalAwards_8), (void*)value);
	}

	inline static int32_t get_offset_of_TransTints_9() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___TransTints_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TransTints_9() const { return ___TransTints_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TransTints_9() { return &___TransTints_9; }
	inline void set_TransTints_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TransTints_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TransTints_9), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverMask_10() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___GameOverMask_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOverMask_10() const { return ___GameOverMask_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOverMask_10() { return &___GameOverMask_10; }
	inline void set_GameOverMask_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOverMask_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverMask_10), (void*)value);
	}

	inline static int32_t get_offset_of_ThreeGuidance_11() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___ThreeGuidance_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ThreeGuidance_11() const { return ___ThreeGuidance_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ThreeGuidance_11() { return &___ThreeGuidance_11; }
	inline void set_ThreeGuidance_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ThreeGuidance_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ThreeGuidance_11), (void*)value);
	}

	inline static int32_t get_offset_of_PausePage_12() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___PausePage_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PausePage_12() const { return ___PausePage_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PausePage_12() { return &___PausePage_12; }
	inline void set_PausePage_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PausePage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PausePage_12), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverPage_13() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___GameOverPage_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOverPage_13() const { return ___GameOverPage_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOverPage_13() { return &___GameOverPage_13; }
	inline void set_GameOverPage_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOverPage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverPage_13), (void*)value);
	}

	inline static int32_t get_offset_of_LevelUpPage_14() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___LevelUpPage_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LevelUpPage_14() const { return ___LevelUpPage_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LevelUpPage_14() { return &___LevelUpPage_14; }
	inline void set_LevelUpPage_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LevelUpPage_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelUpPage_14), (void*)value);
	}

	inline static int32_t get_offset_of_RevivePage_15() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___RevivePage_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_RevivePage_15() const { return ___RevivePage_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_RevivePage_15() { return &___RevivePage_15; }
	inline void set_RevivePage_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___RevivePage_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RevivePage_15), (void*)value);
	}

	inline static int32_t get_offset_of_TransMask_16() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___TransMask_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TransMask_16() const { return ___TransMask_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TransMask_16() { return &___TransMask_16; }
	inline void set_TransMask_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TransMask_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TransMask_16), (void*)value);
	}

	inline static int32_t get_offset_of_Ads2_17() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___Ads2_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ads2_17() const { return ___Ads2_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ads2_17() { return &___Ads2_17; }
	inline void set_Ads2_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ads2_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ads2_17), (void*)value);
	}

	inline static int32_t get_offset_of_RefreshBtn_18() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___RefreshBtn_18)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_RefreshBtn_18() const { return ___RefreshBtn_18; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_RefreshBtn_18() { return &___RefreshBtn_18; }
	inline void set_RefreshBtn_18(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___RefreshBtn_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RefreshBtn_18), (void*)value);
	}

	inline static int32_t get_offset_of_TransBtn_19() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___TransBtn_19)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_TransBtn_19() const { return ___TransBtn_19; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_TransBtn_19() { return &___TransBtn_19; }
	inline void set_TransBtn_19(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___TransBtn_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TransBtn_19), (void*)value);
	}

	inline static int32_t get_offset_of_PauseButton_20() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___PauseButton_20)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_PauseButton_20() const { return ___PauseButton_20; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_PauseButton_20() { return &___PauseButton_20; }
	inline void set_PauseButton_20(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___PauseButton_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PauseButton_20), (void*)value);
	}

	inline static int32_t get_offset_of_GuidanceButton_21() { return static_cast<int32_t>(offsetof(ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89, ___GuidanceButton_21)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_GuidanceButton_21() const { return ___GuidanceButton_21; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_GuidanceButton_21() { return &___GuidanceButton_21; }
	inline void set_GuidanceButton_21(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___GuidanceButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidanceButton_21), (void*)value);
	}
};


// Draw
struct Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7  : public Singleton_1_tDBCC9781F34942E75DAC8C05CD15527C17206EF2
{
public:
	// UnityEngine.GameObject Draw::boxPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___boxPrefab_5;
	// System.Single Draw::leftRightGap
	float ___leftRightGap_6;
	// System.Single Draw::UpAndDownGap
	float ___UpAndDownGap_7;
	// UnityEngine.Vector2 Draw::beginPoint
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___beginPoint_8;
	// UnityEngine.Vector2[][] Draw::arrPoint
	Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* ___arrPoint_9;
	// System.Single Draw::beginGap
	float ___beginGap_10;
	// System.Single Draw::Diam
	float ___Diam_11;
	// System.Single Draw::UpAndDownDiam
	float ___UpAndDownDiam_12;

public:
	inline static int32_t get_offset_of_boxPrefab_5() { return static_cast<int32_t>(offsetof(Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7, ___boxPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_boxPrefab_5() const { return ___boxPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_boxPrefab_5() { return &___boxPrefab_5; }
	inline void set_boxPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___boxPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_leftRightGap_6() { return static_cast<int32_t>(offsetof(Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7, ___leftRightGap_6)); }
	inline float get_leftRightGap_6() const { return ___leftRightGap_6; }
	inline float* get_address_of_leftRightGap_6() { return &___leftRightGap_6; }
	inline void set_leftRightGap_6(float value)
	{
		___leftRightGap_6 = value;
	}

	inline static int32_t get_offset_of_UpAndDownGap_7() { return static_cast<int32_t>(offsetof(Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7, ___UpAndDownGap_7)); }
	inline float get_UpAndDownGap_7() const { return ___UpAndDownGap_7; }
	inline float* get_address_of_UpAndDownGap_7() { return &___UpAndDownGap_7; }
	inline void set_UpAndDownGap_7(float value)
	{
		___UpAndDownGap_7 = value;
	}

	inline static int32_t get_offset_of_beginPoint_8() { return static_cast<int32_t>(offsetof(Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7, ___beginPoint_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_beginPoint_8() const { return ___beginPoint_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_beginPoint_8() { return &___beginPoint_8; }
	inline void set_beginPoint_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___beginPoint_8 = value;
	}

	inline static int32_t get_offset_of_arrPoint_9() { return static_cast<int32_t>(offsetof(Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7, ___arrPoint_9)); }
	inline Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* get_arrPoint_9() const { return ___arrPoint_9; }
	inline Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD** get_address_of_arrPoint_9() { return &___arrPoint_9; }
	inline void set_arrPoint_9(Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* value)
	{
		___arrPoint_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrPoint_9), (void*)value);
	}

	inline static int32_t get_offset_of_beginGap_10() { return static_cast<int32_t>(offsetof(Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7, ___beginGap_10)); }
	inline float get_beginGap_10() const { return ___beginGap_10; }
	inline float* get_address_of_beginGap_10() { return &___beginGap_10; }
	inline void set_beginGap_10(float value)
	{
		___beginGap_10 = value;
	}

	inline static int32_t get_offset_of_Diam_11() { return static_cast<int32_t>(offsetof(Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7, ___Diam_11)); }
	inline float get_Diam_11() const { return ___Diam_11; }
	inline float* get_address_of_Diam_11() { return &___Diam_11; }
	inline void set_Diam_11(float value)
	{
		___Diam_11 = value;
	}

	inline static int32_t get_offset_of_UpAndDownDiam_12() { return static_cast<int32_t>(offsetof(Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7, ___UpAndDownDiam_12)); }
	inline float get_UpAndDownDiam_12() const { return ___UpAndDownDiam_12; }
	inline float* get_address_of_UpAndDownDiam_12() { return &___UpAndDownDiam_12; }
	inline void set_UpAndDownDiam_12(float value)
	{
		___UpAndDownDiam_12 = value;
	}
};


// Gamecontroller
struct Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237  : public Singleton_1_tC2F5A0B4D469CD33E39AB10F37DD814CAFD4E539
{
public:
	// GameSettingData Gamecontroller::settingData
	GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * ___settingData_5;
	// UserData Gamecontroller::userDataTemplate
	UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * ___userDataTemplate_6;
	// UserData Gamecontroller::userData
	UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * ___userData_7;
	// System.Boolean Gamecontroller::IsExistLeftUpInMap
	bool ___IsExistLeftUpInMap_8;
	// System.Boolean Gamecontroller::IsExistRightUpInMap
	bool ___IsExistRightUpInMap_9;
	// System.Boolean Gamecontroller::IsExistMidTwoInMap
	bool ___IsExistMidTwoInMap_10;
	// System.Boolean Gamecontroller::IsExistSingleInMap
	bool ___IsExistSingleInMap_11;
	// System.Int32 Gamecontroller::continuousNumConnectCounts
	int32_t ___continuousNumConnectCounts_12;
	// System.Int32 Gamecontroller::currentMin
	int32_t ___currentMin_13;
	// System.Int32 Gamecontroller::currentMax
	int32_t ___currentMax_14;
	// System.Int32 Gamecontroller::randomCounts
	int32_t ___randomCounts_15;
	// System.Int32 Gamecontroller::transCounts
	int32_t ___transCounts_16;
	// System.Int32 Gamecontroller::height
	int32_t ___height_17;
	// System.Int32 Gamecontroller::width
	int32_t ___width_18;

public:
	inline static int32_t get_offset_of_settingData_5() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___settingData_5)); }
	inline GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * get_settingData_5() const { return ___settingData_5; }
	inline GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F ** get_address_of_settingData_5() { return &___settingData_5; }
	inline void set_settingData_5(GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * value)
	{
		___settingData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingData_5), (void*)value);
	}

	inline static int32_t get_offset_of_userDataTemplate_6() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___userDataTemplate_6)); }
	inline UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * get_userDataTemplate_6() const { return ___userDataTemplate_6; }
	inline UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 ** get_address_of_userDataTemplate_6() { return &___userDataTemplate_6; }
	inline void set_userDataTemplate_6(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * value)
	{
		___userDataTemplate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userDataTemplate_6), (void*)value);
	}

	inline static int32_t get_offset_of_userData_7() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___userData_7)); }
	inline UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * get_userData_7() const { return ___userData_7; }
	inline UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 ** get_address_of_userData_7() { return &___userData_7; }
	inline void set_userData_7(UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * value)
	{
		___userData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userData_7), (void*)value);
	}

	inline static int32_t get_offset_of_IsExistLeftUpInMap_8() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___IsExistLeftUpInMap_8)); }
	inline bool get_IsExistLeftUpInMap_8() const { return ___IsExistLeftUpInMap_8; }
	inline bool* get_address_of_IsExistLeftUpInMap_8() { return &___IsExistLeftUpInMap_8; }
	inline void set_IsExistLeftUpInMap_8(bool value)
	{
		___IsExistLeftUpInMap_8 = value;
	}

	inline static int32_t get_offset_of_IsExistRightUpInMap_9() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___IsExistRightUpInMap_9)); }
	inline bool get_IsExistRightUpInMap_9() const { return ___IsExistRightUpInMap_9; }
	inline bool* get_address_of_IsExistRightUpInMap_9() { return &___IsExistRightUpInMap_9; }
	inline void set_IsExistRightUpInMap_9(bool value)
	{
		___IsExistRightUpInMap_9 = value;
	}

	inline static int32_t get_offset_of_IsExistMidTwoInMap_10() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___IsExistMidTwoInMap_10)); }
	inline bool get_IsExistMidTwoInMap_10() const { return ___IsExistMidTwoInMap_10; }
	inline bool* get_address_of_IsExistMidTwoInMap_10() { return &___IsExistMidTwoInMap_10; }
	inline void set_IsExistMidTwoInMap_10(bool value)
	{
		___IsExistMidTwoInMap_10 = value;
	}

	inline static int32_t get_offset_of_IsExistSingleInMap_11() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___IsExistSingleInMap_11)); }
	inline bool get_IsExistSingleInMap_11() const { return ___IsExistSingleInMap_11; }
	inline bool* get_address_of_IsExistSingleInMap_11() { return &___IsExistSingleInMap_11; }
	inline void set_IsExistSingleInMap_11(bool value)
	{
		___IsExistSingleInMap_11 = value;
	}

	inline static int32_t get_offset_of_continuousNumConnectCounts_12() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___continuousNumConnectCounts_12)); }
	inline int32_t get_continuousNumConnectCounts_12() const { return ___continuousNumConnectCounts_12; }
	inline int32_t* get_address_of_continuousNumConnectCounts_12() { return &___continuousNumConnectCounts_12; }
	inline void set_continuousNumConnectCounts_12(int32_t value)
	{
		___continuousNumConnectCounts_12 = value;
	}

	inline static int32_t get_offset_of_currentMin_13() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___currentMin_13)); }
	inline int32_t get_currentMin_13() const { return ___currentMin_13; }
	inline int32_t* get_address_of_currentMin_13() { return &___currentMin_13; }
	inline void set_currentMin_13(int32_t value)
	{
		___currentMin_13 = value;
	}

	inline static int32_t get_offset_of_currentMax_14() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___currentMax_14)); }
	inline int32_t get_currentMax_14() const { return ___currentMax_14; }
	inline int32_t* get_address_of_currentMax_14() { return &___currentMax_14; }
	inline void set_currentMax_14(int32_t value)
	{
		___currentMax_14 = value;
	}

	inline static int32_t get_offset_of_randomCounts_15() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___randomCounts_15)); }
	inline int32_t get_randomCounts_15() const { return ___randomCounts_15; }
	inline int32_t* get_address_of_randomCounts_15() { return &___randomCounts_15; }
	inline void set_randomCounts_15(int32_t value)
	{
		___randomCounts_15 = value;
	}

	inline static int32_t get_offset_of_transCounts_16() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___transCounts_16)); }
	inline int32_t get_transCounts_16() const { return ___transCounts_16; }
	inline int32_t* get_address_of_transCounts_16() { return &___transCounts_16; }
	inline void set_transCounts_16(int32_t value)
	{
		___transCounts_16 = value;
	}

	inline static int32_t get_offset_of_height_17() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___height_17)); }
	inline int32_t get_height_17() const { return ___height_17; }
	inline int32_t* get_address_of_height_17() { return &___height_17; }
	inline void set_height_17(int32_t value)
	{
		___height_17 = value;
	}

	inline static int32_t get_offset_of_width_18() { return static_cast<int32_t>(offsetof(Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237, ___width_18)); }
	inline int32_t get_width_18() const { return ___width_18; }
	inline int32_t* get_address_of_width_18() { return &___width_18; }
	inline void set_width_18(int32_t value)
	{
		___width_18 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// RandomNumberController
struct RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB  : public Singleton_1_t14D87CF5A19904D2378C84323FA404A0A6B1BEF5
{
public:
	// UnityEngine.GameObject RandomNumberController::Single
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Single_5;
	// UnityEngine.GameObject RandomNumberController::Left_UP
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Left_UP_6;
	// UnityEngine.GameObject RandomNumberController::Mid_Two
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Mid_Two_7;
	// UnityEngine.GameObject RandomNumberController::Right_Up
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Right_Up_8;
	// System.Int32 RandomNumberController::minOfRandomRange
	int32_t ___minOfRandomRange_9;
	// System.Int32 RandomNumberController::maxOfRandomRange
	int32_t ___maxOfRandomRange_10;
	// NumberController RandomNumberController::Template
	NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * ___Template_11;
	// UnityEngine.Transform[] RandomNumberController::Point
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___Point_12;
	// System.Collections.Generic.List`1<NumberController/NumberState> RandomNumberController::states
	List_1_tB728C84B38500C9451A333E63EED455678C9A664 * ___states_13;

public:
	inline static int32_t get_offset_of_Single_5() { return static_cast<int32_t>(offsetof(RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB, ___Single_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Single_5() const { return ___Single_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Single_5() { return &___Single_5; }
	inline void set_Single_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Single_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Single_5), (void*)value);
	}

	inline static int32_t get_offset_of_Left_UP_6() { return static_cast<int32_t>(offsetof(RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB, ___Left_UP_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Left_UP_6() const { return ___Left_UP_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Left_UP_6() { return &___Left_UP_6; }
	inline void set_Left_UP_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Left_UP_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Left_UP_6), (void*)value);
	}

	inline static int32_t get_offset_of_Mid_Two_7() { return static_cast<int32_t>(offsetof(RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB, ___Mid_Two_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Mid_Two_7() const { return ___Mid_Two_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Mid_Two_7() { return &___Mid_Two_7; }
	inline void set_Mid_Two_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Mid_Two_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Mid_Two_7), (void*)value);
	}

	inline static int32_t get_offset_of_Right_Up_8() { return static_cast<int32_t>(offsetof(RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB, ___Right_Up_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Right_Up_8() const { return ___Right_Up_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Right_Up_8() { return &___Right_Up_8; }
	inline void set_Right_Up_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Right_Up_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Right_Up_8), (void*)value);
	}

	inline static int32_t get_offset_of_minOfRandomRange_9() { return static_cast<int32_t>(offsetof(RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB, ___minOfRandomRange_9)); }
	inline int32_t get_minOfRandomRange_9() const { return ___minOfRandomRange_9; }
	inline int32_t* get_address_of_minOfRandomRange_9() { return &___minOfRandomRange_9; }
	inline void set_minOfRandomRange_9(int32_t value)
	{
		___minOfRandomRange_9 = value;
	}

	inline static int32_t get_offset_of_maxOfRandomRange_10() { return static_cast<int32_t>(offsetof(RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB, ___maxOfRandomRange_10)); }
	inline int32_t get_maxOfRandomRange_10() const { return ___maxOfRandomRange_10; }
	inline int32_t* get_address_of_maxOfRandomRange_10() { return &___maxOfRandomRange_10; }
	inline void set_maxOfRandomRange_10(int32_t value)
	{
		___maxOfRandomRange_10 = value;
	}

	inline static int32_t get_offset_of_Template_11() { return static_cast<int32_t>(offsetof(RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB, ___Template_11)); }
	inline NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * get_Template_11() const { return ___Template_11; }
	inline NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 ** get_address_of_Template_11() { return &___Template_11; }
	inline void set_Template_11(NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * value)
	{
		___Template_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Template_11), (void*)value);
	}

	inline static int32_t get_offset_of_Point_12() { return static_cast<int32_t>(offsetof(RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB, ___Point_12)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_Point_12() const { return ___Point_12; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_Point_12() { return &___Point_12; }
	inline void set_Point_12(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___Point_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Point_12), (void*)value);
	}

	inline static int32_t get_offset_of_states_13() { return static_cast<int32_t>(offsetof(RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB, ___states_13)); }
	inline List_1_tB728C84B38500C9451A333E63EED455678C9A664 * get_states_13() const { return ___states_13; }
	inline List_1_tB728C84B38500C9451A333E63EED455678C9A664 ** get_address_of_states_13() { return &___states_13; }
	inline void set_states_13(List_1_tB728C84B38500C9451A333E63EED455678C9A664 * value)
	{
		___states_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___states_13), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UIController
struct UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182  : public Singleton_1_t024D6FE05EE509D47C5116F452A2A51023F31F29
{
public:
	// UnityEngine.UI.Text UIController::currentLevel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentLevel_5;
	// UnityEngine.UI.Text UIController::nextLevel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nextLevel_6;
	// UnityEngine.UI.Text UIController::currentScores
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentScores_7;
	// UnityEngine.UI.Text UIController::HistoryScoresRecord
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___HistoryScoresRecord_8;
	// UnityEngine.UI.Text UIController::currentTargetNumber
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentTargetNumber_9;
	// UnityEngine.UI.Text UIController::currentAwards
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentAwards_10;
	// UnityEngine.UI.Text UIController::FreshPaidAward
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___FreshPaidAward_11;
	// UnityEngine.UI.Text UIController::TransPaidAward
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TransPaidAward_12;
	// UnityEngine.UI.Image UIController::ExpBar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___ExpBar_13;

public:
	inline static int32_t get_offset_of_currentLevel_5() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___currentLevel_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentLevel_5() const { return ___currentLevel_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentLevel_5() { return &___currentLevel_5; }
	inline void set_currentLevel_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentLevel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentLevel_5), (void*)value);
	}

	inline static int32_t get_offset_of_nextLevel_6() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___nextLevel_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nextLevel_6() const { return ___nextLevel_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nextLevel_6() { return &___nextLevel_6; }
	inline void set_nextLevel_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nextLevel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextLevel_6), (void*)value);
	}

	inline static int32_t get_offset_of_currentScores_7() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___currentScores_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentScores_7() const { return ___currentScores_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentScores_7() { return &___currentScores_7; }
	inline void set_currentScores_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentScores_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentScores_7), (void*)value);
	}

	inline static int32_t get_offset_of_HistoryScoresRecord_8() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___HistoryScoresRecord_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_HistoryScoresRecord_8() const { return ___HistoryScoresRecord_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_HistoryScoresRecord_8() { return &___HistoryScoresRecord_8; }
	inline void set_HistoryScoresRecord_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___HistoryScoresRecord_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HistoryScoresRecord_8), (void*)value);
	}

	inline static int32_t get_offset_of_currentTargetNumber_9() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___currentTargetNumber_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentTargetNumber_9() const { return ___currentTargetNumber_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentTargetNumber_9() { return &___currentTargetNumber_9; }
	inline void set_currentTargetNumber_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentTargetNumber_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTargetNumber_9), (void*)value);
	}

	inline static int32_t get_offset_of_currentAwards_10() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___currentAwards_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentAwards_10() const { return ___currentAwards_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentAwards_10() { return &___currentAwards_10; }
	inline void set_currentAwards_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentAwards_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentAwards_10), (void*)value);
	}

	inline static int32_t get_offset_of_FreshPaidAward_11() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___FreshPaidAward_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_FreshPaidAward_11() const { return ___FreshPaidAward_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_FreshPaidAward_11() { return &___FreshPaidAward_11; }
	inline void set_FreshPaidAward_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___FreshPaidAward_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FreshPaidAward_11), (void*)value);
	}

	inline static int32_t get_offset_of_TransPaidAward_12() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___TransPaidAward_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TransPaidAward_12() const { return ___TransPaidAward_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TransPaidAward_12() { return &___TransPaidAward_12; }
	inline void set_TransPaidAward_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TransPaidAward_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TransPaidAward_12), (void*)value);
	}

	inline static int32_t get_offset_of_ExpBar_13() { return static_cast<int32_t>(offsetof(UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182, ___ExpBar_13)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_ExpBar_13() const { return ___ExpBar_13; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_ExpBar_13() { return &___ExpBar_13; }
	inline void set_ExpBar_13(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___ExpBar_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpBar_13), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[][]
struct Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* m_Items[1];

public:
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* m_Items[1];

public:
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[][]
struct Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* m_Items[1];

public:
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// NumberController[]
struct NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * m_Items[1];

public:
	inline NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2Int[]
struct Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  m_Items[1];

public:
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};


// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared (Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// T Singleton`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_gshared (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item0, const RuntimeMethod* method);
// System.Void Singleton`1<System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1_Awake_m78FFC036233E850C3C33F55CD1513E965D0D6037_gshared (Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_gshared (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_gshared_inline (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE7CAD0A0114E2ABE951778EECF36B786DE521A24_gshared_inline (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32Enum>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32Enum>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_gshared (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1FB5B92E6491926F79FFC4A98B95B3AB580D2BA5_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInParent_TisRuntimeObject_m1CAE1DA88E1147164A44737BD03D5CB12DC73673_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32Enum>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m33506664531C256A7C5EE365E9E994AF9289F43A_gshared (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___item0, const RuntimeMethod* method);

// UnityEngine.Audio.AudioMixerGroup UnityEngine.AudioSource::get_outputAudioMixerGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * AudioSource_get_outputAudioMixerGroup_mBB5231BEBD764B7D5AB5225470B8AC6423B18A5D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.Audio.AudioMixer UnityEngine.Audio.AudioMixerGroup::get_audioMixer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * AudioMixerGroup_get_audioMixer_mDB232CE003BDC95A3966A4A8547037550561F58A (AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE (AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void Singleton`1<AudioManager>::.ctor()
inline void Singleton_1__ctor_m8684452EF28D2585F6120C9831F115879F632625 (Singleton_1_t463884EE648275DEFF7CE265B168788375C102F8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t463884EE648275DEFF7CE265B168788375C102F8 *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// T Singleton`1<Gamecontroller>::get_Instance()
inline Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline (const RuntimeMethod* method)
{
	return ((  Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void ButtonFucController::CheckAward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_CheckAward_mCF05DF935421B5350A76C4B14055FE8FC3D1A194 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method);
// System.Void ButtonFucController::CheckScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_CheckScores_mB0AA46C2F824608937F084A6074B02354AF2D99C (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ButtonFucController::TintsClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_TintsClose_m3C37FC722233C1F96BF418738CB78EA63C61BA24 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method);
// T Singleton`1<RandomNumberController>::get_Instance()
inline RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_inline (const RuntimeMethod* method)
{
	return ((  RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// T Singleton`1<UIController>::get_Instance()
inline UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_inline (const RuntimeMethod* method)
{
	return ((  UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// System.Void UIController::SetFreshPaid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetFreshPaid_m4DA5263652CE4A0C3071BDE3A50037054BD2A9CB (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___needAwards0, const RuntimeMethod* method);
// System.Collections.IEnumerator ButtonFucController::SelectNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonFucController_SelectNum_m2056B9F1D34639876C5D2A66A229628BB58299B5 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void ButtonFucController/<SelectNum>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectNumU3Ed__23__ctor_m8369E6770757E1E6E979428B2F53B76D8C20FF37 (U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Handheld::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handheld_Vibrate_m521B854160443BEBA8D2D3BE63641000E1DAA82E (const RuntimeMethod* method);
// System.Void Singleton`1<ButtonFucController>::.ctor()
inline void Singleton_1__ctor_m4AEDFE335BBB1F0E4B9FE38C55B04A4B9A03AACB (Singleton_1_tEAE2001E1C7D5693BD6DE825E8EEE8AC7023D7C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tEAE2001E1C7D5693BD6DE825E8EEE8AC7023D7C4 *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// System.Void Draw::NewMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draw_NewMap_m79625DA1B0F711ED568F37B4C89308F76E7E6FA1 (Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void Draw::InitData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draw_InitData_m1D6957F834586F8A7F50ADD3A9AC47B00BE0A523 (Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * __this, const RuntimeMethod* method);
// System.Void Draw::ClearMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draw_ClearMap_mCFF8D804E8807B39FCC39017E1A9123BDE81348B (Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * __this, const RuntimeMethod* method);
// System.Void Draw::DrawMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draw_DrawMap_m17494146A606B0C469AFAC0CC9D11B20B9EFD19F (Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Hexagon>()
inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Singleton`1<Draw>::.ctor()
inline void Singleton_1__ctor_m17F5D815769AB282789095F7F7380EC95EEF84C4 (Singleton_1_tDBCC9781F34942E75DAC8C05CD15527C17206EF2 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tDBCC9781F34942E75DAC8C05CD15527C17206EF2 *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
inline void List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1 (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, const RuntimeMethod*))List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(!0)
inline void List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 , const RuntimeMethod*))List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void Singleton`1<Gamecontroller>::Awake()
inline void Singleton_1_Awake_m988743021D568F37F70A2665E372AB0D5C83FB75 (Singleton_1_tC2F5A0B4D469CD33E39AB10F37DD814CAFD4E539 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tC2F5A0B4D469CD33E39AB10F37DD814CAFD4E539 *, const RuntimeMethod*))Singleton_1_Awake_m78FFC036233E850C3C33F55CD1513E965D0D6037_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Hexagon>::.ctor()
inline void List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Hexagon>::Add(!0)
inline void List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 Hexagon::get_Number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Void Gamecontroller::CheckAroundNum(System.Int32,System.Int32,System.Int32,System.Collections.Generic.List`1<Hexagon>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_CheckAroundNum_mF0C515155A7881FFF9F12DB3A8E86565BBF36224 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, int32_t ___centerRow0, int32_t ___centerCol1, int32_t ___CheckNum2, List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * ___listHexagons3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Hexagon>::get_Count()
inline int32_t List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Hexagon>::get_Item(System.Int32)
inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Collections.IEnumerator Hexagon::YieldClearNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hexagon_YieldClearNum_m7ADCD90F0F2AFA5F5D405D2F14FB2CAE31278CDC (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Hexagon::YieldChangeNumAndCheck(System.Int32,Hexagon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hexagon_YieldChangeNumAndCheck_mAFA3A0F376A3427A22604399A29A9AB16C4AD153 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___num0, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___NextCheckBox1, const RuntimeMethod* method);
// System.Void Hexagon::ClearNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_ClearNum_mB90277772E2A5AC9798C4C9DFE7450A7D753AE88 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Void Gamecontroller::NumConnect(Hexagon,Hexagon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_NumConnect_m2711B2FE485C56AFB15B8394A00160C603CB0BD5 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___BePlacedBox0, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___NextCheckBox1, const RuntimeMethod* method);
// System.Boolean Gamecontroller::CheckGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gamecontroller_CheckGameOver_m548C808157D7D867C7ED5ABA079683FA9ADC6F92 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method);
// T Singleton`1<ButtonFucController>::get_Instance()
inline ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_inline (const RuntimeMethod* method)
{
	return ((  ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// System.Void ButtonFucController::Revive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_Revive_mFD7645259D7525AB64E4F3156CB827FEE799105A (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::.ctor()
inline void List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *, const RuntimeMethod*))List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_gshared)(__this, method);
}
// System.Void Gamecontroller::GetAroundSixPoint(System.Collections.Generic.List`1<UnityEngine.Vector2Int>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_GetAroundSixPoint_mBBF4F787955444E142C37492E3E0247D638E5FC5 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * ___vector2s0, int32_t ___centerRow1, int32_t ___centerCol2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Item(System.Int32)
inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  (*) (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *, int32_t, const RuntimeMethod*))List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_gshared_inline)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method);
// System.Boolean Gamecontroller::CheckPointExist(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gamecontroller_CheckPointExist_mE4A95ECA02F321388EAAEFB14FE334C45544A257 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, int32_t ___row0, int32_t ___col1, const RuntimeMethod* method);
// T Singleton`1<Draw>::get_Instance()
inline Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_inline (const RuntimeMethod* method)
{
	return ((  Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// !!0 UnityEngine.Component::GetComponent<Hexagon>()
inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Hexagon>::Contains(!0)
inline bool List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * __this, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2Int>::get_Count()
inline int32_t List_1_get_Count_mE7CAD0A0114E2ABE951778EECF36B786DE521A24_inline (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *, const RuntimeMethod*))List_1_get_Count_mE7CAD0A0114E2ABE951778EECF36B786DE521A24_gshared_inline)(__this, method);
}
// System.Void ButtonFucController::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_LevelUp_m19FFC9441032ED1A07F777CB8E1ECDFA74C6A958 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method);
// System.Void Gamecontroller::CheckMapData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_CheckMapData_m1EF38451300A09416B98F4837CF52FC5D21A9575 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<NumberController/NumberState>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mA3250ABD65BCE9348473F2B3898AC487E6FCDFCF_inline (List_1_tB728C84B38500C9451A333E63EED455678C9A664 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB728C84B38500C9451A333E63EED455678C9A664 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<NumberController/NumberState>::get_Count()
inline int32_t List_1_get_Count_m103CC2425123E3119A2C7865BAB43403D3598F99_inline (List_1_tB728C84B38500C9451A333E63EED455678C9A664 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB728C84B38500C9451A333E63EED455678C9A664 *, const RuntimeMethod*))List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2Int>::Add(!0)
inline void List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153 (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *, Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 , const RuntimeMethod*))List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.Object::Instantiate<UserData>(!!0)
inline UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441 (UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * ___original0, const RuntimeMethod* method)
{
	return ((  UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * (*) (UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void Gamecontroller::InitData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_InitData_m0F0EEF3C0ABA5C904BE3482182D444314BFD7CE3 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method);
// System.Void Gamecontroller::InitArrData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_InitArrData_m5EB083EF1F1D78272C7A79D154586FD6609CBD3A (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method);
// System.Void UIController::SetTransPaid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetTransPaid_mF792C601586083069F3F784888F5465778A3C74D (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___needAwards0, const RuntimeMethod* method);
// System.Void RandomNumberController::RandomThreeNumberGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberController_RandomThreeNumberGroup_m37604645F2BD44680A525C5BC5C287E9AFB149E3 (RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * __this, const RuntimeMethod* method);
// System.Void ButtonFucController::ClosePausePage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_ClosePausePage_mEF28C67CEBC7A54D06F5D16681B2B5CC713E1F4A (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method);
// System.Void ButtonFucController::CloseGameOverPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_CloseGameOverPage_m0C8D4FFCA2F64A43C260AFEB6667A197006A89A2 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method);
// System.Void Gamecontroller::SaveNowData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_SaveNowData_mC7780376852782558BB9571D64EB73E2A8500E9D (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJsonOverwrite_mC97C7C909591A29E72361FB5DBC1A58EEE6DBAEB (String_t* ___json0, RuntimeObject * ___objectToOverwrite1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Void Singleton`1<Gamecontroller>::.ctor()
inline void Singleton_1__ctor_mFE1F169B3A4ACC45C77AD7FDEB8D45CA5E74A7CC (Singleton_1_tC2F5A0B4D469CD33E39AB10F37DD814CAFD4E539 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tC2F5A0B4D469CD33E39AB10F37DD814CAFD4E539 *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// System.Int32 System.String::CompareTo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF (String_t* __this, String_t* ___strB0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void Hexagon::MyDrawBorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_MyDrawBorder_mF854DF277BA4B7FDA205EA8C306E196EB33D3B87 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method);
// System.Void Hexagon::ChangeNum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_ChangeNum_mE543E5B0206E7857B42D9B6C81B348537C7B539C (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___num0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 Gamecontroller::TheNOfNumBy2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gamecontroller_TheNOfNumBy2_m61559A2DF3DB785DA7FF749575E7E5276482CF0E (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, int32_t ___number0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  (*) (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *, int32_t, const RuntimeMethod*))List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_gshared_inline)(__this, ___index0, method);
}
// System.Void Hexagon/<YieldChangeNumAndCheck>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldChangeNumAndCheckU3Ed__19__ctor_m7482978A697F26D0F0E0C854082E8823AC274534 (U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Hexagon/<YieldClearNum>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldClearNumU3Ed__20__ctor_mCDAAC66DE4B9267A63EFDADEBEE151D0B88693F3 (U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Gamecontroller::DeleteAllData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_DeleteAllData_m51CC445132822C63A6E3DCEDC9CD159E77D2B82D (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method);
// System.Void Gamecontroller::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_LoadData_m3F8680867D65A2AA9B5042BC03E044692B794D43 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void Singleton`1<RandomNumberController>::Awake()
inline void Singleton_1_Awake_mA29AD07345F5099B4F4C3F53DBC90A2FBF1CAE66 (Singleton_1_t14D87CF5A19904D2378C84323FA404A0A6B1BEF5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t14D87CF5A19904D2378C84323FA404A0A6B1BEF5 *, const RuntimeMethod*))Singleton_1_Awake_m78FFC036233E850C3C33F55CD1513E965D0D6037_gshared)(__this, method);
}
// System.Void RandomNumberController::LoadGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberController_LoadGroups_m295EF1D869E253230774CA5369E558F47C6A7427 (RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * __this, const RuntimeMethod* method);
// System.Boolean RandomNumberController::IsTimeToRandom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RandomNumberController_IsTimeToRandom_m6818F3A1ED1DC143645E8B44D90459737C5DFF57 (RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NumberController/NumberState>::Clear()
inline void List_1_Clear_m8E3033D8A20DF2E2BD74F2667F31F70EB91CC2FC (List_1_tB728C84B38500C9451A333E63EED455678C9A664 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB728C84B38500C9451A333E63EED455678C9A664 *, const RuntimeMethod*))List_1_Clear_m1FB5B92E6491926F79FFC4A98B95B3AB580D2BA5_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NumberController/NumberState>::Add(!0)
inline void List_1_Add_mF03CD2D0CF090D5115AC0B1D1693C4352624878F (List_1_tB728C84B38500C9451A333E63EED455678C9A664 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB728C84B38500C9451A333E63EED455678C9A664 *, int32_t, const RuntimeMethod*))List_1_Add_mBA0FDF41792A78B3EB9E395D711706E268313F0F_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<NumberController>()
inline NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NumberController/NumberState>::.ctor()
inline void List_1__ctor_mD5512C7D39FE641D0D8D1069CC4610F35E03AD98 (List_1_tB728C84B38500C9451A333E63EED455678C9A664 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB728C84B38500C9451A333E63EED455678C9A664 *, const RuntimeMethod*))List_1__ctor_mF1D0377D81949B2ADB6104D9994F7CEE1A1E5040_gshared)(__this, method);
}
// System.Void Singleton`1<RandomNumberController>::.ctor()
inline void Singleton_1__ctor_m09A5DF51BFCAECC9A911575ADE90437781F80F7F (Singleton_1_t14D87CF5A19904D2378C84323FA404A0A6B1BEF5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t14D87CF5A19904D2378C84323FA404A0A6B1BEF5 *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void UIController::SetTargetNum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetTargetNum_mD976854192AFED5562A15E4E0C934802B0CD7096 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___TargetNumber0, const RuntimeMethod* method);
// System.Void UIController::SetLevelAbout(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetLevelAbout_m2C902335BBD26194E301DCC2EF76DBF189589717 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___curLevel0, float ___ExpProportion1, const RuntimeMethod* method);
// System.Void UIController::SetAwards(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetAwards_m2DFA412F9A3F41A90CF2C154D007F77762446273 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___currentAward0, const RuntimeMethod* method);
// System.Void UIController::SetScores(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetScores_mA52A4A16071C460580CA57645EA523CC799A0F4D (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___currentScore0, const RuntimeMethod* method);
// System.Void UIController::SetTransNum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetTransNum_m53962AA749E305FF5E5C1CB998F697150ABDEC06 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___minNumber0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponentInParent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_mC25A91D60F4C0DC87303DAA477B1FC0EC0C41EC0 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void Singleton`1<UIController>::.ctor()
inline void Singleton_1__ctor_mE1C742E07E6001DA76D84607DD22EE8A33751B1A (Singleton_1_t024D6FE05EE509D47C5116F452A2A51023F31F29 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t024D6FE05EE509D47C5116F452A2A51023F31F29 *, const RuntimeMethod*))Singleton_1__ctor_m6CE4DA5370945C58EFFF5F54339D8A70383F096B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A (CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<NumberController>()
inline NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * Component_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_mE66B6E7D930F8CD5FDDD4531DD6230749040B1FE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponentInParent<Hexagon>()
inline Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * GameObject_GetComponentInParent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_m230A60E6437456F2B694A918E1489C90A6302DF7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_m1CAE1DA88E1147164A44737BD03D5CB12DC73673_gshared)(__this, method);
}
// System.Boolean NumberController::Trans(Hexagon,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberController_Trans_m163238F7FCCBDF4A85AB73A9ACAE28BA467788EE (NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * __this, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___TargetBox0, int32_t ___currentOnDragNumIndex1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<NumberController/NumberState>::Remove(!0)
inline bool List_1_Remove_mFA59461CB5E5BF85E9B93754B8C4EA44F338B03F (List_1_tB728C84B38500C9451A333E63EED455678C9A664 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB728C84B38500C9451A333E63EED455678C9A664 *, int32_t, const RuntimeMethod*))List_1_Remove_m33506664531C256A7C5EE365E9E994AF9289F43A_gshared)(__this, ___item0, method);
}
// T Singleton`1<AudioManager>::get_Instance()
inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_inline (const RuntimeMethod* method)
{
	return ((  AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline)(method);
}
// System.Void AudioManager::PlayDownEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayDownEffect_mE05C26F8D4D661991EDB0AFD04917D99369718D9 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___hit0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void AudioManager::PlaySwitchEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySwitchEffect_mF2C116072B1E57C16D565BB2A1F192B8F8262F32 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void AudioManager::PlayConnectEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayConnectEffect_mFF25C9E6E11E834AABDD4FE9C21DA7278ABBE6FB (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method);
// System.Void Gamecontroller::SetLevelAndExpAndScores(System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_SetLevelAndExpAndScores_m8D0F61A3570321CEF893457D5DA31EB54C597CF4 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, float ___exp0, int32_t ___scores1, int32_t ___awards2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Start_m54C0A7ACBAB2F38052C6B900BBBC3261339662FC (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	{
		// mixer = BGMAudioSource.outputAudioMixerGroup.audioMixer;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_BGMAudioSource_8();
		NullCheck(L_0);
		AudioMixerGroup_tDF20E4C7597CA1C491BEA95A530E9CA19AE37F1F * L_1;
		L_1 = AudioSource_get_outputAudioMixerGroup_mBB5231BEBD764B7D5AB5225470B8AC6423B18A5D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_2;
		L_2 = AudioMixerGroup_get_audioMixer_mDB232CE003BDC95A3966A4A8547037550561F58A(L_1, /*hidden argument*/NULL);
		__this->set_mixer_10(L_2);
		// }
		return;
	}
}
// System.Void AudioManager::PlayBGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayBGM_mE1751FAC72A80987BD12ABE8A966801A2A26BAF6 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	{
		// BGMAudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_BGMAudioSource_8();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::StopPlayBGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StopPlayBGM_m53FD1DD74C9D8156B4982CFC03C4EAD74B16F082 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	{
		// BGMAudioSource.Pause();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_BGMAudioSource_8();
		NullCheck(L_0);
		AudioSource_Pause_mC4F9932A77B6AA2CC3FB720721B7837CF57B675D(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlayDownEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayDownEffect_mE05C26F8D4D661991EDB0AFD04917D99369718D9 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	{
		// SoundEffectsAudioSource.PlayOneShot(DownClip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_SoundEffectsAudioSource_9();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_DownClip_6();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlayConnectEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayConnectEffect_mFF25C9E6E11E834AABDD4FE9C21DA7278ABBE6FB (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	{
		// SoundEffectsAudioSource.PlayOneShot(ConnectClip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_SoundEffectsAudioSource_9();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_ConnectClip_7();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlaySwitchEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySwitchEffect_mF2C116072B1E57C16D565BB2A1F192B8F8262F32 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	{
		// SoundEffectsAudioSource.PlayOneShot(SwitchClip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_SoundEffectsAudioSource_9();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = __this->get_SwitchClip_5();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::ChangeEffectVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_ChangeEffectVolume_mD2FBF0FBE6EBD0D220A39B441E186CC237A54549 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, float ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0AE16B573B4BB3076441BD0CBDBE19D7B154FEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mixer.SetFloat("Effect Volume", x);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_0 = __this->get_mixer_10();
		float L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE(L_0, _stringLiteralC0AE16B573B4BB3076441BD0CBDBE19D7B154FEF, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::ChangeBGMVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_ChangeBGMVolume_mB806B72134E5DEFA77E17663373C437E2F1A5E55 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, float ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3C4D55F58BF724549657EDA09204E53395E1B2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mixer.SetFloat("BGM Volume", x);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_0 = __this->get_mixer_10();
		float L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE(L_0, _stringLiteralD3C4D55F58BF724549657EDA09204E53395E1B2C, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::ChangeMainVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_ChangeMainVolume_m26BF785A91E09A93C56699ABA378823D4EE8C9DF (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, float ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mixer.SetFloat("MasterVolume", x);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_0 = __this->get_mixer_10();
		float L_1 = ___x0;
		NullCheck(L_0);
		bool L_2;
		L_2 = AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE(L_0, _stringLiteral7D1364D44BA8F634BB9CD0BC5617C11222D23BFC, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_m6C686441D1A1A223E4CF940A8EB0128535D603BD (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m8684452EF28D2585F6120C9831F115879F632625_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m8684452EF28D2585F6120C9831F115879F632625(__this, /*hidden argument*/Singleton_1__ctor_m8684452EF28D2585F6120C9831F115879F632625_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonFucController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_Start_m8A1B48FE7E00BC22DC093B8BB0463C7D5052B6C1 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFucController_ContinueGame_m56B5B3C3B1C08572609A682FAADDEA3C24CDE71E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFucController_DontPlayAds_m806658B6829E3C13791AB667989492EB6E2E028C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFucController_GameOver_mCB6F7343B60AAAEEEDCA633F3F24F75C4D948C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFucController_GuidanceClose_mDE76191D7AAD97B72A413FAF38BA342ED4BF26A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFucController_Guidance_m7378FA99786BA166411D502E9531417A2A4C4710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFucController_PauseGame_m01CC7E1C93DEFA32204FBA4D7F630E3E06791380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFucController_Sound_m9489D9AA28697D1FFA64E3131189D2669B40EF0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFucController_TintsClose_m3C37FC722233C1F96BF418738CB78EA63C61BA24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFucController_Vibrate_m5ACE42270977D05493A3B84C20A54A8E4AE88FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gamecontroller_Home_m1AFCB0B1DE0140FB48CFE179CCBE592307D80FD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gamecontroller_ReStartGame_m61CE8A7D0FEA6B61ED84FF7901C01C554674BCF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameOverMask = transform.GetChild(2).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_0, 2, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		__this->set_GameOverMask_10(L_2);
		// TransTints = transform.GetChild(0).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		__this->set_TransTints_9(L_5);
		// CancelTrans = transform.GetChild(1).GetComponent<Button>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, 1, /*hidden argument*/NULL);
		NullCheck(L_7);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8;
		L_8 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_7, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		__this->set_CancelTrans_5(L_8);
		// CancelTrans.onClick.AddListener(TintsClose);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_CancelTrans_5();
		NullCheck(L_9);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_10;
		L_10 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_9, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_11 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_11, __this, (intptr_t)((intptr_t)ButtonFucController_TintsClose_m3C37FC722233C1F96BF418738CB78EA63C61BA24_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_10, L_11, /*hidden argument*/NULL);
		// TransTints.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_TransTints_9();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// CancelTrans.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = __this->get_CancelTrans_5();
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// TransMask.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_TransMask_16();
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
		// ThreeGuidance = transform.GetChild(3).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_16, 3, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		__this->set_ThreeGuidance_11(L_18);
		// GuidanceButton.onClick.AddListener(Guidance);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_19 = __this->get_GuidanceButton_21();
		NullCheck(L_19);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_20;
		L_20 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_19, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_21 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_21, __this, (intptr_t)((intptr_t)ButtonFucController_Guidance_m7378FA99786BA166411D502E9531417A2A4C4710_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_20, L_21, /*hidden argument*/NULL);
		// GuidanceCloseButton = ThreeGuidance.transform.GetChild(0).GetComponent<Button>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_ThreeGuidance_11();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_23, 0, /*hidden argument*/NULL);
		NullCheck(L_24);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_25;
		L_25 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_24, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		__this->set_GuidanceCloseButton_6(L_25);
		// GuidanceCloseButton.onClick.AddListener(GuidanceClose);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_26 = __this->get_GuidanceCloseButton_6();
		NullCheck(L_26);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_27;
		L_27 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_26, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_28 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_28, __this, (intptr_t)((intptr_t)ButtonFucController_GuidanceClose_mDE76191D7AAD97B72A413FAF38BA342ED4BF26A8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_27);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_27, L_28, /*hidden argument*/NULL);
		// PausePage = transform.GetChild(4).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_29, 4, /*hidden argument*/NULL);
		NullCheck(L_30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_30, /*hidden argument*/NULL);
		__this->set_PausePage_12(L_31);
		// PausePage.transform.GetChild(1).GetComponent<Button>().onClick.AddListener(ContinueGame);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_PausePage_12();
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_33, 1, /*hidden argument*/NULL);
		NullCheck(L_34);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_35;
		L_35 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_34, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_35);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_36;
		L_36 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_35, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_37 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_37, __this, (intptr_t)((intptr_t)ButtonFucController_ContinueGame_m56B5B3C3B1C08572609A682FAADDEA3C24CDE71E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_36);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_36, L_37, /*hidden argument*/NULL);
		// PausePage.transform.GetChild(2).GetComponent<Button>().onClick.AddListener(Gamecontroller.Instance.ReStartGame);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_PausePage_12();
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_39, 2, /*hidden argument*/NULL);
		NullCheck(L_40);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_41;
		L_41 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_40, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_41);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_42;
		L_42 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_41, /*hidden argument*/NULL);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_43;
		L_43 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_44 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_44, L_43, (intptr_t)((intptr_t)Gamecontroller_ReStartGame_m61CE8A7D0FEA6B61ED84FF7901C01C554674BCF3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_42);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_42, L_44, /*hidden argument*/NULL);
		// PausePage.transform.GetChild(3).GetComponent<Button>().onClick.AddListener(Gamecontroller.Instance.Home);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = __this->get_PausePage_12();
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_46, 3, /*hidden argument*/NULL);
		NullCheck(L_47);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_48;
		L_48 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_47, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_48);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_49;
		L_49 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_48, /*hidden argument*/NULL);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_50;
		L_50 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_51 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_51, L_50, (intptr_t)((intptr_t)Gamecontroller_Home_m1AFCB0B1DE0140FB48CFE179CCBE592307D80FD9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_49);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_49, L_51, /*hidden argument*/NULL);
		// PauseButton.onClick.AddListener(PauseGame);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_52 = __this->get_PauseButton_20();
		NullCheck(L_52);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_53;
		L_53 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_52, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_54 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_54, __this, (intptr_t)((intptr_t)ButtonFucController_PauseGame_m01CC7E1C93DEFA32204FBA4D7F630E3E06791380_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_53);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_53, L_54, /*hidden argument*/NULL);
		// LevelUpPage = transform.GetChild(5).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_55, 5, /*hidden argument*/NULL);
		NullCheck(L_56);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57;
		L_57 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_56, /*hidden argument*/NULL);
		__this->set_LevelUpPage_14(L_57);
		// LevelUpPage.transform.GetChild(4).GetComponent<Button>().onClick.AddListener(DontPlayAds);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get_LevelUpPage_14();
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_59, 4, /*hidden argument*/NULL);
		NullCheck(L_60);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_61;
		L_61 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_60, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_61);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_62;
		L_62 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_61, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_63 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_63, __this, (intptr_t)((intptr_t)ButtonFucController_DontPlayAds_m806658B6829E3C13791AB667989492EB6E2E028C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_62);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_62, L_63, /*hidden argument*/NULL);
		// LevelUpPage.transform.GetChild(2).GetComponent<Text>().text = "+" + Gamecontroller.Instance.settingData.LevelUpAward.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_LevelUpPage_14();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_65, 2, /*hidden argument*/NULL);
		NullCheck(L_66);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_67;
		L_67 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_66, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_68;
		L_68 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_68);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_69 = L_68->get_settingData_5();
		NullCheck(L_69);
		int32_t* L_70 = L_69->get_address_of_LevelUpAward_8();
		String_t* L_71;
		L_71 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_70, /*hidden argument*/NULL);
		String_t* L_72;
		L_72 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_71, /*hidden argument*/NULL);
		NullCheck(L_67);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_67, L_72);
		// RevivePage = transform.GetChild(6).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_73);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_73, 6, /*hidden argument*/NULL);
		NullCheck(L_74);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75;
		L_75 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_74, /*hidden argument*/NULL);
		__this->set_RevivePage_15(L_75);
		// RevivePage.transform.GetChild(2).GetComponent<Button>().onClick.AddListener(GameOver);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = __this->get_RevivePage_15();
		NullCheck(L_76);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_76, /*hidden argument*/NULL);
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_77, 2, /*hidden argument*/NULL);
		NullCheck(L_78);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_79;
		L_79 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_78, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_79);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_80;
		L_80 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_79, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_81 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_81, __this, (intptr_t)((intptr_t)ButtonFucController_GameOver_mCB6F7343B60AAAEEEDCA633F3F24F75C4D948C95_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_80);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_80, L_81, /*hidden argument*/NULL);
		// GameOverPage = transform.GetChild(7).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_82, 7, /*hidden argument*/NULL);
		NullCheck(L_83);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84;
		L_84 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_83, /*hidden argument*/NULL);
		__this->set_GameOverPage_13(L_84);
		// FinalScores = GameOverPage.transform.GetChild(1).GetChild(0).GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85 = __this->get_GameOverPage_13();
		NullCheck(L_85);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_85, /*hidden argument*/NULL);
		NullCheck(L_86);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87;
		L_87 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_86, 1, /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88;
		L_88 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_87, 0, /*hidden argument*/NULL);
		NullCheck(L_88);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_89;
		L_89 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_88, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_FinalScores_7(L_89);
		// FinalAwards = GameOverPage.transform.GetChild(1).GetChild(1).GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90 = __this->get_GameOverPage_13();
		NullCheck(L_90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91;
		L_91 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_90, /*hidden argument*/NULL);
		NullCheck(L_91);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92;
		L_92 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_91, 1, /*hidden argument*/NULL);
		NullCheck(L_92);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_92, 1, /*hidden argument*/NULL);
		NullCheck(L_93);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_94;
		L_94 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_93, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_FinalAwards_8(L_94);
		// FinalAwards.text = Gamecontroller.Instance.settingData.LevelUpAward.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_95 = __this->get_FinalAwards_8();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_96;
		L_96 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_96);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_97 = L_96->get_settingData_5();
		NullCheck(L_97);
		int32_t* L_98 = L_97->get_address_of_LevelUpAward_8();
		String_t* L_99;
		L_99 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_98, /*hidden argument*/NULL);
		NullCheck(L_95);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_95, L_99);
		// GameOverPage.transform.GetChild(3).GetComponent<Button>().onClick.AddListener(Gamecontroller.Instance.ReStartGame);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100 = __this->get_GameOverPage_13();
		NullCheck(L_100);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101;
		L_101 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_100, /*hidden argument*/NULL);
		NullCheck(L_101);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_102;
		L_102 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_101, 3, /*hidden argument*/NULL);
		NullCheck(L_102);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_103;
		L_103 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_102, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_103);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_104;
		L_104 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_103, /*hidden argument*/NULL);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_105;
		L_105 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_106 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_106, L_105, (intptr_t)((intptr_t)Gamecontroller_ReStartGame_m61CE8A7D0FEA6B61ED84FF7901C01C554674BCF3_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_104);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_104, L_106, /*hidden argument*/NULL);
		// GameOverPage.transform.GetChild(4).GetComponent<Button>().onClick.AddListener(Gamecontroller.Instance.Home);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_107 = __this->get_GameOverPage_13();
		NullCheck(L_107);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_108;
		L_108 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_107, /*hidden argument*/NULL);
		NullCheck(L_108);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_109;
		L_109 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_108, 4, /*hidden argument*/NULL);
		NullCheck(L_109);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_110;
		L_110 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_109, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_110);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_111;
		L_111 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_110, /*hidden argument*/NULL);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_112;
		L_112 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_113 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_113, L_112, (intptr_t)((intptr_t)Gamecontroller_Home_m1AFCB0B1DE0140FB48CFE179CCBE592307D80FD9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_111);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_111, L_113, /*hidden argument*/NULL);
		// PausePage.transform.GetChild(4).GetComponent<Button>().onClick.AddListener(Sound);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_114 = __this->get_PausePage_12();
		NullCheck(L_114);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_115;
		L_115 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_114, /*hidden argument*/NULL);
		NullCheck(L_115);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_116;
		L_116 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_115, 4, /*hidden argument*/NULL);
		NullCheck(L_116);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_117;
		L_117 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_116, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_117);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_118;
		L_118 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_117, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_119 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_119, __this, (intptr_t)((intptr_t)ButtonFucController_Sound_m9489D9AA28697D1FFA64E3131189D2669B40EF0E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_118);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_118, L_119, /*hidden argument*/NULL);
		// PausePage.transform.GetChild(5).GetComponent<Button>().onClick.AddListener(Vibrate);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_120 = __this->get_PausePage_12();
		NullCheck(L_120);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_121;
		L_121 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_120, /*hidden argument*/NULL);
		NullCheck(L_121);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_122;
		L_122 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_121, 5, /*hidden argument*/NULL);
		NullCheck(L_122);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_123;
		L_123 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_122, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_123);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_124;
		L_124 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_123, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_125 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_125, __this, (intptr_t)((intptr_t)ButtonFucController_Vibrate_m5ACE42270977D05493A3B84C20A54A8E4AE88FEE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_124);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_124, L_125, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_Update_mA1C7280644EA3923EC0F2E4A779EA2E9255AE18A (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// CheckAward();
		ButtonFucController_CheckAward_mCF05DF935421B5350A76C4B14055FE8FC3D1A194(__this, /*hidden argument*/NULL);
		// CheckScores();
		ButtonFucController_CheckScores_mB0AA46C2F824608937F084A6074B02354AF2D99C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::CheckAward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_CheckAward_mCF05DF935421B5350A76C4B14055FE8FC3D1A194 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B2_0 = NULL;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * G_B3_1 = NULL;
	{
		// RefreshBtn.interactable = (Gamecontroller.Instance.userData.Awards < Gamecontroller.Instance.userData.RefreshNeedAwards) ? false : true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_RefreshBtn_18();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_1;
		L_1 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_1);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_2 = L_1->get_userData_7();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_Awards_8();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_4;
		L_4 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_4);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_5 = L_4->get_userData_7();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_RefreshNeedAwards_10();
		G_B1_0 = L_0;
		if ((((int32_t)L_3) < ((int32_t)L_6)))
		{
			G_B2_0 = L_0;
			goto IL_0029;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_002a:
	{
		NullCheck(G_B3_1);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(G_B3_1, (bool)G_B3_0, /*hidden argument*/NULL);
		// if (Gamecontroller.Instance.userData.Awards < Gamecontroller.Instance.userData.TransNeedAwards)
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_7;
		L_7 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_7);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_8 = L_7->get_userData_7();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_Awards_8();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_10;
		L_10 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_10);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_11 = L_10->get_userData_7();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_TransNeedAwards_11();
		if ((((int32_t)L_9) >= ((int32_t)L_12)))
		{
			goto IL_0062;
		}
	}
	{
		// TransBtn.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = __this->get_TransBtn_19();
		NullCheck(L_13);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_13, (bool)0, /*hidden argument*/NULL);
		// TintsClose();
		ButtonFucController_TintsClose_m3C37FC722233C1F96BF418738CB78EA63C61BA24(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0062:
	{
		// else TransBtn.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_14 = __this->get_TransBtn_19();
		NullCheck(L_14);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_14, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::CheckScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_CheckScores_mB0AA46C2F824608937F084A6074B02354AF2D99C (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ButtonFucController::RandomFresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_RandomFresh_m31D0A5B9162E0A329FA205A775996EDB38C2F1B1 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < 3; ++i)
		V_0 = 0;
		goto IL_003d;
	}

IL_0004:
	{
		// if(RandomNumberController.Instance.Point[i].GetChild(0))
		RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * L_0;
		L_0 = Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_inline(/*hidden argument*/Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		NullCheck(L_0);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1 = L_0->get_Point_12();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_4, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// Destroy(RandomNumberController.Instance.Point[i].GetChild(0).gameObject);
		RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * L_7;
		L_7 = Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_inline(/*hidden argument*/Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		NullCheck(L_7);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_8 = L_7->get_Point_12();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_11, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003d:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// Gamecontroller.Instance.userData.Awards -= Gamecontroller.Instance.userData.RefreshNeedAwards;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_16;
		L_16 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_16);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_17 = L_16->get_userData_7();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_Awards_8();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_20;
		L_20 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_20);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_21 = L_20->get_userData_7();
		NullCheck(L_21);
		int32_t L_22 = L_21->get_RefreshNeedAwards_10();
		NullCheck(L_18);
		L_18->set_Awards_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_22)));
		// Gamecontroller.Instance.userData.RefreshNeedAwards = Gamecontroller.Instance.settingData.freshIncrease * ++Gamecontroller.Instance.randomCounts
		//     + Gamecontroller.Instance.settingData.InitNeedFreshAward;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_23;
		L_23 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_23);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_24 = L_23->get_userData_7();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_25;
		L_25 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_25);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_26 = L_25->get_settingData_5();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_freshIncrease_12();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_28;
		L_28 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_randomCounts_15();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		int32_t L_31 = V_1;
		NullCheck(L_29);
		L_29->set_randomCounts_15(L_31);
		int32_t L_32 = V_1;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_33;
		L_33 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_33);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_34 = L_33->get_settingData_5();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_InitNeedFreshAward_14();
		NullCheck(L_24);
		L_24->set_RefreshNeedAwards_10(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_32)), (int32_t)L_35)));
		// UIController.Instance.SetFreshPaid(Gamecontroller.Instance.userData.RefreshNeedAwards);
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_36;
		L_36 = Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_inline(/*hidden argument*/Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_37;
		L_37 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_37);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_38 = L_37->get_userData_7();
		NullCheck(L_38);
		int32_t L_39 = L_38->get_RefreshNeedAwards_10();
		NullCheck(L_36);
		UIController_SetFreshPaid_m4DA5263652CE4A0C3071BDE3A50037054BD2A9CB(L_36, L_39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::TransUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_TransUpdate_m1E8144F976E42E4A46CAB32EC193C51FE0F4563A (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// TransTints.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_TransTints_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// CancelTrans.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_CancelTrans_5();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// TransMask.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_TransMask_16();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(SelectNum());
		RuntimeObject* L_4;
		L_4 = ButtonFucController_SelectNum_m2056B9F1D34639876C5D2A66A229628BB58299B5(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ButtonFucController::SelectNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonFucController_SelectNum_m2056B9F1D34639876C5D2A66A229628BB58299B5 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9 * L_0 = (U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9 *)il2cpp_codegen_object_new(U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9_il2cpp_TypeInfo_var);
		U3CSelectNumU3Ed__23__ctor_m8369E6770757E1E6E979428B2F53B76D8C20FF37(L_0, 0, /*hidden argument*/NULL);
		U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ButtonFucController::TintsClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_TintsClose_m3C37FC722233C1F96BF418738CB78EA63C61BA24 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// TransTints.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_TransTints_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// CancelTrans.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_CancelTrans_5();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// TransMask.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_TransMask_16();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::CloseSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_CloseSelf_mB2C5B40C85962C6E5F58F5C7F8FD8B221FD4D799 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// Ads2.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Ads2_17();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::Guidance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_Guidance_m7378FA99786BA166411D502E9531417A2A4C4710 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// GameOverMask.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameOverMask_10();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// ThreeGuidance.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_ThreeGuidance_11();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::GuidanceClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_GuidanceClose_mDE76191D7AAD97B72A413FAF38BA342ED4BF26A8 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// GameOverMask.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameOverMask_10();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// ThreeGuidance.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_ThreeGuidance_11();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_PauseGame_m01CC7E1C93DEFA32204FBA4D7F630E3E06791380 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// GameOverMask.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameOverMask_10();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// PausePage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_PausePage_12();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::ContinueGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_ContinueGame_m56B5B3C3B1C08572609A682FAADDEA3C24CDE71E (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// GameOverMask.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameOverMask_10();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// PausePage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_PausePage_12();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_LevelUp_m19FFC9441032ED1A07F777CB8E1ECDFA74C6A958 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// LevelUpPage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_LevelUpPage_14();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// GameOverMask.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GameOverMask_10();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::DontPlayAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_DontPlayAds_m806658B6829E3C13791AB667989492EB6E2E028C (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// LevelUpPage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_LevelUpPage_14();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GameOverMask.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GameOverMask_10();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::ClosePausePage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_ClosePausePage_mEF28C67CEBC7A54D06F5D16681B2B5CC713E1F4A (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// PausePage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_PausePage_12();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GameOverMask.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GameOverMask_10();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::Revive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_Revive_mFD7645259D7525AB64E4F3156CB827FEE799105A (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// RevivePage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_RevivePage_15();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// GameOverMask.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GameOverMask_10();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_GameOver_mCB6F7343B60AAAEEEDCA633F3F24F75C4D948C95 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RevivePage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_RevivePage_15();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GameOverPage.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GameOverPage_13();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// FinalScores.text = Gamecontroller.Instance.userData.Scores.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_FinalScores_7();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_3;
		L_3 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_3);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_4 = L_3->get_userData_7();
		NullCheck(L_4);
		int32_t* L_5 = L_4->get_address_of_Scores_9();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void ButtonFucController::Sound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_Sound_m9489D9AA28697D1FFA64E3131189D2669B40EF0E (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// PausePage.transform.GetChild(4).GetChild(0).gameObject.SetActive(!PausePage.transform.GetChild(4).GetChild(0).gameObject.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_PausePage_12();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, 4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_2, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_PausePage_12();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, 4, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::CloseGameOverPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_CloseGameOverPage_m0C8D4FFCA2F64A43C260AFEB6667A197006A89A2 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// GameOverPage.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameOverPage_13();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// GameOverMask.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_GameOverMask_10();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::Vibrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController_Vibrate_m5ACE42270977D05493A3B84C20A54A8E4AE88FEE (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	{
		// Handheld.Vibrate();
		Handheld_Vibrate_m521B854160443BEBA8D2D3BE63641000E1DAA82E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonFucController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFucController__ctor_m320925C09769FDF40AAF434DDBD49AE629DBC6F0 (ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m4AEDFE335BBB1F0E4B9FE38C55B04A4B9A03AACB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m4AEDFE335BBB1F0E4B9FE38C55B04A4B9A03AACB(__this, /*hidden argument*/Singleton_1__ctor_m4AEDFE335BBB1F0E4B9FE38C55B04A4B9A03AACB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Draw::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draw_Start_m26FD2A5430EB8088ACD248EB9180E6FC65FEF144 (Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * __this, const RuntimeMethod* method)
{
	{
		// NewMap();
		Draw_NewMap_m79625DA1B0F711ED568F37B4C89308F76E7E6FA1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Draw::NewMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draw_NewMap_m79625DA1B0F711ED568F37B4C89308F76E7E6FA1 (Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * __this, const RuntimeMethod* method)
{
	{
		// beginPoint = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_beginPoint_8(L_0);
		// beginGap = leftRightGap;
		float L_1 = __this->get_leftRightGap_6();
		__this->set_beginGap_10(L_1);
		// Diam = 2 * leftRightGap;
		float L_2 = __this->get_leftRightGap_6();
		__this->set_Diam_11(((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_2)));
		// UpAndDownDiam = 2 * UpAndDownGap;
		float L_3 = __this->get_UpAndDownGap_7();
		__this->set_UpAndDownDiam_12(((float)il2cpp_codegen_multiply((float)(2.0f), (float)L_3)));
		// InitData();
		Draw_InitData_m1D6957F834586F8A7F50ADD3A9AC47B00BE0A523(__this, /*hidden argument*/NULL);
		// ClearMap();
		Draw_ClearMap_mCFF8D804E8807B39FCC39017E1A9123BDE81348B(__this, /*hidden argument*/NULL);
		// DrawMap();
		Draw_DrawMap_m17494146A606B0C469AFAC0CC9D11B20B9EFD19F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Draw::InitData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draw_InitData_m1D6957F834586F8A7F50ADD3A9AC47B00BE0A523 (Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// float w =Gamecontroller.Instance.width * Diam/2;//�����ĵ㿪ʼ��������
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_0;
		L_0 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = L_0->get_width_18();
		float L_2 = __this->get_Diam_11();
		V_0 = ((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_1)), (float)L_2))/(float)(2.0f)));
		// beginPoint -=new Vector2(w,0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_beginPoint_8();
		float L_4 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), L_4, (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_3, L_5, /*hidden argument*/NULL);
		__this->set_beginPoint_8(L_6);
		// arrPoint = new Vector2[Gamecontroller.Instance.height][];//��������
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_7;
		L_7 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = L_7->get_height_17();
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_9 = (Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD*)(Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD*)SZArrayNew(Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_arrPoint_9(L_9);
		// for (int i = 0; i < Gamecontroller.Instance.height /2; ++i)
		V_1 = 0;
		goto IL_00ab;
	}

IL_004e:
	{
		// arrPoint[i] = new Vector2[Gamecontroller.Instance.width - Gamecontroller.Instance.height / 2 + i];
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_10 = __this->get_arrPoint_9();
		int32_t L_11 = V_1;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_12;
		L_12 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_12);
		int32_t L_13 = L_12->get_width_18();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_14;
		L_14 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_14);
		int32_t L_15 = L_14->get_height_17();
		int32_t L_16 = V_1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_17 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)((int32_t)L_15/(int32_t)2)))), (int32_t)L_16)));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_17);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_17);
		// arrPoint[Gamecontroller.Instance.height - 1 - i] = new Vector2[Gamecontroller.Instance.width - Gamecontroller.Instance.height / 2 + i];
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_18 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_19;
		L_19 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_19);
		int32_t L_20 = L_19->get_height_17();
		int32_t L_21 = V_1;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_22;
		L_22 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23 = L_22->get_width_18();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_24;
		L_24 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_24);
		int32_t L_25 = L_24->get_height_17();
		int32_t L_26 = V_1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_27 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)((int32_t)((int32_t)L_25/(int32_t)2)))), (int32_t)L_26)));
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_27);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)), (int32_t)L_21))), (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_27);
		// for (int i = 0; i < Gamecontroller.Instance.height /2; ++i)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00ab:
	{
		// for (int i = 0; i < Gamecontroller.Instance.height /2; ++i)
		int32_t L_29 = V_1;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_30;
		L_30 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_30);
		int32_t L_31 = L_30->get_height_17();
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)L_31/(int32_t)2)))))
		{
			goto IL_004e;
		}
	}
	{
		// for (int i=0; i < Gamecontroller.Instance.height /2 ; ++i)
		V_2 = 0;
		goto IL_024c;
	}

IL_00c1:
	{
		// arrPoint[i][0] = new Vector2(beginGap * (Gamecontroller.Instance.height /2+1-i) + beginPoint.x, beginPoint.y+ (Gamecontroller.Instance.height / 2 - i) * UpAndDownDiam);
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_32 = __this->get_arrPoint_9();
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_35 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		float L_36 = __this->get_beginGap_10();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_37;
		L_37 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_37);
		int32_t L_38 = L_37->get_height_17();
		int32_t L_39 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_40 = __this->get_address_of_beginPoint_8();
		float L_41 = L_40->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = __this->get_address_of_beginPoint_8();
		float L_43 = L_42->get_y_1();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_44;
		L_44 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_44);
		int32_t L_45 = L_44->get_height_17();
		int32_t L_46 = V_2;
		float L_47 = __this->get_UpAndDownDiam_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_48), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_36, (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_38/(int32_t)2)), (int32_t)1)), (int32_t)L_39)))))), (float)L_41)), ((float)il2cpp_codegen_add((float)L_43, (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_45/(int32_t)2)), (int32_t)L_46)))), (float)L_47)))), /*hidden argument*/NULL);
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_48);
		// arrPoint[Gamecontroller.Instance.height -1-i][0]=new Vector2(beginGap * (Gamecontroller.Instance.height / 2 + 1 - i) + beginPoint.x, beginPoint.y- (Gamecontroller.Instance.height / 2 - i) * UpAndDownDiam);
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_49 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_50;
		L_50 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_50);
		int32_t L_51 = L_50->get_height_17();
		int32_t L_52 = V_2;
		NullCheck(L_49);
		int32_t L_53 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1)), (int32_t)L_52));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_54 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		float L_55 = __this->get_beginGap_10();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_56;
		L_56 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_56);
		int32_t L_57 = L_56->get_height_17();
		int32_t L_58 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_59 = __this->get_address_of_beginPoint_8();
		float L_60 = L_59->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_61 = __this->get_address_of_beginPoint_8();
		float L_62 = L_61->get_y_1();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_63;
		L_63 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_63);
		int32_t L_64 = L_63->get_height_17();
		int32_t L_65 = V_2;
		float L_66 = __this->get_UpAndDownDiam_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_67), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_55, (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_57/(int32_t)2)), (int32_t)1)), (int32_t)L_58)))))), (float)L_60)), ((float)il2cpp_codegen_subtract((float)L_62, (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_64/(int32_t)2)), (int32_t)L_65)))), (float)L_66)))), /*hidden argument*/NULL);
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_67);
		// for (int j = 1; j < arrPoint[i].Length; ++j)
		V_3 = 1;
		goto IL_0238;
	}

IL_0187:
	{
		// arrPoint[i][j]=new Vector2(arrPoint[i][0].x+ Diam * j, arrPoint[i][0].y);
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_68 = __this->get_arrPoint_9();
		int32_t L_69 = V_2;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_71 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		int32_t L_72 = V_3;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_73 = __this->get_arrPoint_9();
		int32_t L_74 = V_2;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_76 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_76);
		float L_77 = ((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		float L_78 = __this->get_Diam_11();
		int32_t L_79 = V_3;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_80 = __this->get_arrPoint_9();
		int32_t L_81 = V_2;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_83 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		float L_84 = ((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_85;
		memset((&L_85), 0, sizeof(L_85));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_85), ((float)il2cpp_codegen_add((float)L_77, (float)((float)il2cpp_codegen_multiply((float)L_78, (float)((float)((float)L_79)))))), L_84, /*hidden argument*/NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_85);
		// arrPoint[Gamecontroller.Instance.height - 1 - i][j] = new Vector2(arrPoint[Gamecontroller.Instance.height - 1 - i][0].x + Diam * j, arrPoint[Gamecontroller.Instance.height - 1 - i][0].y);
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_86 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_87;
		L_87 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_87);
		int32_t L_88 = L_87->get_height_17();
		int32_t L_89 = V_2;
		NullCheck(L_86);
		int32_t L_90 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)1)), (int32_t)L_89));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_91 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		int32_t L_92 = V_3;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_93 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_94;
		L_94 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_94);
		int32_t L_95 = L_94->get_height_17();
		int32_t L_96 = V_2;
		NullCheck(L_93);
		int32_t L_97 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1)), (int32_t)L_96));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_98 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_98);
		float L_99 = ((L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		float L_100 = __this->get_Diam_11();
		int32_t L_101 = V_3;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_102 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_103;
		L_103 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_103);
		int32_t L_104 = L_103->get_height_17();
		int32_t L_105 = V_2;
		NullCheck(L_102);
		int32_t L_106 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_104, (int32_t)1)), (int32_t)L_105));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_107 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		float L_108 = ((L_107)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_109), ((float)il2cpp_codegen_add((float)L_99, (float)((float)il2cpp_codegen_multiply((float)L_100, (float)((float)((float)L_101)))))), L_108, /*hidden argument*/NULL);
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(L_92), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_109);
		// for (int j = 1; j < arrPoint[i].Length; ++j)
		int32_t L_110 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)1));
	}

IL_0238:
	{
		// for (int j = 1; j < arrPoint[i].Length; ++j)
		int32_t L_111 = V_3;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_112 = __this->get_arrPoint_9();
		int32_t L_113 = V_2;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_115 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_115);
		if ((((int32_t)L_111) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_115)->max_length))))))
		{
			goto IL_0187;
		}
	}
	{
		// for (int i=0; i < Gamecontroller.Instance.height /2 ; ++i)
		int32_t L_116 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
	}

IL_024c:
	{
		// for (int i=0; i < Gamecontroller.Instance.height /2 ; ++i)
		int32_t L_117 = V_2;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_118;
		L_118 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_118);
		int32_t L_119 = L_118->get_height_17();
		if ((((int32_t)L_117) < ((int32_t)((int32_t)((int32_t)L_119/(int32_t)2)))))
		{
			goto IL_00c1;
		}
	}
	{
		// if (Gamecontroller.Instance.height % 2 != 0)
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_120;
		L_120 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_120);
		int32_t L_121 = L_120->get_height_17();
		if (!((int32_t)((int32_t)L_121%(int32_t)2)))
		{
			goto IL_0359;
		}
	}
	{
		// arrPoint[Gamecontroller.Instance.height / 2] = new Vector2[Gamecontroller.Instance.width];
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_122 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_123;
		L_123 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_123);
		int32_t L_124 = L_123->get_height_17();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_125;
		L_125 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_125);
		int32_t L_126 = L_125->get_width_18();
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_127 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA_il2cpp_TypeInfo_var, (uint32_t)L_126);
		NullCheck(L_122);
		ArrayElementTypeCheck (L_122, L_127);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_124/(int32_t)2))), (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_127);
		// arrPoint[Gamecontroller.Instance.height /2][0] = new Vector2(beginGap + beginPoint.x, beginPoint.y);
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_128 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_129;
		L_129 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_129);
		int32_t L_130 = L_129->get_height_17();
		NullCheck(L_128);
		int32_t L_131 = ((int32_t)((int32_t)L_130/(int32_t)2));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_132 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		float L_133 = __this->get_beginGap_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_134 = __this->get_address_of_beginPoint_8();
		float L_135 = L_134->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_136 = __this->get_address_of_beginPoint_8();
		float L_137 = L_136->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_138;
		memset((&L_138), 0, sizeof(L_138));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_138), ((float)il2cpp_codegen_add((float)L_133, (float)L_135)), L_137, /*hidden argument*/NULL);
		NullCheck(L_132);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_138);
		// for (int j = 1; j < arrPoint[Gamecontroller.Instance.height /2].Length; ++j)
		V_4 = 1;
		goto IL_033d;
	}

IL_02d1:
	{
		// arrPoint[Gamecontroller.Instance.height / 2][j] = new Vector2(arrPoint[Gamecontroller.Instance.height / 2][0].x + Diam * j, arrPoint[Gamecontroller.Instance.height / 2][0].y);
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_139 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_140;
		L_140 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_140);
		int32_t L_141 = L_140->get_height_17();
		NullCheck(L_139);
		int32_t L_142 = ((int32_t)((int32_t)L_141/(int32_t)2));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_143 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		int32_t L_144 = V_4;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_145 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_146;
		L_146 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_146);
		int32_t L_147 = L_146->get_height_17();
		NullCheck(L_145);
		int32_t L_148 = ((int32_t)((int32_t)L_147/(int32_t)2));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_149 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		NullCheck(L_149);
		float L_150 = ((L_149)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_0();
		float L_151 = __this->get_Diam_11();
		int32_t L_152 = V_4;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_153 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_154;
		L_154 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_154);
		int32_t L_155 = L_154->get_height_17();
		NullCheck(L_153);
		int32_t L_156 = ((int32_t)((int32_t)L_155/(int32_t)2));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_157 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_157);
		float L_158 = ((L_157)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_159;
		memset((&L_159), 0, sizeof(L_159));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_159), ((float)il2cpp_codegen_add((float)L_150, (float)((float)il2cpp_codegen_multiply((float)L_151, (float)((float)((float)L_152)))))), L_158, /*hidden argument*/NULL);
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(L_144), (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_159);
		// for (int j = 1; j < arrPoint[Gamecontroller.Instance.height /2].Length; ++j)
		int32_t L_160 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)1));
	}

IL_033d:
	{
		// for (int j = 1; j < arrPoint[Gamecontroller.Instance.height /2].Length; ++j)
		int32_t L_161 = V_4;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_162 = __this->get_arrPoint_9();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_163;
		L_163 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_163);
		int32_t L_164 = L_163->get_height_17();
		NullCheck(L_162);
		int32_t L_165 = ((int32_t)((int32_t)L_164/(int32_t)2));
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_166 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		NullCheck(L_166);
		if ((((int32_t)L_161) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_166)->max_length))))))
		{
			goto IL_02d1;
		}
	}

IL_0359:
	{
		// }
		return;
	}
}
// System.Void Draw::DrawMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draw_DrawMap_m17494146A606B0C469AFAC0CC9D11B20B9EFD19F (Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// short k = 0;
		V_0 = (int16_t)0;
		// for (int i = 0; i < arrPoint.Length; ++i)
		V_1 = 0;
		goto IL_00b1;
	}

IL_0009:
	{
		// for (int j = 0; j < arrPoint[i].Length; ++j,++k)
		V_2 = 0;
		goto IL_009d;
	}

IL_0010:
	{
		// if(boxPrefab)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_boxPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0094;
		}
	}
	{
		// Hexagon h = Instantiate(boxPrefab, arrPoint[i][j], Quaternion.identity,transform).GetComponent<Hexagon>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_boxPrefab_5();
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_3 = __this->get_arrPoint_9();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_9, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11;
		L_11 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_2, L_10, L_11, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		NullCheck(L_13);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_14;
		L_14 = GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48(L_13, /*hidden argument*/GameObject_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mEBB10B5BBA7D7F5CB5944263C49857FF64EA8B48_RuntimeMethod_var);
		// h.centerPoint = arrPoint[i][j]*0.01f;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_15 = L_14;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_16 = __this->get_arrPoint_9();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_19 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_22, (0.00999999978f), /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_centerPoint_12(L_23);
		// h.transform.localPosition = arrPoint[i][j];//��Ϊ��ui
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_24 = L_15;
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_24, /*hidden argument*/NULL);
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_26 = __this->get_arrPoint_9();
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_29 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_32, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_25, L_33, /*hidden argument*/NULL);
		// h.Row = i;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_34 = L_24;
		int32_t L_35 = V_1;
		NullCheck(L_34);
		L_34->set_Row_9(L_35);
		// h.Col = j;
		int32_t L_36 = V_2;
		NullCheck(L_34);
		L_34->set_Col_10(L_36);
	}

IL_0094:
	{
		// for (int j = 0; j < arrPoint[i].Length; ++j,++k)
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		// for (int j = 0; j < arrPoint[i].Length; ++j,++k)
		int16_t L_38 = V_0;
		V_0 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1))));
	}

IL_009d:
	{
		// for (int j = 0; j < arrPoint[i].Length; ++j,++k)
		int32_t L_39 = V_2;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_40 = __this->get_arrPoint_9();
		int32_t L_41 = V_1;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_43 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// for (int i = 0; i < arrPoint.Length; ++i)
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00b1:
	{
		// for (int i = 0; i < arrPoint.Length; ++i)
		int32_t L_45 = V_1;
		Vector2U5BU5DU5BU5D_t252F05B6386843D94A2BE73CC09E43FCE3545BFD* L_46 = __this->get_arrPoint_9();
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Draw::ClearMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draw_ClearMap_mCFF8D804E8807B39FCC39017E1A9123BDE81348B (Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int itemNums = transform.childCount;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// for (int i = 0; i < itemNums; i++)
		V_1 = 0;
		goto IL_002a;
	}

IL_0010:
	{
		// Destroy(transform.GetChild(i).gameObject);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// for (int i = 0; i < itemNums; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = 0; i < itemNums; i++)
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Draw::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Draw__ctor_m727B7D1A20838E379907C87069CCF85B2E3A7AE9 (Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m17F5D815769AB282789095F7F7380EC95EEF84C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m17F5D815769AB282789095F7F7380EC95EEF84C4(__this, /*hidden argument*/Singleton_1__ctor_m17F5D815769AB282789095F7F7380EC95EEF84C4_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameSettingData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettingData__ctor_mC7650F83A567D56AF958FF388E8625DEF7F38FE8 (GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Color> colors = new List<Color>{new Color(92/255f, 190/255f, 228/255f)/*��ɫ*/,new Color(152/255f, 220/255f, 85/255f)/*��ɫ*/,new Color(220/255f, 101/255f, 85/255f)/*��ɫ*/,new Color(126/255f, 142/255f, 213/255f)/*����ɫ*/,
		// new Color(231/255f, 106/255f, 130/255f)/*�ۺ�ɫ*/,new Color(89/255f, 203/255f, 134/255f)/*����ɫ*/,new Color(237/255f, 150/255f, 74/255f)/*��ɫ*/,new Color(187/255f, 126/255f, 213/255f)/*����ɫ*/,
		// new Color(255/255f, 198/255f, 62/255f)/*�Ȼ�ɫ*/,new Color(73/255f, 124/255f, 244/255f)/*����ɫ*/};
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_0 = (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E *)il2cpp_codegen_object_new(List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E_il2cpp_TypeInfo_var);
		List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1(L_0, /*hidden argument*/List_1__ctor_mB2F7CCB002CAC8ADE6AAC80A37E8AA25DEA75AE1_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_1 = L_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_2), (0.360784322f), (0.745098054f), (0.894117653f), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_1, L_2, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_3 = L_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_4), (0.596078455f), (0.862745106f), (0.333333343f), /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_3, L_4, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_5 = L_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_6), (0.862745106f), (0.396078438f), (0.333333343f), /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_5, L_6, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_7 = L_5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_8), (0.494117647f), (0.556862772f), (0.835294127f), /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_7, L_8, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_9 = L_7;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_10), (0.905882359f), (0.41568628f), (0.509803951f), /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_9, L_10, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_11 = L_9;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_12), (0.349019617f), (0.796078444f), (0.525490224f), /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_11, L_12, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_13 = L_11;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_14), (0.929411769f), (0.588235319f), (0.290196091f), /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_13, L_14, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_15 = L_13;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_16), (0.733333349f), (0.494117647f), (0.835294127f), /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_15, L_16, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_17 = L_15;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_18), (1.0f), (0.776470602f), (0.243137255f), /*hidden argument*/NULL);
		NullCheck(L_17);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_17, L_18, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_19 = L_17;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_20), (0.286274523f), (0.486274511f), (0.956862748f), /*hidden argument*/NULL);
		NullCheck(L_19);
		List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C(L_19, L_20, /*hidden argument*/List_1_Add_m77863248BCE82A014C9B7DFE859F39BF87ACE24C_RuntimeMethod_var);
		__this->set_colors_18(L_19);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Gamecontroller::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_Awake_mF94F12AA215D144D8C87A089DAF2E8000653A712 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_Awake_m988743021D568F37F70A2665E372AB0D5C83FB75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		Singleton_1_Awake_m988743021D568F37F70A2665E372AB0D5C83FB75(__this, /*hidden argument*/Singleton_1_Awake_m988743021D568F37F70A2665E372AB0D5C83FB75_RuntimeMethod_var);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamecontroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_Start_m5F63BF3D3B7B52A18841842EA5241ECB750332F1 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Gamecontroller::NumConnect(Hexagon,Hexagon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_NumConnect_m2711B2FE485C56AFB15B8394A00160C603CB0BD5 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___BePlacedBox0, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___NextCheckBox1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// List<Hexagon> hexagons = new List<Hexagon>();
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_0 = (List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 *)il2cpp_codegen_object_new(List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46_il2cpp_TypeInfo_var);
		List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F(L_0, /*hidden argument*/List_1__ctor_m86AEF64479B15A3AEAC47C7453C43F575F12111F_RuntimeMethod_var);
		V_0 = L_0;
		// hexagons.Add(BePlacedBox);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_1 = V_0;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_2 = ___BePlacedBox0;
		NullCheck(L_1);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_1, L_2, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		// CheckAroundNum(BePlacedBox.Row,BePlacedBox.Col,BePlacedBox.Number,hexagons);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_3 = ___BePlacedBox0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Row_9();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_5 = ___BePlacedBox0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_Col_10();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_7 = ___BePlacedBox0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67(L_7, /*hidden argument*/NULL);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_9 = V_0;
		Gamecontroller_CheckAroundNum_mF0C515155A7881FFF9F12DB3A8E86565BBF36224(__this, L_4, L_6, L_8, L_9, /*hidden argument*/NULL);
		// int numConnectCheckAmount = continuousNumConnectCounts != 0 ? settingData.NumConnectCheckAmount - 1 : settingData.NumConnectCheckAmount;
		int32_t L_10 = __this->get_continuousNumConnectCounts_12();
		if (L_10)
		{
			goto IL_003b;
		}
	}
	{
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_11 = __this->get_settingData_5();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_NumConnectCheckAmount_13();
		G_B3_0 = L_12;
		goto IL_0048;
	}

IL_003b:
	{
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_13 = __this->get_settingData_5();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_NumConnectCheckAmount_13();
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_0048:
	{
		V_1 = G_B3_0;
		// if (hexagons.Count >= numConnectCheckAmount)
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_15, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_00ab;
		}
	}
	{
		// for (int i = 0; i < hexagons.Count; ++i)
		V_2 = 0;
		goto IL_007c;
	}

IL_0056:
	{
		// if (hexagons[i] != BePlacedBox)
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_18 = V_0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_20;
		L_20 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_21 = ___BePlacedBox0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0078;
		}
	}
	{
		// StartCoroutine(hexagons[i].YieldClearNum());
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_23 = V_0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_25;
		L_25 = List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m86183376CF5FAFAA8F6B9372C6FEC751F8E5092E_RuntimeMethod_var);
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = Hexagon_YieldClearNum_m7ADCD90F0F2AFA5F5D405D2F14FB2CAE31278CDC(L_25, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_27;
		L_27 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_26, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// for (int i = 0; i < hexagons.Count; ++i)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_007c:
	{
		// for (int i = 0; i < hexagons.Count; ++i)
		int32_t L_29 = V_2;
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_inline(L_30, /*hidden argument*/List_1_get_Count_m3633BC00DF53C5AD56305B7AE40CE057CF561AAC_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0056;
		}
	}
	{
		// if (BePlacedBox.Number != 0)
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_32 = ___BePlacedBox0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00a4;
		}
	}
	{
		// StartCoroutine(BePlacedBox.YieldChangeNumAndCheck(BePlacedBox.Number * 2,NextCheckBox));
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_34 = ___BePlacedBox0;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_35 = ___BePlacedBox0;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67(L_35, /*hidden argument*/NULL);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_37 = ___NextCheckBox1;
		NullCheck(L_34);
		RuntimeObject* L_38;
		L_38 = Hexagon_YieldChangeNumAndCheck_mAFA3A0F376A3427A22604399A29A9AB16C4AD153(L_34, ((int32_t)il2cpp_codegen_multiply((int32_t)L_36, (int32_t)2)), L_37, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_39;
		L_39 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_38, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a4:
	{
		// else BePlacedBox.ClearNum();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_40 = ___BePlacedBox0;
		NullCheck(L_40);
		Hexagon_ClearNum_mB90277772E2A5AC9798C4C9DFE7450A7D753AE88(L_40, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ab:
	{
		// continuousNumConnectCounts = 0;
		__this->set_continuousNumConnectCounts_12(0);
		// if (NextCheckBox && NextCheckBox.Number != 0) Instance.NumConnect(NextCheckBox,null);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_41 = ___NextCheckBox1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_00ce;
		}
	}
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_43 = ___NextCheckBox1;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00ce;
		}
	}
	{
		// if (NextCheckBox && NextCheckBox.Number != 0) Instance.NumConnect(NextCheckBox,null);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_45;
		L_45 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_46 = ___NextCheckBox1;
		NullCheck(L_45);
		Gamecontroller_NumConnect_m2711B2FE485C56AFB15B8394A00160C603CB0BD5(L_45, L_46, (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *)NULL, /*hidden argument*/NULL);
	}

IL_00ce:
	{
		// if (CheckGameOver())
		bool L_47;
		L_47 = Gamecontroller_CheckGameOver_m548C808157D7D867C7ED5ABA079683FA9ADC6F92(__this, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_00ea;
		}
	}
	{
		// ButtonFucController.Instance.Revive();
		ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * L_48;
		L_48 = Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_inline(/*hidden argument*/Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_RuntimeMethod_var);
		NullCheck(L_48);
		ButtonFucController_Revive_mFD7645259D7525AB64E4F3156CB827FEE799105A(L_48, /*hidden argument*/NULL);
		// Debug.Log("GameOver");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void Gamecontroller::CheckAroundNum(System.Int32,System.Int32,System.Int32,System.Collections.Generic.List`1<Hexagon>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_CheckAroundNum_mF0C515155A7881FFF9F12DB3A8E86565BBF36224 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, int32_t ___centerRow0, int32_t ___centerCol1, int32_t ___CheckNum2, List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * ___listHexagons3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE7CAD0A0114E2ABE951778EECF36B786DE521A24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * V_0 = NULL;
	int32_t V_1 = 0;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * V_3 = NULL;
	{
		// int height = Instance.userData.arrPointData.Length;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_0;
		L_0 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_0);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_1 = L_0->get_userData_7();
		NullCheck(L_1);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_2 = L_1->get_arrPointData_4();
		NullCheck(L_2);
		// List<Vector2Int> vector2s = new List<Vector2Int>();
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_3 = (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *)il2cpp_codegen_object_new(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_il2cpp_TypeInfo_var);
		List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E(L_3, /*hidden argument*/List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_RuntimeMethod_var);
		V_0 = L_3;
		// GetAroundSixPoint(vector2s, centerRow, centerCol);
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_4 = V_0;
		int32_t L_5 = ___centerRow0;
		int32_t L_6 = ___centerCol1;
		Gamecontroller_GetAroundSixPoint_mBBF4F787955444E142C37492E3E0247D638E5FC5(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < vector2s.Count; ++i)
		V_1 = 0;
		goto IL_00cb;
	}

IL_0028:
	{
		// if (CheckPointExist(vector2s[i].x,vector2s[i].y))
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_9;
		L_9 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_2 = L_9;
		int32_t L_10;
		L_10 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_2), /*hidden argument*/NULL);
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_13;
		L_13 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_2 = L_13;
		int32_t L_14;
		L_14 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_2), /*hidden argument*/NULL);
		bool L_15;
		L_15 = Gamecontroller_CheckPointExist_mE4A95ECA02F321388EAAEFB14FE334C45544A257(__this, L_10, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00c7;
		}
	}
	{
		// Hexagon hexagon = Draw.Instance.transform.GetChild(Instance.userData.arrIndexToListIndex[vector2s[i].x][vector2s[i].y]).GetComponent<Hexagon>();
		Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * L_16;
		L_16 = Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_inline(/*hidden argument*/Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_RuntimeMethod_var);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_18;
		L_18 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_18);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_19 = L_18->get_userData_7();
		NullCheck(L_19);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_20 = L_19->get_arrIndexToListIndex_5();
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_23;
		L_23 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_2 = L_23;
		int32_t L_24;
		L_24 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_25 = L_24;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_26 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_27 = V_0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_29;
		L_29 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_27, L_28, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_2 = L_29;
		int32_t L_30;
		L_30 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_31 = L_30;
		int16_t L_32 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_17, L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_34;
		L_34 = Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23(L_33, /*hidden argument*/Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		V_3 = L_34;
		// if(CheckNum == hexagon.Number && !listHexagons.Contains(hexagon) )
		int32_t L_35 = ___CheckNum2;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_36 = V_3;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67(L_36, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_35) == ((uint32_t)L_37))))
		{
			goto IL_00c7;
		}
	}
	{
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_38 = ___listHexagons3;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_39 = V_3;
		NullCheck(L_38);
		bool L_40;
		L_40 = List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF(L_38, L_39, /*hidden argument*/List_1_Contains_mF6C61102597C66321862556E167A427A4ED58BDF_RuntimeMethod_var);
		if (L_40)
		{
			goto IL_00c7;
		}
	}
	{
		// listHexagons.Add(hexagon);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_41 = ___listHexagons3;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_42 = V_3;
		NullCheck(L_41);
		List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E(L_41, L_42, /*hidden argument*/List_1_Add_mFA5775CEDD229F0A5F3BA441FB3445EFCF0D329E_RuntimeMethod_var);
		// CheckAroundNum(hexagon.Row,hexagon.Col,hexagon.Number, listHexagons);//�ݹ�
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_43 = V_3;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_Row_9();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->get_Col_10();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_47 = V_3;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67(L_47, /*hidden argument*/NULL);
		List_1_t229BEF415FA67C672DA9C01D66200F92BDACBC46 * L_49 = ___listHexagons3;
		Gamecontroller_CheckAroundNum_mF0C515155A7881FFF9F12DB3A8E86565BBF36224(__this, L_44, L_46, L_48, L_49, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		// for (int i = 0; i < vector2s.Count; ++i)
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00cb:
	{
		// for (int i = 0; i < vector2s.Count; ++i)
		int32_t L_51 = V_1;
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_mE7CAD0A0114E2ABE951778EECF36B786DE521A24_inline(L_52, /*hidden argument*/List_1_get_Count_mE7CAD0A0114E2ABE951778EECF36B786DE521A24_RuntimeMethod_var);
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_0028;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Gamecontroller::TheNOfNumBy2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gamecontroller_TheNOfNumBy2_m61559A2DF3DB785DA7FF749575E7E5276482CF0E (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int i = 0;
		V_0 = 0;
	}

IL_0002:
	{
		// number /= 2;
		int32_t L_0 = ___number0;
		___number0 = ((int32_t)((int32_t)L_0/(int32_t)2));
		// ++i;
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		// if (number == 1) return i;
		int32_t L_2 = ___number0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0002;
		}
	}
	{
		// if (number == 1) return i;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Gamecontroller::SetLevelAndExpAndScores(System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_SetLevelAndExpAndScores_m8D0F61A3570321CEF893457D5DA31EB54C597CF4 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, float ___exp0, int32_t ___scores1, int32_t ___awards2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if ((userData.Exp+=exp)>userData.NeedExp)
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_0 = __this->get_userData_7();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_1 = L_0;
		NullCheck(L_1);
		float L_2 = L_1->get_Exp_13();
		float L_3 = ___exp0;
		float L_4 = ((float)il2cpp_codegen_add((float)L_2, (float)L_3));
		V_0 = L_4;
		NullCheck(L_1);
		L_1->set_Exp_13(L_4);
		float L_5 = V_0;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_6 = __this->get_userData_7();
		NullCheck(L_6);
		float L_7 = L_6->get_NeedExp_14();
		if ((!(((float)L_5) > ((float)L_7))))
		{
			goto IL_00b7;
		}
	}
	{
		// userData.Exp -= userData.NeedExp;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_8 = __this->get_userData_7();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_9 = L_8;
		NullCheck(L_9);
		float L_10 = L_9->get_Exp_13();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_11 = __this->get_userData_7();
		NullCheck(L_11);
		float L_12 = L_11->get_NeedExp_14();
		NullCheck(L_9);
		L_9->set_Exp_13(((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)));
		// userData.NeedExp *= settingData.expIncreaseRate;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_13 = __this->get_userData_7();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_14 = L_13;
		NullCheck(L_14);
		float L_15 = L_14->get_NeedExp_14();
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_16 = __this->get_settingData_5();
		NullCheck(L_16);
		float L_17 = L_16->get_expIncreaseRate_5();
		NullCheck(L_14);
		L_14->set_NeedExp_14(((float)il2cpp_codegen_multiply((float)L_15, (float)L_17)));
		// ++userData.Level;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_18 = __this->get_userData_7();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_Level_12();
		NullCheck(L_19);
		L_19->set_Level_12(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		// ButtonFucController.Instance.LevelUp();
		ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * L_21;
		L_21 = Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_inline(/*hidden argument*/Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_RuntimeMethod_var);
		NullCheck(L_21);
		ButtonFucController_LevelUp_m19FFC9441032ED1A07F777CB8E1ECDFA74C6A958(L_21, /*hidden argument*/NULL);
		// userData.Scores += settingData.LevelUpScores;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_22 = __this->get_userData_7();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_Scores_9();
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_25 = __this->get_settingData_5();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_LevelUpScores_11();
		NullCheck(L_23);
		L_23->set_Scores_9(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_26)));
		// userData.Awards += settingData.LevelUpAward;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_27 = __this->get_userData_7();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_28 = L_27;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_Awards_8();
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_30 = __this->get_settingData_5();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_LevelUpAward_8();
		NullCheck(L_28);
		L_28->set_Awards_8(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_31)));
	}

IL_00b7:
	{
		// userData.Scores += scores;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_32 = __this->get_userData_7();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34 = L_33->get_Scores_9();
		int32_t L_35 = ___scores1;
		NullCheck(L_33);
		L_33->set_Scores_9(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35)));
		// userData.Awards += awards;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_36 = __this->get_userData_7();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_37 = L_36;
		NullCheck(L_37);
		int32_t L_38 = L_37->get_Awards_8();
		int32_t L_39 = ___awards2;
		NullCheck(L_37);
		L_37->set_Awards_8(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)L_39)));
		// }
		return;
	}
}
// System.Boolean Gamecontroller::CheckGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gamecontroller_CheckGameOver_m548C808157D7D867C7ED5ABA079683FA9ADC6F92 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m103CC2425123E3119A2C7865BAB43403D3598F99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA3250ABD65BCE9348473F2B3898AC487E6FCDFCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// CheckMapData();
		Gamecontroller_CheckMapData_m1EF38451300A09416B98F4837CF52FC5D21A9575(__this, /*hidden argument*/NULL);
		// for (int i = 0; i < RandomNumberController.Instance.states.Count; i++)
		V_0 = 0;
		goto IL_005f;
	}

IL_000a:
	{
		// switch (RandomNumberController.Instance.states[i])
		RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * L_0;
		L_0 = Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_inline(/*hidden argument*/Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_tB728C84B38500C9451A333E63EED455678C9A664 * L_1 = L_0->get_states_13();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_get_Item_mA3250ABD65BCE9348473F2B3898AC487E6FCDFCF_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_mA3250ABD65BCE9348473F2B3898AC487E6FCDFCF_RuntimeMethod_var);
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_005b;
	}

IL_0033:
	{
		// if (IsExistSingleInMap)
		bool L_5 = __this->get_IsExistSingleInMap_11();
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003d:
	{
		// if (IsExistLeftUpInMap)
		bool L_6 = __this->get_IsExistLeftUpInMap_8();
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// if (IsExistMidTwoInMap)
		bool L_7 = __this->get_IsExistMidTwoInMap_10();
		if (!L_7)
		{
			goto IL_005b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0051:
	{
		// if (IsExistRightUpInMap)
		bool L_8 = __this->get_IsExistRightUpInMap_9();
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_005b:
	{
		// for (int i = 0; i < RandomNumberController.Instance.states.Count; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_005f:
	{
		// for (int i = 0; i < RandomNumberController.Instance.states.Count; i++)
		int32_t L_10 = V_0;
		RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * L_11;
		L_11 = Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_inline(/*hidden argument*/Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_tB728C84B38500C9451A333E63EED455678C9A664 * L_12 = L_11->get_states_13();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m103CC2425123E3119A2C7865BAB43403D3598F99_inline(L_12, /*hidden argument*/List_1_get_Count_m103CC2425123E3119A2C7865BAB43403D3598F99_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_13)))
		{
			goto IL_000a;
		}
	}
	{
		// return RandomNumberController.Instance.states.Count==0? false: true;
		RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * L_14;
		L_14 = Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_inline(/*hidden argument*/Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		NullCheck(L_14);
		List_1_tB728C84B38500C9451A333E63EED455678C9A664 * L_15 = L_14->get_states_13();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_m103CC2425123E3119A2C7865BAB43403D3598F99_inline(L_15, /*hidden argument*/List_1_get_Count_m103CC2425123E3119A2C7865BAB43403D3598F99_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0084;
		}
	}
	{
		return (bool)1;
	}

IL_0084:
	{
		return (bool)0;
	}
}
// System.Void Gamecontroller::CheckMapData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_CheckMapData_m1EF38451300A09416B98F4837CF52FC5D21A9575 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * V_2 = NULL;
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// IsExistLeftUpInMap = false; IsExistRightUpInMap = false; IsExistMidTwoInMap = false; IsExistSingleInMap = false;
		__this->set_IsExistLeftUpInMap_8((bool)0);
		// IsExistLeftUpInMap = false; IsExistRightUpInMap = false; IsExistMidTwoInMap = false; IsExistSingleInMap = false;
		__this->set_IsExistRightUpInMap_9((bool)0);
		// IsExistLeftUpInMap = false; IsExistRightUpInMap = false; IsExistMidTwoInMap = false; IsExistSingleInMap = false;
		__this->set_IsExistMidTwoInMap_10((bool)0);
		// IsExistLeftUpInMap = false; IsExistRightUpInMap = false; IsExistMidTwoInMap = false; IsExistSingleInMap = false;
		__this->set_IsExistSingleInMap_11((bool)0);
		// for (int i = 0; i < userData.arrPointData.Length; ++i)
		V_0 = 0;
		goto IL_02b2;
	}

IL_0023:
	{
		// for (int j = 0; j < userData.arrPointData[i].Length; ++j)
		V_1 = 0;
		goto IL_0299;
	}

IL_002a:
	{
		// if (userData.arrPointData[i][j] == 0)//��λ��
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_0 = __this->get_userData_7();
		NullCheck(L_0);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_1 = L_0->get_arrPointData_4();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if (L_7)
		{
			goto IL_0295;
		}
	}
	{
		// List<Vector2Int> vector2s = new List<Vector2Int>();
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_8 = (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD *)il2cpp_codegen_object_new(List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD_il2cpp_TypeInfo_var);
		List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E(L_8, /*hidden argument*/List_1__ctor_m39920F1ED9CD1FC3A40309F9318BD00B941C1C7E_RuntimeMethod_var);
		V_2 = L_8;
		// GetAroundSixPoint(vector2s, i, j);
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_9 = V_2;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		Gamecontroller_GetAroundSixPoint_mBBF4F787955444E142C37492E3E0247D638E5FC5(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
		// if (!IsExistLeftUpInMap)
		bool L_12 = __this->get_IsExistLeftUpInMap_8();
		if (L_12)
		{
			goto IL_0105;
		}
	}
	{
		// if ((CheckPointExist(vector2s[0].x,vector2s[0].y)&& userData.arrPointData[vector2s[0].x][vector2s[0].y]==0)||
		//     (CheckPointExist(vector2s[3].x, vector2s[3].y) && userData.arrPointData[vector2s[3].x][vector2s[3].y] == 0))
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_13 = V_2;
		NullCheck(L_13);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_14;
		L_14 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_13, 0, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_14;
		int32_t L_15;
		L_15 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_16 = V_2;
		NullCheck(L_16);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_17;
		L_17 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_16, 0, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_17;
		int32_t L_18;
		L_18 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		bool L_19;
		L_19 = Gamecontroller_CheckPointExist_mE4A95ECA02F321388EAAEFB14FE334C45544A257(__this, L_15, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ab;
		}
	}
	{
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_20 = __this->get_userData_7();
		NullCheck(L_20);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_21 = L_20->get_arrPointData_4();
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_22 = V_2;
		NullCheck(L_22);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_23;
		L_23 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_22, 0, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_23;
		int32_t L_24;
		L_24 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_25 = L_24;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_27 = V_2;
		NullCheck(L_27);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_28;
		L_28 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_27, 0, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_28;
		int32_t L_29;
		L_29 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if (!L_31)
		{
			goto IL_00fe;
		}
	}

IL_00ab:
	{
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_32 = V_2;
		NullCheck(L_32);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_33;
		L_33 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_32, 3, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_33;
		int32_t L_34;
		L_34 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_35 = V_2;
		NullCheck(L_35);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_36;
		L_36 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_35, 3, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_36;
		int32_t L_37;
		L_37 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		bool L_38;
		L_38 = Gamecontroller_CheckPointExist_mE4A95ECA02F321388EAAEFB14FE334C45544A257(__this, L_34, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0105;
		}
	}
	{
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_39 = __this->get_userData_7();
		NullCheck(L_39);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_40 = L_39->get_arrPointData_4();
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_41 = V_2;
		NullCheck(L_41);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_42;
		L_42 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_41, 3, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_42;
		int32_t L_43;
		L_43 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_40);
		int32_t L_44 = L_43;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_46 = V_2;
		NullCheck(L_46);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_47;
		L_47 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_46, 3, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_47;
		int32_t L_48;
		L_48 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_45);
		int32_t L_49 = L_48;
		int32_t L_50 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if (L_50)
		{
			goto IL_0105;
		}
	}

IL_00fe:
	{
		// IsExistLeftUpInMap = true;
		__this->set_IsExistLeftUpInMap_8((bool)1);
	}

IL_0105:
	{
		// if (!IsExistMidTwoInMap)
		bool L_51 = __this->get_IsExistMidTwoInMap_10();
		if (L_51)
		{
			goto IL_01bd;
		}
	}
	{
		// if ((CheckPointExist(vector2s[4].x, vector2s[4].y) && userData.arrPointData[vector2s[4].x][vector2s[4].y] == 0) ||
		//     (CheckPointExist(vector2s[5].x, vector2s[5].y) && userData.arrPointData[vector2s[5].x][vector2s[5].y] == 0))
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_52 = V_2;
		NullCheck(L_52);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_53;
		L_53 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_52, 4, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_53;
		int32_t L_54;
		L_54 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_55 = V_2;
		NullCheck(L_55);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_56;
		L_56 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_55, 4, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_56;
		int32_t L_57;
		L_57 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		bool L_58;
		L_58 = Gamecontroller_CheckPointExist_mE4A95ECA02F321388EAAEFB14FE334C45544A257(__this, L_54, L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0163;
		}
	}
	{
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_59 = __this->get_userData_7();
		NullCheck(L_59);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_60 = L_59->get_arrPointData_4();
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_61 = V_2;
		NullCheck(L_61);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_62;
		L_62 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_61, 4, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_62;
		int32_t L_63;
		L_63 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_60);
		int32_t L_64 = L_63;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_65 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_66 = V_2;
		NullCheck(L_66);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_67;
		L_67 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_66, 4, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_67;
		int32_t L_68;
		L_68 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_65);
		int32_t L_69 = L_68;
		int32_t L_70 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		if (!L_70)
		{
			goto IL_01b6;
		}
	}

IL_0163:
	{
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_71 = V_2;
		NullCheck(L_71);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_72;
		L_72 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_71, 5, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_72;
		int32_t L_73;
		L_73 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_74 = V_2;
		NullCheck(L_74);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_75;
		L_75 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_74, 5, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_75;
		int32_t L_76;
		L_76 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		bool L_77;
		L_77 = Gamecontroller_CheckPointExist_mE4A95ECA02F321388EAAEFB14FE334C45544A257(__this, L_73, L_76, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_01bd;
		}
	}
	{
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_78 = __this->get_userData_7();
		NullCheck(L_78);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_79 = L_78->get_arrPointData_4();
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_80 = V_2;
		NullCheck(L_80);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_81;
		L_81 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_80, 5, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_81;
		int32_t L_82;
		L_82 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_79);
		int32_t L_83 = L_82;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_84 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_85 = V_2;
		NullCheck(L_85);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_86;
		L_86 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_85, 5, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_86;
		int32_t L_87;
		L_87 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_84);
		int32_t L_88 = L_87;
		int32_t L_89 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		if (L_89)
		{
			goto IL_01bd;
		}
	}

IL_01b6:
	{
		// IsExistMidTwoInMap = true;
		__this->set_IsExistMidTwoInMap_10((bool)1);
	}

IL_01bd:
	{
		// if (!IsExistRightUpInMap)
		bool L_90 = __this->get_IsExistRightUpInMap_9();
		if (L_90)
		{
			goto IL_0275;
		}
	}
	{
		// if ((CheckPointExist(vector2s[1].x, vector2s[1].y) && userData.arrPointData[vector2s[1].x][vector2s[1].y] == 0) ||
		//     (CheckPointExist(vector2s[2].x, vector2s[2].y) && userData.arrPointData[vector2s[2].x][vector2s[2].y] == 0))
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_91 = V_2;
		NullCheck(L_91);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_92;
		L_92 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_91, 1, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_92;
		int32_t L_93;
		L_93 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_94 = V_2;
		NullCheck(L_94);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_95;
		L_95 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_94, 1, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_95;
		int32_t L_96;
		L_96 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		bool L_97;
		L_97 = Gamecontroller_CheckPointExist_mE4A95ECA02F321388EAAEFB14FE334C45544A257(__this, L_93, L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_021b;
		}
	}
	{
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_98 = __this->get_userData_7();
		NullCheck(L_98);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_99 = L_98->get_arrPointData_4();
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_100 = V_2;
		NullCheck(L_100);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_101;
		L_101 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_100, 1, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_101;
		int32_t L_102;
		L_102 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_99);
		int32_t L_103 = L_102;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_104 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_105 = V_2;
		NullCheck(L_105);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_106;
		L_106 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_105, 1, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_106;
		int32_t L_107;
		L_107 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_104);
		int32_t L_108 = L_107;
		int32_t L_109 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		if (!L_109)
		{
			goto IL_026e;
		}
	}

IL_021b:
	{
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_110 = V_2;
		NullCheck(L_110);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_111;
		L_111 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_110, 2, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_111;
		int32_t L_112;
		L_112 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_113 = V_2;
		NullCheck(L_113);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_114;
		L_114 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_113, 2, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_114;
		int32_t L_115;
		L_115 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		bool L_116;
		L_116 = Gamecontroller_CheckPointExist_mE4A95ECA02F321388EAAEFB14FE334C45544A257(__this, L_112, L_115, /*hidden argument*/NULL);
		if (!L_116)
		{
			goto IL_0275;
		}
	}
	{
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_117 = __this->get_userData_7();
		NullCheck(L_117);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_118 = L_117->get_arrPointData_4();
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_119 = V_2;
		NullCheck(L_119);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_120;
		L_120 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_119, 2, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_120;
		int32_t L_121;
		L_121 = Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_118);
		int32_t L_122 = L_121;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_123 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_124 = V_2;
		NullCheck(L_124);
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_125;
		L_125 = List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_inline(L_124, 2, /*hidden argument*/List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_RuntimeMethod_var);
		V_3 = L_125;
		int32_t L_126;
		L_126 = Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline((Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_123);
		int32_t L_127 = L_126;
		int32_t L_128 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		if (L_128)
		{
			goto IL_0275;
		}
	}

IL_026e:
	{
		// IsExistRightUpInMap = true;
		__this->set_IsExistRightUpInMap_9((bool)1);
	}

IL_0275:
	{
		// IsExistSingleInMap = true;
		__this->set_IsExistSingleInMap_11((bool)1);
		// if (IsExistLeftUpInMap && IsExistMidTwoInMap && IsExistRightUpInMap) return;
		bool L_129 = __this->get_IsExistLeftUpInMap_8();
		if (!L_129)
		{
			goto IL_0295;
		}
	}
	{
		bool L_130 = __this->get_IsExistMidTwoInMap_10();
		if (!L_130)
		{
			goto IL_0295;
		}
	}
	{
		bool L_131 = __this->get_IsExistRightUpInMap_9();
		if (!L_131)
		{
			goto IL_0295;
		}
	}
	{
		// if (IsExistLeftUpInMap && IsExistMidTwoInMap && IsExistRightUpInMap) return;
		return;
	}

IL_0295:
	{
		// for (int j = 0; j < userData.arrPointData[i].Length; ++j)
		int32_t L_132 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1));
	}

IL_0299:
	{
		// for (int j = 0; j < userData.arrPointData[i].Length; ++j)
		int32_t L_133 = V_1;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_134 = __this->get_userData_7();
		NullCheck(L_134);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_135 = L_134->get_arrPointData_4();
		int32_t L_136 = V_0;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_138 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_138);
		if ((((int32_t)L_133) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_138)->max_length))))))
		{
			goto IL_002a;
		}
	}
	{
		// for (int i = 0; i < userData.arrPointData.Length; ++i)
		int32_t L_139 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1));
	}

IL_02b2:
	{
		// for (int i = 0; i < userData.arrPointData.Length; ++i)
		int32_t L_140 = V_0;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_141 = __this->get_userData_7();
		NullCheck(L_141);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_142 = L_141->get_arrPointData_4();
		NullCheck(L_142);
		if ((((int32_t)L_140) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_142)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Gamecontroller::GetAroundSixPoint(System.Collections.Generic.List`1<UnityEngine.Vector2Int>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_GetAroundSixPoint_mBBF4F787955444E142C37492E3E0247D638E5FC5 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * ___vector2s0, int32_t ___centerRow1, int32_t ___centerCol2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int height = Instance.userData.arrPointData.Length;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_0;
		L_0 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_0);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_1 = L_0->get_userData_7();
		NullCheck(L_1);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_2 = L_1->get_arrPointData_4();
		NullCheck(L_2);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		// if (centerRow > height / 2)
		int32_t L_3 = ___centerRow1;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)((int32_t)L_4/(int32_t)2)))))
		{
			goto IL_005d;
		}
	}
	{
		// vector2s.Add(new Vector2Int(centerRow - 1, centerCol));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_5 = ___vector2s0;
		int32_t L_6 = ___centerRow1;
		int32_t L_7 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_8), ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_5, L_8, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// vector2s.Add(new Vector2Int(centerRow - 1, centerCol + 1));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_9 = ___vector2s0;
		int32_t L_10 = ___centerRow1;
		int32_t L_11 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_12), ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_9, L_12, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// vector2s.Add(new Vector2Int(centerRow + 1, centerCol));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_13 = ___vector2s0;
		int32_t L_14 = ___centerRow1;
		int32_t L_15 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_16), ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_13, L_16, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// vector2s.Add(new Vector2Int(centerRow + 1, centerCol - 1));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_17 = ___vector2s0;
		int32_t L_18 = ___centerRow1;
		int32_t L_19 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_20), ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_17);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_17, L_20, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// }
		goto IL_00e5;
	}

IL_005d:
	{
		// else if (centerRow < height / 2)
		int32_t L_21 = ___centerRow1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)((int32_t)L_22/(int32_t)2)))))
		{
			goto IL_00a5;
		}
	}
	{
		// vector2s.Add(new Vector2Int(centerRow - 1, centerCol - 1));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_23 = ___vector2s0;
		int32_t L_24 = ___centerRow1;
		int32_t L_25 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_26), ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_23);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_23, L_26, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// vector2s.Add(new Vector2Int(centerRow - 1, centerCol));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_27 = ___vector2s0;
		int32_t L_28 = ___centerRow1;
		int32_t L_29 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_30), ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_27, L_30, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// vector2s.Add(new Vector2Int(centerRow + 1, centerCol));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_31 = ___vector2s0;
		int32_t L_32 = ___centerRow1;
		int32_t L_33 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_34), ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)), L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_31, L_34, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// vector2s.Add(new Vector2Int(centerRow + 1, centerCol + 1));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_35 = ___vector2s0;
		int32_t L_36 = ___centerRow1;
		int32_t L_37 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_38), ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)), ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_35);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_35, L_38, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// }
		goto IL_00e5;
	}

IL_00a5:
	{
		// vector2s.Add(new Vector2Int(centerRow - 1, centerCol - 1));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_39 = ___vector2s0;
		int32_t L_40 = ___centerRow1;
		int32_t L_41 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_42), ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_39);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_39, L_42, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// vector2s.Add(new Vector2Int(centerRow - 1, centerCol));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_43 = ___vector2s0;
		int32_t L_44 = ___centerRow1;
		int32_t L_45 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_46), ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1)), L_45, /*hidden argument*/NULL);
		NullCheck(L_43);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_43, L_46, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// vector2s.Add(new Vector2Int(centerRow + 1, centerCol - 1));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_47 = ___vector2s0;
		int32_t L_48 = ___centerRow1;
		int32_t L_49 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_50), ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_47);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_47, L_50, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// vector2s.Add(new Vector2Int(centerRow + 1, centerCol));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_51 = ___vector2s0;
		int32_t L_52 = ___centerRow1;
		int32_t L_53 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_54), ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)), L_53, /*hidden argument*/NULL);
		NullCheck(L_51);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_51, L_54, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
	}

IL_00e5:
	{
		// vector2s.Add(new Vector2Int(centerRow, centerCol - 1));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_55 = ___vector2s0;
		int32_t L_56 = ___centerRow1;
		int32_t L_57 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_58), L_56, ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_55);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_55, L_58, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// vector2s.Add(new Vector2Int(centerRow, centerCol + 1));
		List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * L_59 = ___vector2s0;
		int32_t L_60 = ___centerRow1;
		int32_t L_61 = ___centerCol2;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline((&L_62), L_60, ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_59);
		List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153(L_59, L_62, /*hidden argument*/List_1_Add_m135B1AA1DDF747290B2C39EE82CBF062AA247153_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Gamecontroller::CheckPointExist(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gamecontroller_CheckPointExist_mE4A95ECA02F321388EAAEFB14FE334C45544A257 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, int32_t ___row0, int32_t ___col1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int height = Instance.userData.arrPointData.Length;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_0;
		L_0 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_0);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_1 = L_0->get_userData_7();
		NullCheck(L_1);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_2 = L_1->get_arrPointData_4();
		NullCheck(L_2);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		// return row >= 0 && col >= 0 && row < height && col < Instance.userData.arrPointData[row].Length ? true : false;
		int32_t L_3 = ___row0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_4 = ___col1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = ___row0;
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = ___col1;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_8;
		L_8 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_8);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_9 = L_8->get_userData_7();
		NullCheck(L_9);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_10 = L_9->get_arrPointData_4();
		int32_t L_11 = ___row0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0036;
		}
	}

IL_0034:
	{
		return (bool)0;
	}

IL_0036:
	{
		return (bool)1;
	}
}
// System.Void Gamecontroller::ReStartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_ReStartGame_m61CE8A7D0FEA6B61ED84FF7901C01C554674BCF3 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// userData = Instantiate(userDataTemplate);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_0 = __this->get_userDataTemplate_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_1;
		L_1 = Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441(L_0, /*hidden argument*/Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441_RuntimeMethod_var);
		__this->set_userData_7(L_1);
		// InitData();
		Gamecontroller_InitData_m0F0EEF3C0ABA5C904BE3482182D444314BFD7CE3(__this, /*hidden argument*/NULL);
		// InitArrData();
		Gamecontroller_InitArrData_m5EB083EF1F1D78272C7A79D154586FD6609CBD3A(__this, /*hidden argument*/NULL);
		// UIController.Instance.SetFreshPaid(settingData.InitNeedFreshAward);
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_2;
		L_2 = Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_inline(/*hidden argument*/Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_3 = __this->get_settingData_5();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_InitNeedFreshAward_14();
		NullCheck(L_2);
		UIController_SetFreshPaid_m4DA5263652CE4A0C3071BDE3A50037054BD2A9CB(L_2, L_4, /*hidden argument*/NULL);
		// UIController.Instance.SetTransPaid(settingData.InitNeedTransAward);
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_5;
		L_5 = Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_inline(/*hidden argument*/Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_6 = __this->get_settingData_5();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_InitNeedTransAward_15();
		NullCheck(L_5);
		UIController_SetTransPaid_mF792C601586083069F3F784888F5465778A3C74D(L_5, L_7, /*hidden argument*/NULL);
		// Draw.Instance.NewMap();
		Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * L_8;
		L_8 = Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_inline(/*hidden argument*/Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_RuntimeMethod_var);
		NullCheck(L_8);
		Draw_NewMap_m79625DA1B0F711ED568F37B4C89308F76E7E6FA1(L_8, /*hidden argument*/NULL);
		// RandomNumberController.Instance.RandomThreeNumberGroup();
		RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * L_9;
		L_9 = Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_inline(/*hidden argument*/Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		NullCheck(L_9);
		RandomNumberController_RandomThreeNumberGroup_m37604645F2BD44680A525C5BC5C287E9AFB149E3(L_9, /*hidden argument*/NULL);
		// ButtonFucController.Instance.ClosePausePage();
		ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * L_10;
		L_10 = Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_inline(/*hidden argument*/Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_RuntimeMethod_var);
		NullCheck(L_10);
		ButtonFucController_ClosePausePage_mEF28C67CEBC7A54D06F5D16681B2B5CC713E1F4A(L_10, /*hidden argument*/NULL);
		// ButtonFucController.Instance.CloseGameOverPage();
		ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * L_11;
		L_11 = Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_inline(/*hidden argument*/Singleton_1_get_Instance_mA39CBBAB8378FB03C0974CE263324C20509E0B8A_RuntimeMethod_var);
		NullCheck(L_11);
		ButtonFucController_CloseGameOverPage_m0C8D4FFCA2F64A43C260AFEB6667A197006A89A2(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamecontroller::Home()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_Home_m1AFCB0B1DE0140FB48CFE179CCBE592307D80FD9 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SaveNowData();
		Gamecontroller_SaveNowData_mC7780376852782558BB9571D64EB73E2A8500E9D(__this, /*hidden argument*/NULL);
		// SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex - 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_2;
		L_2 = SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamecontroller::InitData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_InitData_m0F0EEF3C0ABA5C904BE3482182D444314BFD7CE3 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	{
		// if (settingData.NumConnectCheckAmount == 0)
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_0 = __this->get_settingData_5();
		NullCheck(L_0);
		int32_t L_1 = L_0->get_NumConnectCheckAmount_13();
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		// settingData.NumConnectCheckAmount = 2;
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_2 = __this->get_settingData_5();
		NullCheck(L_2);
		L_2->set_NumConnectCheckAmount_13(2);
	}

IL_0019:
	{
		// continuousNumConnectCounts = 0;
		__this->set_continuousNumConnectCounts_12(0);
		// randomCounts = 0;
		__this->set_randomCounts_15(0);
		// userData.TransNeedAwards = settingData.InitNeedTransAward;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_3 = __this->get_userData_7();
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_4 = __this->get_settingData_5();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_InitNeedTransAward_15();
		NullCheck(L_3);
		L_3->set_TransNeedAwards_11(L_5);
		// userData.RefreshNeedAwards = settingData.InitNeedFreshAward;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_6 = __this->get_userData_7();
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_7 = __this->get_settingData_5();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_InitNeedFreshAward_14();
		NullCheck(L_6);
		L_6->set_RefreshNeedAwards_10(L_8);
		// userData.NeedExp = settingData.initExp * Mathf.Pow(settingData.expIncreaseRate, userData.Level);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_9 = __this->get_userData_7();
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_10 = __this->get_settingData_5();
		NullCheck(L_10);
		float L_11 = L_10->get_initExp_4();
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_12 = __this->get_settingData_5();
		NullCheck(L_12);
		float L_13 = L_12->get_expIncreaseRate_5();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_14 = __this->get_userData_7();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_Level_12();
		float L_16;
		L_16 = powf(L_13, ((float)((float)L_15)));
		NullCheck(L_9);
		L_9->set_NeedExp_14(((float)il2cpp_codegen_multiply((float)L_11, (float)L_16)));
		// currentMax = (int)Mathf.Pow(2, settingData.INitMaxOfRandomRange);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_17 = __this->get_settingData_5();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_INitMaxOfRandomRange_16();
		float L_19;
		L_19 = powf((2.0f), ((float)((float)L_18)));
		__this->set_currentMax_14(il2cpp_codegen_cast_double_to_int<int32_t>(L_19));
		// currentMin = (int)Mathf.Pow(2, settingData.INitMinOfRandomRange);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_20 = __this->get_settingData_5();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_INitMinOfRandomRange_17();
		float L_22;
		L_22 = powf((2.0f), ((float)((float)L_21)));
		__this->set_currentMin_13(il2cpp_codegen_cast_double_to_int<int32_t>(L_22));
		// }
		return;
	}
}
// System.Void Gamecontroller::SaveNowData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_SaveNowData_mC7780376852782558BB9571D64EB73E2A8500E9D (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EB3ABCEBF8AD992C5504A03E22528C469F4F111);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// PlayerPrefs.SetString("Player", JsonUtility.ToJson(userData));
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_0 = __this->get_userData_7();
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_0, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, L_1, /*hidden argument*/NULL);
		// for(int i = 0; i < 3; ++i)
		V_0 = 0;
		goto IL_0045;
	}

IL_0019:
	{
		// PlayerPrefs.SetString("Random" + i, JsonUtility.ToJson(userData.CurrentRandomGroup[i]));
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0EB3ABCEBF8AD992C5504A03E22528C469F4F111, L_2, /*hidden argument*/NULL);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_4 = __this->get_userData_7();
		NullCheck(L_4);
		NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22* L_5 = L_4->get_CurrentRandomGroup_15();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		String_t* L_9;
		L_9 = JsonUtility_ToJson_mF4F097C9AEC7699970E3E7E99EF8FF2F44DA1B5C(L_8, /*hidden argument*/NULL);
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(L_3, L_9, /*hidden argument*/NULL);
		// for(int i = 0; i < 3; ++i)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0045:
	{
		// for(int i = 0; i < 3; ++i)
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)3)))
		{
			goto IL_0019;
		}
	}
	{
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamecontroller::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_LoadData_m3F8680867D65A2AA9B5042BC03E044692B794D43 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (userDataTemplate) userData = Instantiate(userDataTemplate);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_0 = __this->get_userDataTemplate_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (userDataTemplate) userData = Instantiate(userDataTemplate);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_2 = __this->get_userDataTemplate_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_3;
		L_3 = Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441(L_2, /*hidden argument*/Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441_RuntimeMethod_var);
		__this->set_userData_7(L_3);
	}

IL_001e:
	{
		// if (PlayerPrefs.HasKey("Player"))
		bool L_4;
		L_4 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// JsonUtility.FromJsonOverwrite(PlayerPrefs.GetString("Player"), userData);
		String_t* L_5;
		L_5 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_6 = __this->get_userData_7();
		JsonUtility_FromJsonOverwrite_mC97C7C909591A29E72361FB5DBC1A58EEE6DBAEB(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// Debug.Log(userData.ListData.Count);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_7 = __this->get_userData_7();
		NullCheck(L_7);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_8 = L_7->get_ListData_6();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_8, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_11, /*hidden argument*/NULL);
		// Debug.Log(userData.ListData[0]);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_12 = __this->get_userData_7();
		NullCheck(L_12);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_13 = L_12->get_ListData_6();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_13, 0, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_15);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_16, /*hidden argument*/NULL);
		// InitArrData();
		Gamecontroller_InitArrData_m5EB083EF1F1D78272C7A79D154586FD6609CBD3A(__this, /*hidden argument*/NULL);
		// InitData();
		Gamecontroller_InitData_m0F0EEF3C0ABA5C904BE3482182D444314BFD7CE3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamecontroller::DeleteAllData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_DeleteAllData_m51CC445132822C63A6E3DCEDC9CD159E77D2B82D (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamecontroller::InitArrData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller_InitArrData_m5EB083EF1F1D78272C7A79D154586FD6609CBD3A (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	int16_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// userData.arrPointData = new int[Instance.height][];//������������
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_0 = __this->get_userData_7();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_1;
		L_1 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_height_17();
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_3 = (Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF*)SZArrayNew(Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF_il2cpp_TypeInfo_var, (uint32_t)L_2);
		NullCheck(L_0);
		L_0->set_arrPointData_4(L_3);
		// userData.arrIndexToListIndex = new short[height][];//������������
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_4 = __this->get_userData_7();
		int32_t L_5 = __this->get_height_17();
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_6 = (Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77*)(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77*)SZArrayNew(Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77_il2cpp_TypeInfo_var, (uint32_t)L_5);
		NullCheck(L_4);
		L_4->set_arrIndexToListIndex_5(L_6);
		// for (int i = 0; i < height / 2; ++i)
		V_1 = 0;
		goto IL_00d9;
	}

IL_0037:
	{
		// userData.arrPointData[i] = new int[width - height / 2 + i];
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_7 = __this->get_userData_7();
		NullCheck(L_7);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_8 = L_7->get_arrPointData_4();
		int32_t L_9 = V_1;
		int32_t L_10 = __this->get_width_18();
		int32_t L_11 = __this->get_height_17();
		int32_t L_12 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)((int32_t)L_11/(int32_t)2)))), (int32_t)L_12)));
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_13);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_13);
		// userData.arrIndexToListIndex[i] = new short[width - height / 2 + i];
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_14 = __this->get_userData_7();
		NullCheck(L_14);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_15 = L_14->get_arrIndexToListIndex_5();
		int32_t L_16 = V_1;
		int32_t L_17 = __this->get_width_18();
		int32_t L_18 = __this->get_height_17();
		int32_t L_19 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)((int32_t)((int32_t)L_18/(int32_t)2)))), (int32_t)L_19)));
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_20);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_20);
		// userData.arrPointData[height - 1 - i] = new int[width - height / 2 + i];
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_21 = __this->get_userData_7();
		NullCheck(L_21);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_22 = L_21->get_arrPointData_4();
		int32_t L_23 = __this->get_height_17();
		int32_t L_24 = V_1;
		int32_t L_25 = __this->get_width_18();
		int32_t L_26 = __this->get_height_17();
		int32_t L_27 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)((int32_t)((int32_t)L_26/(int32_t)2)))), (int32_t)L_27)));
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_28);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)), (int32_t)L_24))), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_28);
		// userData.arrIndexToListIndex[height - 1 - i] = new short[width - height / 2 + i];
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_29 = __this->get_userData_7();
		NullCheck(L_29);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_30 = L_29->get_arrIndexToListIndex_5();
		int32_t L_31 = __this->get_height_17();
		int32_t L_32 = V_1;
		int32_t L_33 = __this->get_width_18();
		int32_t L_34 = __this->get_height_17();
		int32_t L_35 = V_1;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_36 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)((int32_t)((int32_t)L_34/(int32_t)2)))), (int32_t)L_35)));
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_36);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1)), (int32_t)L_32))), (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_36);
		// for (int i = 0; i < height / 2; ++i)
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00d9:
	{
		// for (int i = 0; i < height / 2; ++i)
		int32_t L_38 = V_1;
		int32_t L_39 = __this->get_height_17();
		if ((((int32_t)L_38) < ((int32_t)((int32_t)((int32_t)L_39/(int32_t)2)))))
		{
			goto IL_0037;
		}
	}
	{
		// if (height % 2 != 0)
		int32_t L_40 = __this->get_height_17();
		if (!((int32_t)((int32_t)L_40%(int32_t)2)))
		{
			goto IL_012f;
		}
	}
	{
		// userData.arrPointData[height / 2] = new int[width];
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_41 = __this->get_userData_7();
		NullCheck(L_41);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_42 = L_41->get_arrPointData_4();
		int32_t L_43 = __this->get_height_17();
		int32_t L_44 = __this->get_width_18();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_44);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_45);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_43/(int32_t)2))), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_45);
		// userData.arrIndexToListIndex[height / 2] = new short[width];
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_46 = __this->get_userData_7();
		NullCheck(L_46);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_47 = L_46->get_arrIndexToListIndex_5();
		int32_t L_48 = __this->get_height_17();
		int32_t L_49 = __this->get_width_18();
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_50 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)L_49);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_50);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_48/(int32_t)2))), (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)L_50);
	}

IL_012f:
	{
		// bool IsExist=false;
		V_0 = (bool)0;
		// if (userData.ListData.Count != 0) IsExist = true;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_51 = __this->get_userData_7();
		NullCheck(L_51);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_52 = L_51->get_ListData_6();
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_52, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if (!L_53)
		{
			goto IL_0145;
		}
	}
	{
		// if (userData.ListData.Count != 0) IsExist = true;
		V_0 = (bool)1;
	}

IL_0145:
	{
		// for (short i = 0,k=0; i < userData.arrPointData.Length; ++i)
		V_2 = (int16_t)0;
		// for (short i = 0,k=0; i < userData.arrPointData.Length; ++i)
		V_3 = (int16_t)0;
		goto IL_0198;
	}

IL_014b:
	{
		// for (int j = 0; j < userData.arrPointData[i].Length; ++j,++k)
		V_4 = 0;
		goto IL_0180;
	}

IL_0150:
	{
		// userData.arrIndexToListIndex[i][j] = k;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_54 = __this->get_userData_7();
		NullCheck(L_54);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_55 = L_54->get_arrIndexToListIndex_5();
		int16_t L_56 = V_2;
		NullCheck(L_55);
		int16_t L_57 = L_56;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_58 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = V_4;
		int16_t L_60 = V_3;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (int16_t)L_60);
		// if(!IsExist)
		bool L_61 = V_0;
		if (L_61)
		{
			goto IL_0175;
		}
	}
	{
		// userData.ListData.Add(0);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_62 = __this->get_userData_7();
		NullCheck(L_62);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_63 = L_62->get_ListData_6();
		NullCheck(L_63);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_63, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_0175:
	{
		// for (int j = 0; j < userData.arrPointData[i].Length; ++j,++k)
		int32_t L_64 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		// for (int j = 0; j < userData.arrPointData[i].Length; ++j,++k)
		int16_t L_65 = V_3;
		V_3 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1))));
	}

IL_0180:
	{
		// for (int j = 0; j < userData.arrPointData[i].Length; ++j,++k)
		int32_t L_66 = V_4;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_67 = __this->get_userData_7();
		NullCheck(L_67);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_68 = L_67->get_arrPointData_4();
		int16_t L_69 = V_2;
		NullCheck(L_68);
		int16_t L_70 = L_69;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		if ((((int32_t)L_66) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length))))))
		{
			goto IL_0150;
		}
	}
	{
		// for (short i = 0,k=0; i < userData.arrPointData.Length; ++i)
		int16_t L_72 = V_2;
		V_2 = ((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1))));
	}

IL_0198:
	{
		// for (short i = 0,k=0; i < userData.arrPointData.Length; ++i)
		int16_t L_73 = V_2;
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_74 = __this->get_userData_7();
		NullCheck(L_74);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_75 = L_74->get_arrPointData_4();
		NullCheck(L_75);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_014b;
		}
	}
	{
		// Debug.Log(userData.ListData.Count);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_76 = __this->get_userData_7();
		NullCheck(L_76);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_77 = L_76->get_ListData_6();
		NullCheck(L_77);
		int32_t L_78;
		L_78 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_77, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		int32_t L_79 = L_78;
		RuntimeObject * L_80 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_79);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_80, /*hidden argument*/NULL);
		// Debug.Log(userData.ListData[0]);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_81 = __this->get_userData_7();
		NullCheck(L_81);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_82 = L_81->get_ListData_6();
		NullCheck(L_82);
		int32_t L_83;
		L_83 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_82, 0, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		int32_t L_84 = L_83;
		RuntimeObject * L_85 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_84);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_85, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Gamecontroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gamecontroller__ctor_mB4EC928D7970EEE7980295345FF1C08AD9FFE264 (Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mFE1F169B3A4ACC45C77AD7FDEB8D45CA5E74A7CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_mFE1F169B3A4ACC45C77AD7FDEB8D45CA5E74A7CC(__this, /*hidden argument*/Singleton_1__ctor_mFE1F169B3A4ACC45C77AD7FDEB8D45CA5E74A7CC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Hexagon::get_Number()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Number { get { return num1.text.CompareTo("") == 0? 0 : int.Parse(num1.text); } }
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_num1_13();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_CompareTo_m01AF97548BE97133E2DC648B2E63BB16708354CF(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_num1_13();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		int32_t L_5;
		L_5 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0028:
	{
		return 0;
	}
}
// System.Void Hexagon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_Start_mA8C08C9B4AF57A53BB643688F34FD904E5926F0B (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// angle = 360 / borderNumber;
		int32_t L_0 = __this->get_borderNumber_8();
		__this->set_angle_11(((float)((float)((int32_t)((int32_t)((int32_t)360)/(int32_t)L_0)))));
		// lineDraw = GetComponent<LineRenderer>();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1;
		L_1 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		__this->set_lineDraw_7(L_1);
		// image = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2;
		L_2 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_image_14(L_2);
		// num1 = transform.GetChild(0).GetComponent<Text>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5;
		L_5 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_4, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_num1_13(L_5);
		// num1.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_num1_13();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// image.sprite = boxSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_image_14();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_boxSprite_15();
		NullCheck(L_7);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_7, L_8, /*hidden argument*/NULL);
		// image.color = Color.white;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_image_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_9, L_10);
		// IsUsed = false;
		__this->set_IsUsed_17((bool)0);
		// MyDrawBorder();
		Hexagon_MyDrawBorder_mF854DF277BA4B7FDA205EA8C306E196EB33D3B87(__this, /*hidden argument*/NULL);
		// if (Gamecontroller.Instance.userData.ListData[Gamecontroller.Instance.userData.arrIndexToListIndex[Row][Col]] != 0)
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_11;
		L_11 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_11);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_12 = L_11->get_userData_7();
		NullCheck(L_12);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_13 = L_12->get_ListData_6();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_14;
		L_14 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_14);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_15 = L_14->get_userData_7();
		NullCheck(L_15);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_16 = L_15->get_arrIndexToListIndex_5();
		int32_t L_17 = __this->get_Row_9();
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_19 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = __this->get_Col_10();
		NullCheck(L_19);
		int32_t L_21 = L_20;
		int16_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_13);
		int32_t L_23;
		L_23 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_13, L_22, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		if (!L_23)
		{
			goto IL_00ea;
		}
	}
	{
		// ChangeNum(Gamecontroller.Instance.userData.ListData[Gamecontroller.Instance.userData.arrIndexToListIndex[Row][Col]]);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_24;
		L_24 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_24);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_25 = L_24->get_userData_7();
		NullCheck(L_25);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_26 = L_25->get_ListData_6();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_27;
		L_27 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_27);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_28 = L_27->get_userData_7();
		NullCheck(L_28);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_29 = L_28->get_arrIndexToListIndex_5();
		int32_t L_30 = __this->get_Row_9();
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_32 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = __this->get_Col_10();
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int16_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_26);
		int32_t L_36;
		L_36 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_26, L_35, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		Hexagon_ChangeNum_mE543E5B0206E7857B42D9B6C81B348537C7B539C(__this, L_36, /*hidden argument*/NULL);
	}

IL_00ea:
	{
		// }
		return;
	}
}
// System.Void Hexagon::MyDrawBorder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_MyDrawBorder_mF854DF277BA4B7FDA205EA8C306E196EB33D3B87 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// lineDraw.startColor = Color.white;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_0 = __this->get_lineDraw_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_0);
		LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7(L_0, L_1, /*hidden argument*/NULL);
		// lineDraw.endColor = Color.white;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_2 = __this->get_lineDraw_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_2);
		LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2(L_2, L_3, /*hidden argument*/NULL);
		// lineDraw.positionCount = borderNumber + 1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_4 = __this->get_lineDraw_7();
		int32_t L_5 = __this->get_borderNumber_8();
		NullCheck(L_4);
		LineRenderer_set_positionCount_mA8B73AC2B9151473E94F3713E1041AA34D758AE5(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		// lineDraw.startWidth = borderWidth;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_6 = __this->get_lineDraw_7();
		float L_7 = __this->get_borderWidth_5();
		NullCheck(L_6);
		LineRenderer_set_startWidth_mD88B562DD413EE9861FB254963C7EDCB5199C1DF(L_6, L_7, /*hidden argument*/NULL);
		// lineDraw.endWidth = borderWidth;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_8 = __this->get_lineDraw_7();
		float L_9 = __this->get_borderWidth_5();
		NullCheck(L_8);
		LineRenderer_set_endWidth_m3DCD4FFCC3944DD6DC0737C8AF8C7EDB5A6CF59A(L_8, L_9, /*hidden argument*/NULL);
		// for (int i = 0; i < borderNumber + 1; ++i)
		V_0 = 0;
		goto IL_00c0;
	}

IL_0059:
	{
		// lineDraw.SetPosition(i, centerPoint + new Vector2(radius * Mathf.Cos(angle * (i + 0.5f) * Mathf.Deg2Rad), radius * Mathf.Sin(angle * (i + 0.5f) * Mathf.Deg2Rad)));
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_10 = __this->get_lineDraw_7();
		int32_t L_11 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = __this->get_centerPoint_12();
		float L_13 = __this->get_radius_4();
		float L_14 = __this->get_angle_11();
		int32_t L_15 = V_0;
		float L_16;
		L_16 = cosf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_14, (float)((float)il2cpp_codegen_add((float)((float)((float)L_15)), (float)(0.5f))))), (float)(0.0174532924f))));
		float L_17 = __this->get_radius_4();
		float L_18 = __this->get_angle_11();
		int32_t L_19 = V_0;
		float L_20;
		L_20 = sinf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_18, (float)((float)il2cpp_codegen_add((float)((float)((float)L_19)), (float)(0.5f))))), (float)(0.0174532924f))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_21), ((float)il2cpp_codegen_multiply((float)L_13, (float)L_16)), ((float)il2cpp_codegen_multiply((float)L_17, (float)L_20)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_12, L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_10);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_10, L_11, L_23, /*hidden argument*/NULL);
		// for (int i = 0; i < borderNumber + 1; ++i)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00c0:
	{
		// for (int i = 0; i < borderNumber + 1; ++i)
		int32_t L_25 = V_0;
		int32_t L_26 = __this->get_borderNumber_8();
		if ((((int32_t)L_25) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1)))))
		{
			goto IL_0059;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Hexagon::ChangeNum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_ChangeNum_mE543E5B0206E7857B42D9B6C81B348537C7B539C (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * G_B2_0 = NULL;
	Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * G_B3_1 = NULL;
	{
		// num1.text = num.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_num1_13();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___num0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// image.sprite = singleNumSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_image_14();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = __this->get_singleNumSprite_16();
		NullCheck(L_2);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_2, L_3, /*hidden argument*/NULL);
		// IsUsed = true;
		__this->set_IsUsed_17((bool)1);
		// Gamecontroller.Instance.userData.arrPointData[Row][Col] = num;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_4;
		L_4 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_4);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_5 = L_4->get_userData_7();
		NullCheck(L_5);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_6 = L_5->get_arrPointData_4();
		int32_t L_7 = __this->get_Row_9();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = __this->get_Col_10();
		int32_t L_11 = ___num0;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_11);
		// Gamecontroller.Instance.userData.ListData[Gamecontroller.Instance.userData.arrIndexToListIndex[Row][Col]] = num;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_12;
		L_12 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_12);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_13 = L_12->get_userData_7();
		NullCheck(L_13);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_14 = L_13->get_ListData_6();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_15;
		L_15 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_15);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_16 = L_15->get_userData_7();
		NullCheck(L_16);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_17 = L_16->get_arrIndexToListIndex_5();
		int32_t L_18 = __this->get_Row_9();
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = __this->get_Col_10();
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = ___num0;
		NullCheck(L_14);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_14, L_23, L_24, /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		// Gamecontroller.Instance.currentMax = Gamecontroller.Instance.currentMax > num ? Gamecontroller.Instance.currentMax : num;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_25;
		L_25 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_26;
		L_26 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_26);
		int32_t L_27 = L_26->get_currentMax_14();
		int32_t L_28 = ___num0;
		G_B1_0 = L_25;
		if ((((int32_t)L_27) > ((int32_t)L_28)))
		{
			G_B2_0 = L_25;
			goto IL_008f;
		}
	}
	{
		int32_t L_29 = ___num0;
		G_B3_0 = L_29;
		G_B3_1 = G_B1_0;
		goto IL_0099;
	}

IL_008f:
	{
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_30;
		L_30 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_30);
		int32_t L_31 = L_30->get_currentMax_14();
		G_B3_0 = L_31;
		G_B3_1 = G_B2_0;
	}

IL_0099:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_currentMax_14(G_B3_0);
		// int min = Gamecontroller.Instance.currentMax;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_32;
		L_32 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_32);
		int32_t L_33 = L_32->get_currentMax_14();
		V_0 = L_33;
		// for (int i = 0; i < Gamecontroller.Instance.userData.arrPointData.Length; ++i)
		V_1 = 0;
		goto IL_010e;
	}

IL_00ad:
	{
		// for (int j = 0; j < Gamecontroller.Instance.userData.arrPointData[i].Length; ++j)
		V_2 = 0;
		goto IL_00f4;
	}

IL_00b1:
	{
		// if (Gamecontroller.Instance.userData.arrPointData[i][j] != 0&&min> Gamecontroller.Instance.userData.arrPointData[i][j])
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_34;
		L_34 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_34);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_35 = L_34->get_userData_7();
		NullCheck(L_35);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_36 = L_35->get_arrPointData_4();
		int32_t L_37 = V_1;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if (!L_42)
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_43 = V_0;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_44;
		L_44 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_44);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_45 = L_44->get_userData_7();
		NullCheck(L_45);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_46 = L_45->get_arrPointData_4();
		int32_t L_47 = V_1;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		int32_t L_50 = V_2;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((((int32_t)L_43) <= ((int32_t)L_52)))
		{
			goto IL_00f0;
		}
	}
	{
		// min = Gamecontroller.Instance.userData.arrPointData[i][j];
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_53;
		L_53 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_53);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_54 = L_53->get_userData_7();
		NullCheck(L_54);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_55 = L_54->get_arrPointData_4();
		int32_t L_56 = V_1;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_58 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = V_2;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		int32_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_0 = L_61;
	}

IL_00f0:
	{
		// for (int j = 0; j < Gamecontroller.Instance.userData.arrPointData[i].Length; ++j)
		int32_t L_62 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_00f4:
	{
		// for (int j = 0; j < Gamecontroller.Instance.userData.arrPointData[i].Length; ++j)
		int32_t L_63 = V_2;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_64;
		L_64 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_64);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_65 = L_64->get_userData_7();
		NullCheck(L_65);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_66 = L_65->get_arrPointData_4();
		int32_t L_67 = V_1;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_69);
		if ((((int32_t)L_63) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length))))))
		{
			goto IL_00b1;
		}
	}
	{
		// for (int i = 0; i < Gamecontroller.Instance.userData.arrPointData.Length; ++i)
		int32_t L_70 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_010e:
	{
		// for (int i = 0; i < Gamecontroller.Instance.userData.arrPointData.Length; ++i)
		int32_t L_71 = V_1;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_72;
		L_72 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_72);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_73 = L_72->get_userData_7();
		NullCheck(L_73);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_74 = L_73->get_arrPointData_4();
		NullCheck(L_74);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length))))))
		{
			goto IL_00ad;
		}
	}
	{
		// Gamecontroller.Instance.currentMin = min;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_75;
		L_75 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		int32_t L_76 = V_0;
		NullCheck(L_75);
		L_75->set_currentMin_13(L_76);
		// image.color = Gamecontroller.Instance.settingData.colors[Gamecontroller.Instance.TheNOfNumBy2(Number) - 1];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_77 = __this->get_image_14();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_78;
		L_78 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_78);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_79 = L_78->get_settingData_5();
		NullCheck(L_79);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_80 = L_79->get_colors_18();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_81;
		L_81 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		int32_t L_82;
		L_82 = Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		int32_t L_83;
		L_83 = Gamecontroller_TheNOfNumBy2_m61559A2DF3DB785DA7FF749575E7E5276482CF0E(L_81, L_82, /*hidden argument*/NULL);
		NullCheck(L_80);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_84;
		L_84 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_80, ((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)1)), /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		NullCheck(L_77);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_77, L_84);
		// }
		return;
	}
}
// System.Collections.IEnumerator Hexagon::YieldChangeNumAndCheck(System.Int32,Hexagon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hexagon_YieldChangeNumAndCheck_mAFA3A0F376A3427A22604399A29A9AB16C4AD153 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, int32_t ___num0, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___NextCheckBox1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * L_0 = (U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 *)il2cpp_codegen_object_new(U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682_il2cpp_TypeInfo_var);
		U3CYieldChangeNumAndCheckU3Ed__19__ctor_m7482978A697F26D0F0E0C854082E8823AC274534(L_0, 0, /*hidden argument*/NULL);
		U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * L_2 = L_1;
		int32_t L_3 = ___num0;
		NullCheck(L_2);
		L_2->set_num_3(L_3);
		U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * L_4 = L_2;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_5 = ___NextCheckBox1;
		NullCheck(L_4);
		L_4->set_NextCheckBox_4(L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator Hexagon::YieldClearNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hexagon_YieldClearNum_m7ADCD90F0F2AFA5F5D405D2F14FB2CAE31278CDC (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394 * L_0 = (U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394 *)il2cpp_codegen_object_new(U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394_il2cpp_TypeInfo_var);
		U3CYieldClearNumU3Ed__20__ctor_mCDAAC66DE4B9267A63EFDADEBEE151D0B88693F3(L_0, 0, /*hidden argument*/NULL);
		U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Hexagon::ClearNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon_ClearNum_mB90277772E2A5AC9798C4C9DFE7450A7D753AE88 (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// num1.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_num1_13();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// image.sprite = boxSprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_image_14();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_boxSprite_15();
		NullCheck(L_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_2, /*hidden argument*/NULL);
		// image.color = Color.white;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_image_14();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// IsUsed = false;
		__this->set_IsUsed_17((bool)0);
		// Gamecontroller.Instance.userData.arrPointData[Row][Col] = 0;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_5;
		L_5 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_5);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_6 = L_5->get_userData_7();
		NullCheck(L_6);
		Int32U5BU5DU5BU5D_t104DBF1B996084AA19567FD32B02EDF88D044FAF* L_7 = L_6->get_arrPointData_4();
		int32_t L_8 = __this->get_Row_9();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		int32_t L_11 = __this->get_Col_10();
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int32_t)0);
		// Gamecontroller.Instance.userData.ListData[Gamecontroller.Instance.userData.arrIndexToListIndex[Row][Col]] = 0;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_12;
		L_12 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_12);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_13 = L_12->get_userData_7();
		NullCheck(L_13);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_14 = L_13->get_ListData_6();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_15;
		L_15 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_15);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_16 = L_15->get_userData_7();
		NullCheck(L_16);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_17 = L_16->get_arrIndexToListIndex_5();
		int32_t L_18 = __this->get_Row_9();
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_20 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = __this->get_Col_10();
		NullCheck(L_20);
		int32_t L_22 = L_21;
		int16_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_14);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_14, L_23, 0, /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Hexagon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hexagon__ctor_mF20358A65A652140B91169D2183BCCCA04F37ECE (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IntroControl::NewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroControl_NewGame_m7F8359A6B7BE47B3312AA64C91EF34668E764DFB (IntroControl_t1A48A8F6D08FCEAC0BA5290FCC9BA766538374E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Gamecontroller.Instance.DeleteAllData();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_0;
		L_0 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_0);
		Gamecontroller_DeleteAllData_m51CC445132822C63A6E3DCEDC9CD159E77D2B82D(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_1;
		L_1 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_3;
		L_3 = SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		// if (Gamecontroller.Instance.userDataTemplate) Gamecontroller.Instance.userData = Instantiate(Gamecontroller.Instance.userDataTemplate);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_4;
		L_4 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_4);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_5 = L_4->get_userDataTemplate_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// if (Gamecontroller.Instance.userDataTemplate) Gamecontroller.Instance.userData = Instantiate(Gamecontroller.Instance.userDataTemplate);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_7;
		L_7 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_8;
		L_8 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_8);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_9 = L_8->get_userDataTemplate_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_10;
		L_10 = Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441(L_9, /*hidden argument*/Object_Instantiate_TisUserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6_mD4C4B8CCE85F2F09E33185C67624FA68F9009441_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->set_userData_7(L_10);
	}

IL_0049:
	{
		// Gamecontroller.Instance.InitData();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_11;
		L_11 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_11);
		Gamecontroller_InitData_m0F0EEF3C0ABA5C904BE3482182D444314BFD7CE3(L_11, /*hidden argument*/NULL);
		// Gamecontroller.Instance.InitArrData();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_12;
		L_12 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_12);
		Gamecontroller_InitArrData_m5EB083EF1F1D78272C7A79D154586FD6609CBD3A(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IntroControl::ContinueGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroControl_ContinueGame_mAC5B2ABEA5D3DBA8707AE228EAEBBCAD4A538151 (IntroControl_t1A48A8F6D08FCEAC0BA5290FCC9BA766538374E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Gamecontroller.Instance.LoadData();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_0;
		L_0 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_0);
		Gamecontroller_LoadData_m3F8680867D65A2AA9B5042BC03E044692B794D43(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadSceneAsync(SceneManager.GetActiveScene().buildIndex + 1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_1;
		L_1 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_3;
		L_3 = SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IntroControl::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroControl_EndGame_mD268D15083C6490C6F1D59EE0DB59C70D225F741 (IntroControl_t1A48A8F6D08FCEAC0BA5290FCC9BA766538374E3 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IntroControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntroControl__ctor_m419A6127F94CA6335E6EA1F45D81C713B627C803 (IntroControl_t1A48A8F6D08FCEAC0BA5290FCC9BA766538374E3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NumberController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberController_Start_m9FDE21ED1F4AD42FB33933C78AF27A391DA29D2C (NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Num1.text = number1.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_Num1_6();
		int32_t* L_1 = __this->get_address_of_number1_4();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// imageNum1.color = Gamecontroller.Instance.settingData.colors[Gamecontroller.Instance.TheNOfNumBy2(number1) - 1];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_imageNum1_10();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_4;
		L_4 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_4);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_5 = L_4->get_settingData_5();
		NullCheck(L_5);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_6 = L_5->get_colors_18();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_7;
		L_7 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		int32_t L_8 = __this->get_number1_4();
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Gamecontroller_TheNOfNumBy2_m61559A2DF3DB785DA7FF749575E7E5276482CF0E(L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10;
		L_10 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)), /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		NullCheck(L_3);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_10);
		// if (numberState != NumberState.SINGLE)
		int32_t L_11 = __this->get_numberState_8();
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		// imageNum2.color = Gamecontroller.Instance.settingData.colors[Gamecontroller.Instance.TheNOfNumBy2(number2) - 1];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get_imageNum2_11();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_13;
		L_13 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_13);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_14 = L_13->get_settingData_5();
		NullCheck(L_14);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_15 = L_14->get_colors_18();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_16;
		L_16 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		int32_t L_17 = __this->get_number2_5();
		NullCheck(L_16);
		int32_t L_18;
		L_18 = Gamecontroller_TheNOfNumBy2_m61559A2DF3DB785DA7FF749575E7E5276482CF0E(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_15, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)), /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		NullCheck(L_12);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_19);
		// Num2.text = number2.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = __this->get_Num2_7();
		int32_t* L_21 = __this->get_address_of_number2_5();
		String_t* L_22;
		L_22 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_22);
	}

IL_0096:
	{
		// }
		return;
	}
}
// System.Boolean NumberController::Trans(Hexagon,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NumberController_Trans_m163238F7FCCBDF4A85AB73A9ACAE28BA467788EE (NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * __this, Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * ___TargetBox0, int32_t ___currentOnDragNumIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B37_0 = 0;
	{
		// if (TargetBox.IsUsed) return false;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_0 = ___TargetBox0;
		NullCheck(L_0);
		bool L_1 = L_0->get_IsUsed_17();
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (TargetBox.IsUsed) return false;
		return (bool)0;
	}

IL_000a:
	{
		// int nextCol=-10, nextRow=-10,height= Gamecontroller.Instance.height;
		V_0 = ((int32_t)-10);
		// int nextCol=-10, nextRow=-10,height= Gamecontroller.Instance.height;
		V_1 = ((int32_t)-10);
		// int nextCol=-10, nextRow=-10,height= Gamecontroller.Instance.height;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_2;
		L_2 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = L_2->get_height_17();
		V_2 = L_3;
		// Hexagon nextTarget = null;
		V_3 = (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *)NULL;
		// switch (numberState)
		int32_t L_4 = __this->get_numberState_8();
		V_4 = L_4;
		int32_t L_5 = V_4;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_0052;
			}
			case 2:
			{
				goto IL_00bb;
			}
			case 3:
			{
				goto IL_00db;
			}
		}
	}
	{
		goto IL_013f;
	}

IL_0041:
	{
		// TargetBox.ChangeNum(number1);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_6 = ___TargetBox0;
		int32_t L_7 = __this->get_number1_4();
		NullCheck(L_6);
		Hexagon_ChangeNum_mE543E5B0206E7857B42D9B6C81B348537C7B539C(L_6, L_7, /*hidden argument*/NULL);
		// break;
		goto IL_013f;
	}

IL_0052:
	{
		// if(TargetBox.Row<height/2)
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_8 = ___TargetBox0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_Row_9();
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)((int32_t)L_10/(int32_t)2)))))
		{
			goto IL_0076;
		}
	}
	{
		// nextCol = currentOnDragNumIndex == 1 ? TargetBox.Col + 1 : TargetBox.Col - 1;
		int32_t L_11 = ___currentOnDragNumIndex1;
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_006b;
		}
	}
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_12 = ___TargetBox0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_Col_10();
		G_B9_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1));
		goto IL_0073;
	}

IL_006b:
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_14 = ___TargetBox0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_Col_10();
		G_B9_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0073:
	{
		V_0 = G_B9_0;
		// }
		goto IL_009f;
	}

IL_0076:
	{
		// else if(TargetBox.Row > height / 2)
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_16 = ___TargetBox0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_Row_9();
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)((int32_t)L_18/(int32_t)2)))))
		{
			goto IL_008a;
		}
	}
	{
		// nextCol = TargetBox.Col;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_19 = ___TargetBox0;
		NullCheck(L_19);
		int32_t L_20 = L_19->get_Col_10();
		V_0 = L_20;
		// }
		goto IL_009f;
	}

IL_008a:
	{
		// nextCol = currentOnDragNumIndex == 1 ? TargetBox.Col  : TargetBox.Col - 1;
		int32_t L_21 = ___currentOnDragNumIndex1;
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_0098;
		}
	}
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_22 = ___TargetBox0;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_Col_10();
		G_B15_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1));
		goto IL_009e;
	}

IL_0098:
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_24 = ___TargetBox0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_Col_10();
		G_B15_0 = L_25;
	}

IL_009e:
	{
		V_0 = G_B15_0;
	}

IL_009f:
	{
		// nextRow = currentOnDragNumIndex == 1 ? TargetBox.Row + 1 : TargetBox.Row - 1;
		int32_t L_26 = ___currentOnDragNumIndex1;
		if ((((int32_t)L_26) == ((int32_t)1)))
		{
			goto IL_00ad;
		}
	}
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_27 = ___TargetBox0;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_Row_9();
		G_B19_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1));
		goto IL_00b5;
	}

IL_00ad:
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_29 = ___TargetBox0;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_Row_9();
		G_B19_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00b5:
	{
		V_1 = G_B19_0;
		// break;
		goto IL_013f;
	}

IL_00bb:
	{
		// nextCol = currentOnDragNumIndex == 1 ? TargetBox.Col + 1 : TargetBox.Col - 1;
		int32_t L_31 = ___currentOnDragNumIndex1;
		if ((((int32_t)L_31) == ((int32_t)1)))
		{
			goto IL_00c9;
		}
	}
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_32 = ___TargetBox0;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_Col_10();
		G_B23_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1));
		goto IL_00d1;
	}

IL_00c9:
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_34 = ___TargetBox0;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_Col_10();
		G_B23_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00d1:
	{
		V_0 = G_B23_0;
		// nextRow = TargetBox.Row;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_36 = ___TargetBox0;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_Row_9();
		V_1 = L_37;
		// break;
		goto IL_013f;
	}

IL_00db:
	{
		// nextRow = currentOnDragNumIndex == 1 ? TargetBox.Row + 1 : TargetBox.Row - 1;
		int32_t L_38 = ___currentOnDragNumIndex1;
		if ((((int32_t)L_38) == ((int32_t)1)))
		{
			goto IL_00e9;
		}
	}
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_39 = ___TargetBox0;
		NullCheck(L_39);
		int32_t L_40 = L_39->get_Row_9();
		G_B27_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1));
		goto IL_00f1;
	}

IL_00e9:
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_41 = ___TargetBox0;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_Row_9();
		G_B27_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_00f1:
	{
		V_1 = G_B27_0;
		// if (TargetBox.Row < height / 2)
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_43 = ___TargetBox0;
		NullCheck(L_43);
		int32_t L_44 = L_43->get_Row_9();
		int32_t L_45 = V_2;
		if ((((int32_t)L_44) >= ((int32_t)((int32_t)((int32_t)L_45/(int32_t)2)))))
		{
			goto IL_0106;
		}
	}
	{
		// nextCol = TargetBox.Col ;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_46 = ___TargetBox0;
		NullCheck(L_46);
		int32_t L_47 = L_46->get_Col_10();
		V_0 = L_47;
		// }
		goto IL_013f;
	}

IL_0106:
	{
		// else if (TargetBox.Row > height / 2)
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_48 = ___TargetBox0;
		NullCheck(L_48);
		int32_t L_49 = L_48->get_Row_9();
		int32_t L_50 = V_2;
		if ((((int32_t)L_49) <= ((int32_t)((int32_t)((int32_t)L_50/(int32_t)2)))))
		{
			goto IL_012a;
		}
	}
	{
		// nextCol = currentOnDragNumIndex == 1 ? TargetBox.Col - 1 : TargetBox.Col + 1;
		int32_t L_51 = ___currentOnDragNumIndex1;
		if ((((int32_t)L_51) == ((int32_t)1)))
		{
			goto IL_011f;
		}
	}
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_52 = ___TargetBox0;
		NullCheck(L_52);
		int32_t L_53 = L_52->get_Col_10();
		G_B33_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		goto IL_0127;
	}

IL_011f:
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_54 = ___TargetBox0;
		NullCheck(L_54);
		int32_t L_55 = L_54->get_Col_10();
		G_B33_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1));
	}

IL_0127:
	{
		V_0 = G_B33_0;
		// }
		goto IL_013f;
	}

IL_012a:
	{
		// nextCol = currentOnDragNumIndex == 1 ? TargetBox.Col - 1 : TargetBox.Col ;
		int32_t L_56 = ___currentOnDragNumIndex1;
		if ((((int32_t)L_56) == ((int32_t)1)))
		{
			goto IL_0136;
		}
	}
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_57 = ___TargetBox0;
		NullCheck(L_57);
		int32_t L_58 = L_57->get_Col_10();
		G_B37_0 = L_58;
		goto IL_013e;
	}

IL_0136:
	{
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_59 = ___TargetBox0;
		NullCheck(L_59);
		int32_t L_60 = L_59->get_Col_10();
		G_B37_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_60, (int32_t)1));
	}

IL_013e:
	{
		V_0 = G_B37_0;
	}

IL_013f:
	{
		// if (nextCol != -10 && nextRow != -10)
		int32_t L_61 = V_0;
		if ((((int32_t)L_61) == ((int32_t)((int32_t)-10))))
		{
			goto IL_01ff;
		}
	}
	{
		int32_t L_62 = V_1;
		if ((((int32_t)L_62) == ((int32_t)((int32_t)-10))))
		{
			goto IL_01ff;
		}
	}
	{
		// if (nextCol < 0 || nextRow < 0 || nextRow >= height || nextCol >= Gamecontroller.Instance.userData.arrIndexToListIndex[nextRow].Length
		//     || Draw.Instance.transform.GetChild(Gamecontroller.Instance.userData.arrIndexToListIndex[nextRow][nextCol]).GetComponent<Hexagon>().IsUsed) return false;
		int32_t L_63 = V_0;
		if ((((int32_t)L_63) < ((int32_t)0)))
		{
			goto IL_019f;
		}
	}
	{
		int32_t L_64 = V_1;
		if ((((int32_t)L_64) < ((int32_t)0)))
		{
			goto IL_019f;
		}
	}
	{
		int32_t L_65 = V_1;
		int32_t L_66 = V_2;
		if ((((int32_t)L_65) >= ((int32_t)L_66)))
		{
			goto IL_019f;
		}
	}
	{
		int32_t L_67 = V_0;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_68;
		L_68 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_68);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_69 = L_68->get_userData_7();
		NullCheck(L_69);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_70 = L_69->get_arrIndexToListIndex_5();
		int32_t L_71 = V_1;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_73 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		if ((((int32_t)L_67) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_73)->max_length))))))
		{
			goto IL_019f;
		}
	}
	{
		Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * L_74;
		L_74 = Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_inline(/*hidden argument*/Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_RuntimeMethod_var);
		NullCheck(L_74);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_74, /*hidden argument*/NULL);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_76;
		L_76 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_76);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_77 = L_76->get_userData_7();
		NullCheck(L_77);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_78 = L_77->get_arrIndexToListIndex_5();
		int32_t L_79 = V_1;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_81 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		int32_t L_82 = V_0;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		int16_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_85;
		L_85 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_75, L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_86;
		L_86 = Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23(L_85, /*hidden argument*/Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		NullCheck(L_86);
		bool L_87 = L_86->get_IsUsed_17();
		if (!L_87)
		{
			goto IL_01a1;
		}
	}

IL_019f:
	{
		// || Draw.Instance.transform.GetChild(Gamecontroller.Instance.userData.arrIndexToListIndex[nextRow][nextCol]).GetComponent<Hexagon>().IsUsed) return false;
		return (bool)0;
	}

IL_01a1:
	{
		// nextTarget = Draw.Instance.transform.GetChild(Gamecontroller.Instance.userData.arrIndexToListIndex[nextRow][nextCol]).GetComponent<Hexagon>();
		Draw_tD7189ECAA7CB07436228730F2E256425FFC5BCC7 * L_88;
		L_88 = Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_inline(/*hidden argument*/Singleton_1_get_Instance_mFF5481FB2B70C7EE3231965917EF4A7D96AD6022_RuntimeMethod_var);
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_88, /*hidden argument*/NULL);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_90;
		L_90 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_90);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_91 = L_90->get_userData_7();
		NullCheck(L_91);
		Int16U5BU5DU5BU5D_t543ACA7B5432CCA0395B0944D21B4E37B8825D77* L_92 = L_91->get_arrIndexToListIndex_5();
		int32_t L_93 = V_1;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_95 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		int32_t L_96 = V_0;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		int16_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_89);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_99;
		L_99 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_89, L_98, /*hidden argument*/NULL);
		NullCheck(L_99);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_100;
		L_100 = Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23(L_99, /*hidden argument*/Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		V_3 = L_100;
		// if (currentOnDragNumIndex == 1)
		int32_t L_101 = ___currentOnDragNumIndex1;
		if ((!(((uint32_t)L_101) == ((uint32_t)1))))
		{
			goto IL_01e7;
		}
	}
	{
		// nextTarget.ChangeNum(number2);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_102 = V_3;
		int32_t L_103 = __this->get_number2_5();
		NullCheck(L_102);
		Hexagon_ChangeNum_mE543E5B0206E7857B42D9B6C81B348537C7B539C(L_102, L_103, /*hidden argument*/NULL);
		// TargetBox.ChangeNum(number1);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_104 = ___TargetBox0;
		int32_t L_105 = __this->get_number1_4();
		NullCheck(L_104);
		Hexagon_ChangeNum_mE543E5B0206E7857B42D9B6C81B348537C7B539C(L_104, L_105, /*hidden argument*/NULL);
		// }
		goto IL_01ff;
	}

IL_01e7:
	{
		// TargetBox.ChangeNum(number2);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_106 = ___TargetBox0;
		int32_t L_107 = __this->get_number2_5();
		NullCheck(L_106);
		Hexagon_ChangeNum_mE543E5B0206E7857B42D9B6C81B348537C7B539C(L_106, L_107, /*hidden argument*/NULL);
		// nextTarget.ChangeNum(number1);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_108 = V_3;
		int32_t L_109 = __this->get_number1_4();
		NullCheck(L_108);
		Hexagon_ChangeNum_mE543E5B0206E7857B42D9B6C81B348537C7B539C(L_108, L_109, /*hidden argument*/NULL);
	}

IL_01ff:
	{
		// if(TargetBox.Number!=0)
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_110 = ___TargetBox0;
		NullCheck(L_110);
		int32_t L_111;
		L_111 = Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67(L_110, /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_0213;
		}
	}
	{
		// Gamecontroller.Instance.NumConnect(TargetBox,nextTarget);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_112;
		L_112 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_113 = ___TargetBox0;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_114 = V_3;
		NullCheck(L_112);
		Gamecontroller_NumConnect_m2711B2FE485C56AFB15B8394A00160C603CB0BD5(L_112, L_113, L_114, /*hidden argument*/NULL);
	}

IL_0213:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void NumberController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberController__ctor_m54ADC6240B0F3C1EF5F1F9165CC0D2811481DB9B (NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RandomNumberController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberController_Awake_m951590065B370846B73084FBCC32968659607277 (RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_Awake_mA29AD07345F5099B4F4C3F53DBC90A2FBF1CAE66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// base.Awake();
		Singleton_1_Awake_mA29AD07345F5099B4F4C3F53DBC90A2FBF1CAE66(__this, /*hidden argument*/Singleton_1_Awake_mA29AD07345F5099B4F4C3F53DBC90A2FBF1CAE66_RuntimeMethod_var);
		// minOfRandomRange=Gamecontroller.Instance.settingData.INitMinOfRandomRange;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_0;
		L_0 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_0);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_1 = L_0->get_settingData_5();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_INitMinOfRandomRange_17();
		__this->set_minOfRandomRange_9(L_2);
		// maxOfRandomRange=Gamecontroller.Instance.settingData.INitMaxOfRandomRange;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_3;
		L_3 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_3);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_4 = L_3->get_settingData_5();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_INitMaxOfRandomRange_16();
		__this->set_maxOfRandomRange_10(L_5);
		// for (int i = 0; i < 3; ++i) Point[i] = transform.GetChild(i) ;
		V_0 = 0;
		goto IL_004c;
	}

IL_0034:
	{
		// for (int i = 0; i < 3; ++i) Point[i] = transform.GetChild(i) ;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6 = __this->get_Point_12();
		int32_t L_7 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_10);
		// for (int i = 0; i < 3; ++i) Point[i] = transform.GetChild(i) ;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004c:
	{
		// for (int i = 0; i < 3; ++i) Point[i] = transform.GetChild(i) ;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)3)))
		{
			goto IL_0034;
		}
	}
	{
		// LoadGroups();
		RandomNumberController_LoadGroups_m295EF1D869E253230774CA5369E558F47C6A7427(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RandomNumberController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberController_Update_mB8E1F936A598349D14ED16349A4B8873F9688232 (RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (IsTimeToRandom())
		bool L_0;
		L_0 = RandomNumberController_IsTimeToRandom_m6818F3A1ED1DC143645E8B44D90459737C5DFF57(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// RandomThreeNumberGroup();
		RandomNumberController_RandomThreeNumberGroup_m37604645F2BD44680A525C5BC5C287E9AFB149E3(__this, /*hidden argument*/NULL);
		// int minPow =Gamecontroller.Instance.TheNOfNumBy2(Gamecontroller.Instance.currentMin);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_1;
		L_1 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_2;
		L_2 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = L_2->get_currentMin_13();
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Gamecontroller_TheNOfNumBy2_m61559A2DF3DB785DA7FF749575E7E5276482CF0E(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// int maxPow = Gamecontroller.Instance.TheNOfNumBy2(Gamecontroller.Instance.currentMax);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_5;
		L_5 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_6;
		L_6 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = L_6->get_currentMax_14();
		NullCheck(L_5);
		int32_t L_8;
		L_8 = Gamecontroller_TheNOfNumBy2_m61559A2DF3DB785DA7FF749575E7E5276482CF0E(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (maxOfRandomRange!=maxPow||minOfRandomRange!=minPow)
		int32_t L_9 = __this->get_maxOfRandomRange_10();
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_11 = __this->get_minOfRandomRange_9();
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0058;
		}
	}

IL_004a:
	{
		// maxOfRandomRange = maxPow;
		int32_t L_13 = V_1;
		__this->set_maxOfRandomRange_10(L_13);
		// minOfRandomRange = minPow;
		int32_t L_14 = V_0;
		__this->set_minOfRandomRange_9(L_14);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void RandomNumberController::RandomThreeNumberGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberController_RandomThreeNumberGroup_m37604645F2BD44680A525C5BC5C287E9AFB149E3 (RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF03CD2D0CF090D5115AC0B1D1693C4352624878F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8E3033D8A20DF2E2BD74F2667F31F70EB91CC2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF493D6E4EC27C0164F5DEFB3BCF041F9412E6B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_Point_12();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_Point_12();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_8, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// states.Clear();
		List_1_tB728C84B38500C9451A333E63EED455678C9A664 * L_13 = __this->get_states_13();
		NullCheck(L_13);
		List_1_Clear_m8E3033D8A20DF2E2BD74F2667F31F70EB91CC2FC(L_13, /*hidden argument*/List_1_Clear_m8E3033D8A20DF2E2BD74F2667F31F70EB91CC2FC_RuntimeMethod_var);
		// for(int i = 0; i < 3; ++i)
		V_1 = 0;
		goto IL_024e;
	}

IL_0045:
	{
		// NumberController number=null;
		V_2 = (NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 *)NULL;
		// NumberController.NumberState randomNumberState = (NumberController.NumberState)Random.Range(0, 4);
		int32_t L_14;
		L_14 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 4, /*hidden argument*/NULL);
		V_3 = L_14;
		// states.Add(randomNumberState);
		List_1_tB728C84B38500C9451A333E63EED455678C9A664 * L_15 = __this->get_states_13();
		int32_t L_16 = V_3;
		NullCheck(L_15);
		List_1_Add_mF03CD2D0CF090D5115AC0B1D1693C4352624878F(L_15, L_16, /*hidden argument*/List_1_Add_mF03CD2D0CF090D5115AC0B1D1693C4352624878F_RuntimeMethod_var);
		int32_t L_17 = V_3;
		switch (L_17)
		{
			case 0:
			{
				goto IL_0076;
			}
			case 1:
			{
				goto IL_00c3;
			}
			case 2:
			{
				goto IL_0135;
			}
			case 3:
			{
				goto IL_01a4;
			}
		}
	}
	{
		goto IL_0213;
	}

IL_0076:
	{
		// number = Instantiate(Single, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_Single_5();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_19 = __this->get_Point_12();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_18, L_23, L_24, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_25);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_26;
		L_26 = GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063(L_25, /*hidden argument*/GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var);
		V_2 = L_26;
		// number.number1 =(int)Mathf.Pow(2,Random.Range(minOfRandomRange, maxOfRandomRange+1)) ;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_27 = V_2;
		int32_t L_28 = __this->get_minOfRandomRange_9();
		int32_t L_29 = __this->get_maxOfRandomRange_10();
		int32_t L_30;
		L_30 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)), /*hidden argument*/NULL);
		float L_31;
		L_31 = powf((2.0f), ((float)((float)L_30)));
		NullCheck(L_27);
		L_27->set_number1_4(il2cpp_codegen_cast_double_to_int<int32_t>(L_31));
		// break;
		goto IL_021d;
	}

IL_00c3:
	{
		// number = Instantiate(Left_UP, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_Left_UP_6();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_33 = __this->get_Point_12();
		int32_t L_34 = V_1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_32, L_37, L_38, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_39);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_40;
		L_40 = GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063(L_39, /*hidden argument*/GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var);
		V_2 = L_40;
		// number.number1 = (int)Mathf.Pow(2, Random.Range(minOfRandomRange, maxOfRandomRange+1));
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_41 = V_2;
		int32_t L_42 = __this->get_minOfRandomRange_9();
		int32_t L_43 = __this->get_maxOfRandomRange_10();
		int32_t L_44;
		L_44 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_42, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)), /*hidden argument*/NULL);
		float L_45;
		L_45 = powf((2.0f), ((float)((float)L_44)));
		NullCheck(L_41);
		L_41->set_number1_4(il2cpp_codegen_cast_double_to_int<int32_t>(L_45));
		// number.number2 = (int)Mathf.Pow(2,Random.Range(minOfRandomRange, maxOfRandomRange+1));
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_46 = V_2;
		int32_t L_47 = __this->get_minOfRandomRange_9();
		int32_t L_48 = __this->get_maxOfRandomRange_10();
		int32_t L_49;
		L_49 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_47, ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1)), /*hidden argument*/NULL);
		float L_50;
		L_50 = powf((2.0f), ((float)((float)L_49)));
		NullCheck(L_46);
		L_46->set_number2_5(il2cpp_codegen_cast_double_to_int<int32_t>(L_50));
		// break;
		goto IL_021d;
	}

IL_0135:
	{
		// number = Instantiate(Mid_Two, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = __this->get_Mid_Two_7();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_52 = __this->get_Point_12();
		int32_t L_53 = V_1;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_55);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_55, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_57;
		L_57 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_51, L_56, L_57, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_58);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_59;
		L_59 = GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063(L_58, /*hidden argument*/GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var);
		V_2 = L_59;
		// number.number1 = (int)Mathf.Pow(2, Random.Range(minOfRandomRange, maxOfRandomRange+1));
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_60 = V_2;
		int32_t L_61 = __this->get_minOfRandomRange_9();
		int32_t L_62 = __this->get_maxOfRandomRange_10();
		int32_t L_63;
		L_63 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_61, ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1)), /*hidden argument*/NULL);
		float L_64;
		L_64 = powf((2.0f), ((float)((float)L_63)));
		NullCheck(L_60);
		L_60->set_number1_4(il2cpp_codegen_cast_double_to_int<int32_t>(L_64));
		// number.number2 = (int)Mathf.Pow(2, Random.Range(minOfRandomRange, maxOfRandomRange+1));
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_65 = V_2;
		int32_t L_66 = __this->get_minOfRandomRange_9();
		int32_t L_67 = __this->get_maxOfRandomRange_10();
		int32_t L_68;
		L_68 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_66, ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1)), /*hidden argument*/NULL);
		float L_69;
		L_69 = powf((2.0f), ((float)((float)L_68)));
		NullCheck(L_65);
		L_65->set_number2_5(il2cpp_codegen_cast_double_to_int<int32_t>(L_69));
		// break;
		goto IL_021d;
	}

IL_01a4:
	{
		// number = Instantiate(Right_Up, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = __this->get_Right_Up_8();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_71 = __this->get_Point_12();
		int32_t L_72 = V_1;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		NullCheck(L_74);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_74, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_76;
		L_76 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77;
		L_77 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_70, L_75, L_76, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_77);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_78;
		L_78 = GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063(L_77, /*hidden argument*/GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var);
		V_2 = L_78;
		// number.number1 = (int)Mathf.Pow(2, Random.Range(minOfRandomRange, maxOfRandomRange+1));
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_79 = V_2;
		int32_t L_80 = __this->get_minOfRandomRange_9();
		int32_t L_81 = __this->get_maxOfRandomRange_10();
		int32_t L_82;
		L_82 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_80, ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1)), /*hidden argument*/NULL);
		float L_83;
		L_83 = powf((2.0f), ((float)((float)L_82)));
		NullCheck(L_79);
		L_79->set_number1_4(il2cpp_codegen_cast_double_to_int<int32_t>(L_83));
		// number.number2 = (int)Mathf.Pow(2, Random.Range(minOfRandomRange, maxOfRandomRange+1));
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_84 = V_2;
		int32_t L_85 = __this->get_minOfRandomRange_9();
		int32_t L_86 = __this->get_maxOfRandomRange_10();
		int32_t L_87;
		L_87 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_85, ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1)), /*hidden argument*/NULL);
		float L_88;
		L_88 = powf((2.0f), ((float)((float)L_87)));
		NullCheck(L_84);
		L_84->set_number2_5(il2cpp_codegen_cast_double_to_int<int32_t>(L_88));
		// break;
		goto IL_021d;
	}

IL_0213:
	{
		// default:Debug.Log("Random Error"); break;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3EF493D6E4EC27C0164F5DEFB3BCF041F9412E6B, /*hidden argument*/NULL);
	}

IL_021d:
	{
		// if (number)
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_89 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_89, /*hidden argument*/NULL);
		if (!L_90)
		{
			goto IL_024a;
		}
	}
	{
		// number.transform.SetParent(Point[i]);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_91 = V_2;
		NullCheck(L_91);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92;
		L_92 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_91, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_93 = __this->get_Point_12();
		int32_t L_94 = V_1;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		NullCheck(L_92);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_92, L_96, /*hidden argument*/NULL);
		// Gamecontroller.Instance.userData.CurrentRandomGroup[i] = (number);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_97;
		L_97 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_97);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_98 = L_97->get_userData_7();
		NullCheck(L_98);
		NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22* L_99 = L_98->get_CurrentRandomGroup_15();
		int32_t L_100 = V_1;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_101 = V_2;
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_101);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 *)L_101);
	}

IL_024a:
	{
		// for(int i = 0; i < 3; ++i)
		int32_t L_102 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
	}

IL_024e:
	{
		// for(int i = 0; i < 3; ++i)
		int32_t L_103 = V_1;
		if ((((int32_t)L_103) < ((int32_t)3)))
		{
			goto IL_0045;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean RandomNumberController::IsTimeToRandom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RandomNumberController_IsTimeToRandom_m6818F3A1ED1DC143645E8B44D90459737C5DFF57 (RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (transform.childCount!=3)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// for (int i = 0; i < 3; ++i)
		V_0 = 0;
		goto IL_002e;
	}

IL_0014:
	{
		// if (Point[i].transform.childCount != 0)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = __this->get_Point_12();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002a:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002e:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void RandomNumberController::LoadGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberController_LoadGroups_m295EF1D869E253230774CA5369E558F47C6A7427 (RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF03CD2D0CF090D5115AC0B1D1693C4352624878F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8E3033D8A20DF2E2BD74F2667F31F70EB91CC2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EB3ABCEBF8AD992C5504A03E22528C469F4F111);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB06F0D03206731E93EE343D0A0B6BF32CED75663);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
		V_1 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_Point_12();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_5 = __this->get_Point_12();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_8, 0, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < 3; ++i) if (Point[i].childCount != 0) Destroy(Point[i].GetChild(0).gameObject);
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// states.Clear();
		List_1_tB728C84B38500C9451A333E63EED455678C9A664 * L_13 = __this->get_states_13();
		NullCheck(L_13);
		List_1_Clear_m8E3033D8A20DF2E2BD74F2667F31F70EB91CC2FC(L_13, /*hidden argument*/List_1_Clear_m8E3033D8A20DF2E2BD74F2667F31F70EB91CC2FC_RuntimeMethod_var);
		// NumberController number = null;
		V_0 = (NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 *)NULL;
		// for (int i = 0; i < 3; ++i)
		V_2 = 0;
		goto IL_0229;
	}

IL_0047:
	{
		// if (PlayerPrefs.GetString("Random"+i)!="")
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0EB3ABCEBF8AD992C5504A03E22528C469F4F111, L_14, /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_16, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0225;
		}
	}
	{
		// Debug.Log(PlayerPrefs.GetString("Random" + i));
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0EB3ABCEBF8AD992C5504A03E22528C469F4F111, L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_20, /*hidden argument*/NULL);
		// JsonUtility.FromJsonOverwrite(PlayerPrefs.GetString("Random" + i), Template);
		String_t* L_21;
		L_21 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral0EB3ABCEBF8AD992C5504A03E22528C469F4F111, L_21, /*hidden argument*/NULL);
		String_t* L_23;
		L_23 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(L_22, /*hidden argument*/NULL);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_24 = __this->get_Template_11();
		JsonUtility_FromJsonOverwrite_mC97C7C909591A29E72361FB5DBC1A58EEE6DBAEB(L_23, L_24, /*hidden argument*/NULL);
		// states.Add(Template.numberState);
		List_1_tB728C84B38500C9451A333E63EED455678C9A664 * L_25 = __this->get_states_13();
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_26 = __this->get_Template_11();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_numberState_8();
		NullCheck(L_25);
		List_1_Add_mF03CD2D0CF090D5115AC0B1D1693C4352624878F(L_25, L_27, /*hidden argument*/List_1_Add_mF03CD2D0CF090D5115AC0B1D1693C4352624878F_RuntimeMethod_var);
		// switch (Template.numberState)
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_28 = __this->get_Template_11();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_numberState_8();
		V_3 = L_29;
		int32_t L_30 = V_3;
		switch (L_30)
		{
			case 0:
			{
				goto IL_00e5;
			}
			case 1:
			{
				goto IL_011e;
			}
			case 2:
			{
				goto IL_0168;
			}
			case 3:
			{
				goto IL_01af;
			}
		}
	}
	{
		goto IL_01f6;
	}

IL_00e5:
	{
		// number = Instantiate(Single, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_Single_5();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_32 = __this->get_Point_12();
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_35, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
		L_37 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_31, L_36, L_37, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_38);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_39;
		L_39 = GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063(L_38, /*hidden argument*/GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var);
		V_0 = L_39;
		// number.number1 = Template.number1;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_40 = V_0;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_41 = __this->get_Template_11();
		NullCheck(L_41);
		int32_t L_42 = L_41->get_number1_4();
		NullCheck(L_40);
		L_40->set_number1_4(L_42);
		// break;
		goto IL_0200;
	}

IL_011e:
	{
		// number = Instantiate(Left_UP, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_Left_UP_6();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_44 = __this->get_Point_12();
		int32_t L_45 = V_2;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_47);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49;
		L_49 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_43, L_48, L_49, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_50);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_51;
		L_51 = GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063(L_50, /*hidden argument*/GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var);
		V_0 = L_51;
		// number.number1 = Template.number1;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_52 = V_0;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_53 = __this->get_Template_11();
		NullCheck(L_53);
		int32_t L_54 = L_53->get_number1_4();
		NullCheck(L_52);
		L_52->set_number1_4(L_54);
		// number.number2 = Template.number2;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_55 = V_0;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_56 = __this->get_Template_11();
		NullCheck(L_56);
		int32_t L_57 = L_56->get_number2_5();
		NullCheck(L_55);
		L_55->set_number2_5(L_57);
		// break;
		goto IL_0200;
	}

IL_0168:
	{
		// number = Instantiate(Mid_Two, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get_Mid_Two_7();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_59 = __this->get_Point_12();
		int32_t L_60 = V_2;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_62, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_64;
		L_64 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65;
		L_65 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_58, L_63, L_64, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_65);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_66;
		L_66 = GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063(L_65, /*hidden argument*/GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var);
		V_0 = L_66;
		// number.number1 = Template.number1;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_67 = V_0;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_68 = __this->get_Template_11();
		NullCheck(L_68);
		int32_t L_69 = L_68->get_number1_4();
		NullCheck(L_67);
		L_67->set_number1_4(L_69);
		// number.number2 = Template.number2;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_70 = V_0;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_71 = __this->get_Template_11();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_number2_5();
		NullCheck(L_70);
		L_70->set_number2_5(L_72);
		// break;
		goto IL_0200;
	}

IL_01af:
	{
		// number = Instantiate(Right_Up, Point[i].position, Quaternion.identity).GetComponent<NumberController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = __this->get_Right_Up_8();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_74 = __this->get_Point_12();
		int32_t L_75 = V_2;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_78;
		L_78 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_77, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_79;
		L_79 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80;
		L_80 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_73, L_78, L_79, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		NullCheck(L_80);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_81;
		L_81 = GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063(L_80, /*hidden argument*/GameObject_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_m3C6C78FD9929A4752D690226E4C0CECCC6E7A063_RuntimeMethod_var);
		V_0 = L_81;
		// number.number1 = Template.number1;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_82 = V_0;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_83 = __this->get_Template_11();
		NullCheck(L_83);
		int32_t L_84 = L_83->get_number1_4();
		NullCheck(L_82);
		L_82->set_number1_4(L_84);
		// number.number2 = Template.number2;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_85 = V_0;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_86 = __this->get_Template_11();
		NullCheck(L_86);
		int32_t L_87 = L_86->get_number2_5();
		NullCheck(L_85);
		L_85->set_number2_5(L_87);
		// break;
		goto IL_0200;
	}

IL_01f6:
	{
		// default: Debug.Log("Random TemPlate Error"); break;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB06F0D03206731E93EE343D0A0B6BF32CED75663, /*hidden argument*/NULL);
	}

IL_0200:
	{
		// number.transform.SetParent(Point[i]);
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_88 = V_0;
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_88, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_90 = __this->get_Point_12();
		int32_t L_91 = V_2;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_89);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_89, L_93, /*hidden argument*/NULL);
		// Gamecontroller.Instance.userData.CurrentRandomGroup[i] = (number);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_94;
		L_94 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_94);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_95 = L_94->get_userData_7();
		NullCheck(L_95);
		NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22* L_96 = L_95->get_CurrentRandomGroup_15();
		int32_t L_97 = V_2;
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_98 = V_0;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_98);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(L_97), (NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 *)L_98);
	}

IL_0225:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_99 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, (int32_t)1));
	}

IL_0229:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_100 = V_2;
		if ((((int32_t)L_100) < ((int32_t)3)))
		{
			goto IL_0047;
		}
	}
	{
		// if (number == null)
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_101 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_101, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_102)
		{
			goto IL_023f;
		}
	}
	{
		// RandomThreeNumberGroup();
		RandomNumberController_RandomThreeNumberGroup_m37604645F2BD44680A525C5BC5C287E9AFB149E3(__this, /*hidden argument*/NULL);
	}

IL_023f:
	{
		// }
		return;
	}
}
// System.Void RandomNumberController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomNumberController__ctor_mD5448ADC171075A9AEEF52F947D216C073E99589 (RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD5512C7D39FE641D0D8D1069CC4610F35E03AD98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB728C84B38500C9451A333E63EED455678C9A664_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m09A5DF51BFCAECC9A911575ADE90437781F80F7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Transform[] Point=new Transform[3];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_Point_12(L_0);
		// public List<NumberController.NumberState> states= new List<NumberController.NumberState>();
		List_1_tB728C84B38500C9451A333E63EED455678C9A664 * L_1 = (List_1_tB728C84B38500C9451A333E63EED455678C9A664 *)il2cpp_codegen_object_new(List_1_tB728C84B38500C9451A333E63EED455678C9A664_il2cpp_TypeInfo_var);
		List_1__ctor_mD5512C7D39FE641D0D8D1069CC4610F35E03AD98(L_1, /*hidden argument*/List_1__ctor_mD5512C7D39FE641D0D8D1069CC4610F35E03AD98_RuntimeMethod_var);
		__this->set_states_13(L_1);
		Singleton_1__ctor_m09A5DF51BFCAECC9A911575ADE90437781F80F7F(__this, /*hidden argument*/Singleton_1__ctor_m09A5DF51BFCAECC9A911575ADE90437781F80F7F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScrollController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollController_Start_m18A8F52A1BB16EE08F3261FF858A27AFEEA3F9EF (ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rectTransform = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rectTransform_6(L_0);
		// HalfWidth = rectTransform.anchoredPosition.x / 2;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_rectTransform_6();
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		__this->set_HalfWidth_7(((float)((float)L_3/(float)(2.0f))));
		// firstPositon = rectTransform.anchoredPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = __this->get_rectTransform_6();
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_4, /*hidden argument*/NULL);
		__this->set_firstPositon_5(L_5);
		// }
		return;
	}
}
// System.Void ScrollController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollController_OnEnable_mCAFDD7B53FFC59E3E75B0E8049F828DF1ABAC9F1 (ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA * __this, const RuntimeMethod* method)
{
	{
		// LeftableCounts = 2;
		__this->set_LeftableCounts_8(2);
		// RightableCounts = 0;
		__this->set_RightableCounts_9(0);
		// }
		return;
	}
}
// System.Void ScrollController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollController_OnDisable_mE60C5306D539DF6B226411D3D3D21A48775F075C (ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA * __this, const RuntimeMethod* method)
{
	{
		// rectTransform.anchoredPosition = firstPositon;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_rectTransform_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = __this->get_firstPositon_5();
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScrollController::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollController_OnBeginDrag_m05AF8D1F238BDD75293485B9696FBA49189F519F (ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// Oriposition = rectTransform.anchoredPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_rectTransform_6();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		__this->set_Oriposition_4(L_1);
		// rectTransform.anchoredPosition +=new Vector2( eventData.delta.x,rectTransform.anchoredPosition.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = __this->get_rectTransform_6();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = L_2;
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_3, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = ___eventData0;
		NullCheck(L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get_rectTransform_6();
		NullCheck(L_8);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), L_7, L_10, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_4, L_11, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_3, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScrollController::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollController_OnDrag_m05FF17EF3CBE7DA3B0FBCF1DE3089DCC0E9A6DC7 (ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// rectTransform.anchoredPosition += new Vector2(eventData.delta.x, rectTransform.anchoredPosition.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_rectTransform_6();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = L_0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_1, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = __this->get_rectTransform_6();
		NullCheck(L_6);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), L_5, L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_2, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_1, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScrollController::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollController_OnEndDrag_mC9C2890F29189DBE870F659E6A8EB0892820FA78 (ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if ((Oriposition - rectTransform.anchoredPosition).x>0&&(Oriposition-rectTransform.anchoredPosition).x>=HalfWidth&&LeftableCounts!=0)//��
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_Oriposition_4();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_rectTransform_6();
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_0, L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_0();
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_009d;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = __this->get_Oriposition_4();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = __this->get_rectTransform_6();
		NullCheck(L_6);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_6, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_5, L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_0();
		float L_10 = __this->get_HalfWidth_7();
		if ((!(((float)L_9) >= ((float)L_10))))
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_11 = __this->get_LeftableCounts_8();
		if (!L_11)
		{
			goto IL_009d;
		}
	}
	{
		// rectTransform.anchoredPosition =new Vector2( Oriposition.x - HalfWidth * 2,Oriposition.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = __this->get_rectTransform_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_13 = __this->get_address_of_Oriposition_4();
		float L_14 = L_13->get_x_0();
		float L_15 = __this->get_HalfWidth_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_Oriposition_4();
		float L_17 = L_16->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), ((float)il2cpp_codegen_subtract((float)L_14, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)(2.0f))))), L_17, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_12, L_18, /*hidden argument*/NULL);
		// --LeftableCounts;
		int32_t L_19 = __this->get_LeftableCounts_8();
		__this->set_LeftableCounts_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		// ++RightableCounts;
		int32_t L_20 = __this->get_RightableCounts_9();
		__this->set_RightableCounts_9(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		// }
		return;
	}

IL_009d:
	{
		// else if((Oriposition - rectTransform.anchoredPosition).x < 0 && (Oriposition - rectTransform.anchoredPosition).x <= -HalfWidth&&RightableCounts!=0)//�һ�
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = __this->get_Oriposition_4();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_22 = __this->get_rectTransform_6();
		NullCheck(L_22);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		L_24 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_21, L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_x_0();
		if ((!(((float)L_25) < ((float)(0.0f)))))
		{
			goto IL_013b;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26 = __this->get_Oriposition_4();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_27 = __this->get_rectTransform_6();
		NullCheck(L_27);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_27, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_26, L_28, /*hidden argument*/NULL);
		float L_30 = L_29.get_x_0();
		float L_31 = __this->get_HalfWidth_7();
		if ((!(((float)L_30) <= ((float)((-L_31))))))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_32 = __this->get_RightableCounts_9();
		if (!L_32)
		{
			goto IL_013b;
		}
	}
	{
		// rectTransform.anchoredPosition = new Vector2(Oriposition.x + HalfWidth * 2, Oriposition.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_33 = __this->get_rectTransform_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_34 = __this->get_address_of_Oriposition_4();
		float L_35 = L_34->get_x_0();
		float L_36 = __this->get_HalfWidth_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_37 = __this->get_address_of_Oriposition_4();
		float L_38 = L_37->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_39), ((float)il2cpp_codegen_add((float)L_35, (float)((float)il2cpp_codegen_multiply((float)L_36, (float)(2.0f))))), L_38, /*hidden argument*/NULL);
		NullCheck(L_33);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_33, L_39, /*hidden argument*/NULL);
		// ++LeftableCounts;
		int32_t L_40 = __this->get_LeftableCounts_8();
		__this->set_LeftableCounts_8(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)));
		// --RightableCounts;
		int32_t L_41 = __this->get_RightableCounts_9();
		__this->set_RightableCounts_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)));
		// }
		return;
	}

IL_013b:
	{
		// rectTransform.anchoredPosition = Oriposition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_42 = __this->get_rectTransform_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = __this->get_Oriposition_4();
		NullCheck(L_42);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_42, L_43, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScrollController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollController__ctor_mB16769E48808E801701D321560A775FA24F3BB48 (ScrollController_tA049ABC3F6D5D122F0A66E2EB8971C31E4824BBA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Start_m74C43E03145ECBC4566A9979DB7A1D342972A527 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetFreshPaid(Gamecontroller.Instance.settingData.InitNeedFreshAward);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_0;
		L_0 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_0);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_1 = L_0->get_settingData_5();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_InitNeedFreshAward_14();
		UIController_SetFreshPaid_m4DA5263652CE4A0C3071BDE3A50037054BD2A9CB(__this, L_2, /*hidden argument*/NULL);
		// SetTransPaid(Gamecontroller.Instance.settingData.InitNeedTransAward);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_3;
		L_3 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_3);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_4 = L_3->get_settingData_5();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_InitNeedTransAward_15();
		UIController_SetTransPaid_mF792C601586083069F3F784888F5465778A3C74D(__this, L_5, /*hidden argument*/NULL);
		// HistoryScoresRecord.text = Gamecontroller.Instance.userData.HighRecordScores.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_HistoryScoresRecord_8();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_7;
		L_7 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_7);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_8 = L_7->get_userData_7();
		NullCheck(L_8);
		int32_t* L_9 = L_8->get_address_of_HighRecordScores_7();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		// }
		return;
	}
}
// System.Void UIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Update_m01A435E125093AE9631843DBDD904FEF5C82D282 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetTargetNum(Gamecontroller.Instance.currentMax * 2);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_0;
		L_0 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = L_0->get_currentMax_14();
		UIController_SetTargetNum_mD976854192AFED5562A15E4E0C934802B0CD7096(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)2)), /*hidden argument*/NULL);
		// SetLevelAbout(Gamecontroller.Instance.userData.Level, Gamecontroller.Instance.userData.Exp / Gamecontroller.Instance.userData.NeedExp);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_2;
		L_2 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_2);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_3 = L_2->get_userData_7();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Level_12();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_5;
		L_5 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_5);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_6 = L_5->get_userData_7();
		NullCheck(L_6);
		float L_7 = L_6->get_Exp_13();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_8;
		L_8 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_8);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_9 = L_8->get_userData_7();
		NullCheck(L_9);
		float L_10 = L_9->get_NeedExp_14();
		UIController_SetLevelAbout_m2C902335BBD26194E301DCC2EF76DBF189589717(__this, L_4, ((float)((float)L_7/(float)L_10)), /*hidden argument*/NULL);
		// SetAwards(Gamecontroller.Instance.userData.Awards);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_11;
		L_11 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_11);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_12 = L_11->get_userData_7();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_Awards_8();
		UIController_SetAwards_m2DFA412F9A3F41A90CF2C154D007F77762446273(__this, L_13, /*hidden argument*/NULL);
		// SetScores(Gamecontroller.Instance.userData.Scores);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_14;
		L_14 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_14);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_15 = L_14->get_userData_7();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_Scores_9();
		UIController_SetScores_mA52A4A16071C460580CA57645EA523CC799A0F4D(__this, L_16, /*hidden argument*/NULL);
		// SetTransNum(Gamecontroller.Instance.currentMin);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_17;
		L_17 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18 = L_17->get_currentMin_13();
		UIController_SetTransNum_m53962AA749E305FF5E5C1CB998F697150ABDEC06(__this, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::SetTargetNum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetTargetNum_mD976854192AFED5562A15E4E0C934802B0CD7096 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___TargetNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_mC25A91D60F4C0DC87303DAA477B1FC0EC0C41EC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.currentTargetNumber.text = TargetNumber.ToString();
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_0;
		L_0 = Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_inline(/*hidden argument*/Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var);
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0->get_currentTargetNumber_9();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___TargetNumber0), /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// Instance.currentTargetNumber.GetComponentInParent<Image>().color = Gamecontroller.Instance.settingData.colors[Gamecontroller.Instance.TheNOfNumBy2(TargetNumber) - 1];
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_3;
		L_3 = Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_inline(/*hidden argument*/Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var);
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_currentTargetNumber_9();
		NullCheck(L_4);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = Component_GetComponentInParent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_mC25A91D60F4C0DC87303DAA477B1FC0EC0C41EC0(L_4, /*hidden argument*/Component_GetComponentInParent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_mC25A91D60F4C0DC87303DAA477B1FC0EC0C41EC0_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_6;
		L_6 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_6);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_7 = L_6->get_settingData_5();
		NullCheck(L_7);
		List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * L_8 = L_7->get_colors_18();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_9;
		L_9 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		int32_t L_10 = ___TargetNumber0;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = Gamecontroller_TheNOfNumBy2_m61559A2DF3DB785DA7FF749575E7E5276482CF0E(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_inline(L_8, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1)), /*hidden argument*/List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_RuntimeMethod_var);
		NullCheck(L_5);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_12);
		// }
		return;
	}
}
// System.Void UIController::SetLevelAbout(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetLevelAbout_m2C902335BBD26194E301DCC2EF76DBF189589717 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___curLevel0, float ___ExpProportion1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// currentLevel.text = curLevel.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_currentLevel_5();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___curLevel0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// nextLevel.text = (curLevel+1).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_nextLevel_6();
		int32_t L_3 = ___curLevel0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// ExpBar.fillAmount = ExpProportion;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_ExpBar_13();
		float L_6 = ___ExpProportion1;
		NullCheck(L_5);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIController::SetScores(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetScores_mA52A4A16071C460580CA57645EA523CC799A0F4D (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___currentScore0, const RuntimeMethod* method)
{
	{
		// currentScores.text = currentScore.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_currentScores_7();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___currentScore0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UIController::SetAwards(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetAwards_m2DFA412F9A3F41A90CF2C154D007F77762446273 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___currentAward0, const RuntimeMethod* method)
{
	{
		// currentAwards.text = currentAward.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_currentAwards_10();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___currentAward0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UIController::SetFreshPaid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetFreshPaid_m4DA5263652CE4A0C3071BDE3A50037054BD2A9CB (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___needAwards0, const RuntimeMethod* method)
{
	{
		// FreshPaidAward.text = needAwards.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_FreshPaidAward_11();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___needAwards0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UIController::SetTransPaid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetTransPaid_mF792C601586083069F3F784888F5465778A3C74D (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___needAwards0, const RuntimeMethod* method)
{
	{
		// TransPaidAward.text = needAwards.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_TransPaidAward_12();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___needAwards0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UIController::SetTransNum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_SetTransNum_m53962AA749E305FF5E5C1CB998F697150ABDEC06 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, int32_t ___minNumber0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Transform parent = TransPaidAward.transform.parent;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_TransPaidAward_12();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// for (int i = 0; i < 4; ++i)
		V_1 = 0;
		goto IL_0036;
	}

IL_0015:
	{
		// parent.GetChild(i).GetComponent<Text>().text = minNumber.ToString();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6;
		L_6 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_5, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___minNumber0), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// minNumber *= 2;
		int32_t L_8 = ___minNumber0;
		___minNumber0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)2));
		// for (int i = 0; i < 4; ++i)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		// for (int i = 0; i < 4; ++i)
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_m57DAF9FADDD58C79489BCF6474E55D3514E9BA21 (UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mE1C742E07E6001DA76D84607DD22EE8A33751B1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_mE1C742E07E6001DA76D84607DD22EE8A33751B1A(__this, /*hidden argument*/Singleton_1__ctor_mE1C742E07E6001DA76D84607DD22EE8A33751B1A_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UserData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserData__ctor_m5A7140F7994759B350CE8ED5612B6DD950F9D616 (UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<int> ListData = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_ListData_6(L_0);
		// public NumberController[] CurrentRandomGroup = new NumberController[3];
		NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22* L_1 = (NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22*)(NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22*)SZArrayNew(NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_CurrentRandomGroup_15(L_1);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void itemOnDrag::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void itemOnDrag_Start_m098B9DF027BF8E326EBF4B90BCFB054284082A10 (itemOnDrag_t6BDD32F756C01808A739D32C9A3D94835712CAF1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OriParent = transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		__this->set_OriParent_4(L_1);
		// canvasGroup = GetComponent<CanvasGroup>();
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_2;
		L_2 = Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4(__this, /*hidden argument*/Component_GetComponent_TisCanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F_mFED0C73400AFB37A709212A6C61F9BF44DBB88C4_RuntimeMethod_var);
		__this->set_canvasGroup_5(L_2);
		// }
		return;
	}
}
// System.Void itemOnDrag::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void itemOnDrag_OnBeginDrag_mD8CECA86DE8BBC7776F1D33D8AC63A710F62BA51 (itemOnDrag_t6BDD32F756C01808A739D32C9A3D94835712CAF1 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EFF49A1CEFA2EA6EA2C1FF085B28B7E898C4A4A);
		s_Il2CppMethodInitialized = true;
	}
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (eventData.pointerCurrentRaycast.gameObject.CompareTag("Num1"))
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		NullCheck(L_0);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_1;
		L_1 = PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_2, _stringLiteral1EFF49A1CEFA2EA6EA2C1FF085B28B7E898C4A4A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// currentOnDragNum = 1;
		__this->set_currentOnDragNum_6(1);
		// }
		goto IL_002a;
	}

IL_0023:
	{
		// else currentOnDragNum = 2;
		__this->set_currentOnDragNum_6(2);
	}

IL_002a:
	{
		// transform.SetParent(OriParent.parent);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_OriParent_4();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_4, L_6, /*hidden argument*/NULL);
		// transform.position += new Vector3( eventData.delta.x, eventData.delta.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = L_7;
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_10 = ___eventData0;
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_0();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_13 = ___eventData0;
		NullCheck(L_13);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_16), L_12, L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_16, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_17, /*hidden argument*/NULL);
		// canvasGroup.blocksRaycasts = false;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_18 = __this->get_canvasGroup_5();
		NullCheck(L_18);
		CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A(L_18, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void itemOnDrag::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void itemOnDrag_OnDrag_m15E56553985188AACAF8154F6766F62D90A89907 (itemOnDrag_t6BDD32F756C01808A739D32C9A3D94835712CAF1 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// transform.position += new Vector3(eventData.delta.x, eventData.delta.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = L_0;
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_6 = ___eventData0;
		NullCheck(L_6);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_9), L_5, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_9, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_10, /*hidden argument*/NULL);
		// canvasGroup.blocksRaycasts = false;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_11 = __this->get_canvasGroup_5();
		NullCheck(L_11);
		CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A(L_11, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void itemOnDrag::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void itemOnDrag_OnEndDrag_mC35D6A2224C7692FC221526C867F62FC0A25DDA7 (itemOnDrag_t6BDD32F756C01808A739D32C9A3D94835712CAF1 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_mE66B6E7D930F8CD5FDDD4531DD6230749040B1FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_m230A60E6437456F2B694A918E1489C90A6302DF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mFA59461CB5E5BF85E9B93754B8C4EA44F338B03F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// GameObject Object = eventData.pointerCurrentRaycast.gameObject;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		NullCheck(L_0);
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_1;
		L_1 = PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline((RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_2;
		// if (Object)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00fe;
		}
	}
	{
		// if (!Object.CompareTag("Box"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_5, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0053;
		}
	}
	{
		// transform.position = OriParent.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_OriParent_4();
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_9, /*hidden argument*/NULL);
		// transform.SetParent(OriParent);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_OriParent_4();
		NullCheck(L_10);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_10, L_11, /*hidden argument*/NULL);
		// }
		goto IL_00fe;
	}

IL_0053:
	{
		// if (GetComponent<NumberController>().Trans(Object.GetComponentInParent<Hexagon>(), currentOnDragNum))
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_12;
		L_12 = Component_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_mE66B6E7D930F8CD5FDDD4531DD6230749040B1FE(__this, /*hidden argument*/Component_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_mE66B6E7D930F8CD5FDDD4531DD6230749040B1FE_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_0;
		NullCheck(L_13);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_14;
		L_14 = GameObject_GetComponentInParent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_m230A60E6437456F2B694A918E1489C90A6302DF7(L_13, /*hidden argument*/GameObject_GetComponentInParent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_m230A60E6437456F2B694A918E1489C90A6302DF7_RuntimeMethod_var);
		int32_t L_15 = __this->get_currentOnDragNum_6();
		NullCheck(L_12);
		bool L_16;
		L_16 = NumberController_Trans_m163238F7FCCBDF4A85AB73A9ACAE28BA467788EE(L_12, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00d7;
		}
	}
	{
		// RandomNumberController.Instance.states.Remove(GetComponent<NumberController>().numberState);
		RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * L_17;
		L_17 = Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_inline(/*hidden argument*/Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		NullCheck(L_17);
		List_1_tB728C84B38500C9451A333E63EED455678C9A664 * L_18 = L_17->get_states_13();
		NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 * L_19;
		L_19 = Component_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_mE66B6E7D930F8CD5FDDD4531DD6230749040B1FE(__this, /*hidden argument*/Component_GetComponent_TisNumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144_mE66B6E7D930F8CD5FDDD4531DD6230749040B1FE_RuntimeMethod_var);
		NullCheck(L_19);
		int32_t L_20 = L_19->get_numberState_8();
		NullCheck(L_18);
		bool L_21;
		L_21 = List_1_Remove_mFA59461CB5E5BF85E9B93754B8C4EA44F338B03F(L_18, L_20, /*hidden argument*/List_1_Remove_mFA59461CB5E5BF85E9B93754B8C4EA44F338B03F_RuntimeMethod_var);
		// for(int i=0;i<3;++i)
		V_2 = 0;
		goto IL_00bc;
	}

IL_008b:
	{
		// if (OriParent==RandomNumberController.Instance.Point[i])
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_OriParent_4();
		RandomNumberController_t46A9823E40CEDC1094037CC661376C13DB5E45AB * L_23;
		L_23 = Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_inline(/*hidden argument*/Singleton_1_get_Instance_m63E1D56A131B9DD19FF08AB401E22F95BD8A7FFB_RuntimeMethod_var);
		NullCheck(L_23);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_24 = L_23->get_Point_12();
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_22, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00b8;
		}
	}
	{
		// Gamecontroller.Instance.userData.CurrentRandomGroup[i] = null;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_29;
		L_29 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_29);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_30 = L_29->get_userData_7();
		NullCheck(L_30);
		NumberControllerU5BU5D_tE78FC6E507986D241424B86691AEAE74FE474D22* L_31 = L_30->get_CurrentRandomGroup_15();
		int32_t L_32 = V_2;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, NULL);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (NumberController_t629AF15BDBD56C4B47398554D24DCBEC40C2C144 *)NULL);
		// break;
		goto IL_00c0;
	}

IL_00b8:
	{
		// for(int i=0;i<3;++i)
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00bc:
	{
		// for(int i=0;i<3;++i)
		int32_t L_34 = V_2;
		if ((((int32_t)L_34) < ((int32_t)3)))
		{
			goto IL_008b;
		}
	}

IL_00c0:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_35, /*hidden argument*/NULL);
		// AudioManager.Instance.PlayDownEffect();
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_36;
		L_36 = Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_inline(/*hidden argument*/Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_RuntimeMethod_var);
		NullCheck(L_36);
		AudioManager_PlayDownEffect_mE05C26F8D4D661991EDB0AFD04917D99369718D9(L_36, /*hidden argument*/NULL);
		// }
		goto IL_00fe;
	}

IL_00d7:
	{
		// transform.position = OriParent.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = __this->get_OriParent_4();
		NullCheck(L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_37, L_39, /*hidden argument*/NULL);
		// transform.SetParent(OriParent);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = __this->get_OriParent_4();
		NullCheck(L_40);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_40, L_41, /*hidden argument*/NULL);
	}

IL_00fe:
	{
		// transform.position += new Vector3(eventData.delta.x, eventData.delta.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = L_42;
		NullCheck(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_43, /*hidden argument*/NULL);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_45 = ___eventData0;
		NullCheck(L_45);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		L_46 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_x_0();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_48 = ___eventData0;
		NullCheck(L_48);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_49;
		L_49 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_51), L_47, L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_44, L_51, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_43, L_52, /*hidden argument*/NULL);
		// canvasGroup.blocksRaycasts = true;
		CanvasGroup_t6912220105AB4A288A2FD882D163D7218EAA577F * L_53 = __this->get_canvasGroup_5();
		NullCheck(L_53);
		CanvasGroup_set_blocksRaycasts_m322FC5A1B70A23524463A84CC707BF50FD284B3A(L_53, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void itemOnDrag::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void itemOnDrag__ctor_m5BBE5D4FD785F71E3C0AA67F401C4A6615F087A2 (itemOnDrag_t6BDD32F756C01808A739D32C9A3D94835712CAF1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonFucController/<SelectNum>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectNumU3Ed__23__ctor_m8369E6770757E1E6E979428B2F53B76D8C20FF37 (U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ButtonFucController/<SelectNum>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectNumU3Ed__23_System_IDisposable_Dispose_m52207BE05DF1F489EFDD50003C3190E1EC0EB673 (U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ButtonFucController/<SelectNum>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSelectNumU3Ed__23_MoveNext_m1F90EEC4E89927322F0E61FCE4486E4D668CF6E1 (U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * V_1 = NULL;
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0167;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_016e;
	}

IL_0026:
	{
		// if(Input.GetMouseButtonDown(0)){
		bool L_4;
		L_4 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0157;
		}
	}
	{
		// RaycastHit2D hit2D = Physics2D.Raycast(Input.mousePosition, Vector3.forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_9;
		L_9 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// if (hit2D && hit2D.collider.CompareTag("Box")&& hit2D.collider.GetComponent<Hexagon>().Number!=0)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_10 = V_2;
		bool L_11;
		L_11 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_014b;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_12;
		L_12 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_12, _stringLiteralA0E67793A4D3DE65AF167530F995CAF3619BED81, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_014b;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14;
		L_14 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_14);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_15;
		L_15 = Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23(L_14, /*hidden argument*/Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_014b;
		}
	}
	{
		// hit2D.collider.GetComponent<Hexagon>().ChangeNum(hit2D.collider.GetComponent<Hexagon>().Number * 2);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17;
		L_17 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_17);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_18;
		L_18 = Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23(L_17, /*hidden argument*/Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19;
		L_19 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_19);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_20;
		L_20 = Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23(L_19, /*hidden argument*/Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Hexagon_get_Number_mA39C5A6D46C9C68A54B0DACEA34D180A0C1DEE67(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Hexagon_ChangeNum_mE543E5B0206E7857B42D9B6C81B348537C7B539C(L_18, ((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)2)), /*hidden argument*/NULL);
		// Gamecontroller.Instance.NumConnect(hit2D.collider.GetComponent<Hexagon>(), null);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_22;
		L_22 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_23;
		L_23 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_23);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_24;
		L_24 = Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23(L_23, /*hidden argument*/Component_GetComponent_TisHexagon_t917CB5AF66E57BA128286D1715BDB1B211792048_mBD67BB6C268A1A73FF7E265454E7B2594B9E5C23_RuntimeMethod_var);
		NullCheck(L_22);
		Gamecontroller_NumConnect_m2711B2FE485C56AFB15B8394A00160C603CB0BD5(L_22, L_24, (Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 *)NULL, /*hidden argument*/NULL);
		// Gamecontroller.Instance.userData.Awards -= Gamecontroller.Instance.userData.TransNeedAwards;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_25;
		L_25 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_25);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_26 = L_25->get_userData_7();
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_27 = L_26;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_Awards_8();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_29;
		L_29 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_29);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_30 = L_29->get_userData_7();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_TransNeedAwards_11();
		NullCheck(L_27);
		L_27->set_Awards_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_31)));
		// Gamecontroller.Instance.userData.TransNeedAwards = Gamecontroller.Instance.settingData.freshIncrease * ++Gamecontroller.Instance.transCounts
		//     + Gamecontroller.Instance.settingData.InitNeedTransAward;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_32;
		L_32 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_32);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_33 = L_32->get_userData_7();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_34;
		L_34 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_34);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_35 = L_34->get_settingData_5();
		NullCheck(L_35);
		int32_t L_36 = L_35->get_freshIncrease_12();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_37;
		L_37 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_38 = L_37;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_transCounts_16();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
		int32_t L_40 = V_3;
		NullCheck(L_38);
		L_38->set_transCounts_16(L_40);
		int32_t L_41 = V_3;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_42;
		L_42 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_42);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_43 = L_42->get_settingData_5();
		NullCheck(L_43);
		int32_t L_44 = L_43->get_InitNeedTransAward_15();
		NullCheck(L_33);
		L_33->set_TransNeedAwards_11(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_36, (int32_t)L_41)), (int32_t)L_44)));
		// UIController.Instance.SetTransPaid(Gamecontroller.Instance.userData.TransNeedAwards);
		UIController_t90F6A5B1A924011DE0D35760A6ADD1536485B182 * L_45;
		L_45 = Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_inline(/*hidden argument*/Singleton_1_get_Instance_m0F8921B9AE247D525221D81E8566314EBE41B8BA_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_46;
		L_46 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_46);
		UserData_t00B4E9CFE6B249E3058F7447EA2456A721F65BD6 * L_47 = L_46->get_userData_7();
		NullCheck(L_47);
		int32_t L_48 = L_47->get_TransNeedAwards_11();
		NullCheck(L_45);
		UIController_SetTransPaid_mF792C601586083069F3F784888F5465778A3C74D(L_45, L_48, /*hidden argument*/NULL);
		// AudioManager.Instance.PlaySwitchEffect();
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_49;
		L_49 = Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_inline(/*hidden argument*/Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_RuntimeMethod_var);
		NullCheck(L_49);
		AudioManager_PlaySwitchEffect_mF2C116072B1E57C16D565BB2A1F192B8F8262F32(L_49, /*hidden argument*/NULL);
		// }
		goto IL_0157;
	}

IL_014b:
	{
		// Debug.Log(hit2D.collider);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_50;
		L_50 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_50, /*hidden argument*/NULL);
	}

IL_0157:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0167:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_016e:
	{
		// while (TransTints.activeSelf)
		ButtonFucController_tBED9259C09C5AA64020AE4ACD0419ADD6C968B89 * L_51 = V_1;
		NullCheck(L_51);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = L_51->get_TransTints_9();
		NullCheck(L_52);
		bool L_53;
		L_53 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0026;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ButtonFucController/<SelectNum>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSelectNumU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8B130DB55FE3654EF1743675D7535FDB974D09DB (U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ButtonFucController/<SelectNum>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSelectNumU3Ed__23_System_Collections_IEnumerator_Reset_m3BE0A849DFC7D766224D7B94AAA30DAAE95FEC54 (U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSelectNumU3Ed__23_System_Collections_IEnumerator_Reset_m3BE0A849DFC7D766224D7B94AAA30DAAE95FEC54_RuntimeMethod_var)));
	}
}
// System.Object ButtonFucController/<SelectNum>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSelectNumU3Ed__23_System_Collections_IEnumerator_get_Current_m73E3DDDF4758375A95ADEC08014E001E225A4EF9 (U3CSelectNumU3Ed__23_t7513C024889DFC5B8FB2E0B81BA5D105635BADA9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hexagon/<YieldChangeNumAndCheck>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldChangeNumAndCheckU3Ed__19__ctor_m7482978A697F26D0F0E0C854082E8823AC274534 (U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Hexagon/<YieldChangeNumAndCheck>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldChangeNumAndCheckU3Ed__19_System_IDisposable_Dispose_m9F71884CEE9E1B3BB176E3DB874F43C58C313CA0 (U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Hexagon/<YieldChangeNumAndCheck>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CYieldChangeNumAndCheckU3Ed__19_MoveNext_m361EF422E3A416E05271DD513FC81C08F067EC4F (U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(yieldTime);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_yieldTime_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ChangeNum(num);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_7 = V_1;
		int32_t L_8 = __this->get_num_3();
		NullCheck(L_7);
		Hexagon_ChangeNum_mE543E5B0206E7857B42D9B6C81B348537C7B539C(L_7, L_8, /*hidden argument*/NULL);
		// AudioManager.Instance.PlayConnectEffect();
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_9;
		L_9 = Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_inline(/*hidden argument*/Singleton_1_get_Instance_m606033A5588ACE8A8FD6CEB94DF8C3FD9226E621_RuntimeMethod_var);
		NullCheck(L_9);
		AudioManager_PlayConnectEffect_mFF25C9E6E11E834AABDD4FE9C21DA7278ABBE6FB(L_9, /*hidden argument*/NULL);
		// ++Gamecontroller.Instance.continuousNumConnectCounts;
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_10;
		L_10 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_11 = L_10;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_continuousNumConnectCounts_12();
		NullCheck(L_11);
		L_11->set_continuousNumConnectCounts_12(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
		// Gamecontroller.Instance.SetLevelAndExpAndScores(Gamecontroller.Instance.settingData.OneConnectExp* Gamecontroller.Instance.continuousNumConnectCounts,Gamecontroller.Instance.settingData.OneConnectScores* Gamecontroller.Instance.continuousNumConnectCounts,
		//     Gamecontroller.Instance.settingData.OneConnectAward * Gamecontroller.Instance.continuousNumConnectCounts);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_13;
		L_13 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_14;
		L_14 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_14);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_15 = L_14->get_settingData_5();
		NullCheck(L_15);
		float L_16 = L_15->get_OneConnectExp_6();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_17;
		L_17 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18 = L_17->get_continuousNumConnectCounts_12();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_19;
		L_19 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_19);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_20 = L_19->get_settingData_5();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_OneConnectScores_10();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_22;
		L_22 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_22);
		int32_t L_23 = L_22->get_continuousNumConnectCounts_12();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_24;
		L_24 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_24);
		GameSettingData_t9952A5B0486706DB438BA1E24E8092579BAAB23F * L_25 = L_24->get_settingData_5();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_OneConnectAward_7();
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_27;
		L_27 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		NullCheck(L_27);
		int32_t L_28 = L_27->get_continuousNumConnectCounts_12();
		NullCheck(L_13);
		Gamecontroller_SetLevelAndExpAndScores_m8D0F61A3570321CEF893457D5DA31EB54C597CF4(L_13, ((float)il2cpp_codegen_multiply((float)L_16, (float)((float)((float)L_18)))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_21, (int32_t)L_23)), ((int32_t)il2cpp_codegen_multiply((int32_t)L_26, (int32_t)L_28)), /*hidden argument*/NULL);
		// Gamecontroller.Instance.NumConnect(this, NextCheckBox);
		Gamecontroller_t7832062B337B0578E434C684F987D28AEB14D237 * L_29;
		L_29 = Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_inline(/*hidden argument*/Singleton_1_get_Instance_m2E91E21CCF636DB80A0A1D8F3CFFA0F3DF767B01_RuntimeMethod_var);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_30 = V_1;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_31 = __this->get_NextCheckBox_4();
		NullCheck(L_29);
		Gamecontroller_NumConnect_m2711B2FE485C56AFB15B8394A00160C603CB0BD5(L_29, L_30, L_31, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Hexagon/<YieldChangeNumAndCheck>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CYieldChangeNumAndCheckU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD17A4DAE6C87C459798E5D8BCFF5C0FB237C8258 (U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Hexagon/<YieldChangeNumAndCheck>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldChangeNumAndCheckU3Ed__19_System_Collections_IEnumerator_Reset_mDD6F79C21C39587A558A3FA55C03C56E3B653D8F (U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CYieldChangeNumAndCheckU3Ed__19_System_Collections_IEnumerator_Reset_mDD6F79C21C39587A558A3FA55C03C56E3B653D8F_RuntimeMethod_var)));
	}
}
// System.Object Hexagon/<YieldChangeNumAndCheck>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CYieldChangeNumAndCheckU3Ed__19_System_Collections_IEnumerator_get_Current_mD30A716A883C63B3F3E3842BB256300FD3D5D740 (U3CYieldChangeNumAndCheckU3Ed__19_t59D1CE352DDC648B493EB3A1B0C7175F28E5E682 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hexagon/<YieldClearNum>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldClearNumU3Ed__20__ctor_mCDAAC66DE4B9267A63EFDADEBEE151D0B88693F3 (U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Hexagon/<YieldClearNum>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldClearNumU3Ed__20_System_IDisposable_Dispose_m1642C15728344AD8BA7B63E2D7F631F388AFC623 (U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Hexagon/<YieldClearNum>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CYieldClearNumU3Ed__20_MoveNext_m4C3F090EF2AF6A23D6345B068173686D2B131B9A (U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(yieldTime);
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_yieldTime_6();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// ClearNum();
		Hexagon_t917CB5AF66E57BA128286D1715BDB1B211792048 * L_7 = V_1;
		NullCheck(L_7);
		Hexagon_ClearNum_mB90277772E2A5AC9798C4C9DFE7450A7D753AE88(L_7, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Hexagon/<YieldClearNum>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CYieldClearNumU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBF0F0FD939739EC53A92ADE664F2669E3D2F0EE5 (U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Hexagon/<YieldClearNum>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYieldClearNumU3Ed__20_System_Collections_IEnumerator_Reset_m22A5AF829CE825C24983CD5BBB3DA86A7E210421 (U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CYieldClearNumU3Ed__20_System_Collections_IEnumerator_Reset_m22A5AF829CE825C24983CD5BBB3DA86A7E210421_RuntimeMethod_var)));
	}
}
// System.Object Hexagon/<YieldClearNum>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CYieldClearNumU3Ed__20_System_Collections_IEnumerator_get_Current_m6279D9FBE8796DB076AA9B0C30ED8C0200EE439B (U3CYieldClearNumU3Ed__20_tDEC2BA0331FD26CEEE6A249B4F5FA362DC63D394 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mDBEFBCDF9C7924767344ED2CEE1307885AED947B_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_X_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m282591DEB0E70B02F4F4DDFAB90116AEC8E6B86C_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Y_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mB2B73108B6DD3ADC1B515D7DD9116ECAC6833726_inline (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		__this->set_m_X_0(L_0);
		int32_t L_1 = ___y1;
		__this->set_m_Y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 delta { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CdeltaU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  PointerEventData_get_pointerCurrentRaycast_m8F200C53C20879FC2A2EECFDDFA9B453E63964B3_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  L_0 = __this->get_U3CpointerCurrentRaycastU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * RaycastResult_get_gameObject_mABA10AC828B2E6603A6C088A4CCD40932F6AF5FF_inline (RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_GameObject; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_GameObject_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_mCAFB58B0CB9CB40BCF3D25F11D23FACB0F04EDD1_gshared_inline (const RuntimeMethod* method)
{
	{
		// public static T Instance { get;private set; }
		RuntimeObject * L_0 = ((Singleton_1_tB94F4EDB90257B4777CC936DF8241783DDB032A3_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->get_U3CInstanceU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  List_1_get_Item_mE18734CA8DDE13DCEDF0961653478916B334B2BF_gshared_inline (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E* L_2 = (Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector2IntU5BU5D_tA91A00C258BDBF38BD76CF790B67CB344A126E9E*)L_2, (int32_t)L_3);
		return (Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE7CAD0A0114E2ABE951778EECF36B786DE521A24_gshared_inline (List_1_t27FC4B4A71FA13F9C332ABAA7AE7CDC03874DEBD * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m7C5FD44913A3832DC5D7875F3ADA6FA0D28DDB3E_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD* L_2 = (Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32EnumU5BU5D_t9327F857579EE00EB201E1913599094BF837D3CD*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m3632094BEC4410A1022FD0293E7BA88FC3B811A8_gshared_inline (List_1_tD9A0DAE3CF1F9450036B041168264AE0CEF1737A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  List_1_get_Item_m44FF1F2058A782761654B36B8879FF59BAD708F4_gshared_inline (List_1_t6ECA266B0EAC70596EFCED9D1D6E42D5E8A7E18E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_2 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)L_2, (int32_t)L_3);
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
