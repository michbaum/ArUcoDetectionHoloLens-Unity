#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection
struct ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50;
// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<DelayCoroutine>d__20
struct U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731;
// ArUcoDetectionHoloLensUnity.CvUtils
struct CvUtils_t5C40DBA24BD32A99FA9FBDEAC171F5125424B02B;
// CameraCalibrationParams
struct CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3;
// HoloLensForCV.DetectedArUcoMarker
struct DetectedArUcoMarker_tE0CCF8E3491906BB001A66A3088664DA2F8C7730;
// HoloLensForCV.ISensorFrameSinkGroup
struct ISensorFrameSinkGroup_tF5B6B0A94C69297B65BCE11AD1C48E9B9A2036E4;
// HoloLensForCV.MediaFrameSourceGroup
struct MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8;
// HoloLensForCV.SensorFrameStreamer
struct SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849;
// HoloLensForCV.SpatialPerception
struct SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577;
// HoloLensForCV.__IDetectedArUcoMarkerFactory
struct __IDetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422;
// HoloLensForCV.__IMediaFrameSourceGroupFactory
struct __IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B;
// IActivationFactory
struct Il2CppIActivationFactory;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E;
// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>
struct IList_1_t50C9889DE6756F376FF44D887B56A41378D0AF4E;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>
struct Func_1_tFD2A92E1FC61161A2078F93C77265D7CF6FAB600;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>>
struct Func_2_t72E3DBD051000825F9B00CBCA9D0B118A14D4D4E;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>
struct TaskFactory_1_t944482ACB6CA97336CDAC7828BEC7C3D394C6CB3;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>
struct Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE;
// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate
struct GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate
struct HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate
struct HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate
struct HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate
struct ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate
struct ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate
struct ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate
struct ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate
struct NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate
struct NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate
struct NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate
struct NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate
struct RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate
struct RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214;
// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate
struct TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB;
// Windows.Foundation.IMemoryBufferReference
struct IMemoryBufferReference_t652C97C544538DF8620B6D3A0D8E4A05718F683E;
// Windows.Graphics.Imaging.BitmapBuffer
struct BitmapBuffer_tAB279453A7114B91ACFEDEAA2F3E22040B026D91;
// Windows.Graphics.Imaging.ISoftwareBitmapFactory
struct ISoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B;
// Windows.Graphics.Imaging.ISoftwareBitmapStatics
struct ISoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225;
// Windows.Graphics.Imaging.SoftwareBitmap
struct SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tFD2A92E1FC61161A2078F93C77265D7CF6FAB600_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t63FCFB450D74584E94A43C474EA6B6AF7C6FE03D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tBCE2561582F2DEB7EC3C61194F27696491D12075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t597F0BD0933FE2F0AD56756E89DA6020283184A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemoryBufferByteAccess_t21FDE02ADDCA6917E3461F40FAF32D0710A81864_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04611D9C9FD471AC37CDE16C100358DDBCFE9006;
IL2CPP_EXTERN_C String_t* _stringLiteral096192D4CCCF8C80B8762E50B0589991A90EB02D;
IL2CPP_EXTERN_C String_t* _stringLiteral16696378F6BCFDD42650410E7E122F251F3B694F;
IL2CPP_EXTERN_C String_t* _stringLiteral327554AAE65FB95D6FA8FD00D02633ABE9C7D52B;
IL2CPP_EXTERN_C String_t* _stringLiteral4ED5D681651AC9A6E74DC13E8C360629648BE9D1;
IL2CPP_EXTERN_C String_t* _stringLiteral9163E165EC5C310FF61D5C0203783925317872A7;
IL2CPP_EXTERN_C String_t* _stringLiteral9A378E7EAF9162C44F1750F07037C7BE94E62B6E;
IL2CPP_EXTERN_C String_t* _stringLiteralA499F23BD4DF81A1FE25F87B9DEE935FD9181D86;
IL2CPP_EXTERN_C String_t* _stringLiteralA97FE5BE55A60552D5A67C321D11E2A23B3F36F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB4E4829D6802BCDC01293620CF84BEF699ECC5A4;
IL2CPP_EXTERN_C String_t* _stringLiteralDE4748660C68C578CE09DBF781372426E97DA31B;
IL2CPP_EXTERN_C String_t* _stringLiteralF75B3E7B7E35C807FE47CB6DF31B649CAE4C4793;
IL2CPP_EXTERN_C String_t* _stringLiteralF7950E4EFD272DC2F8DE443D5A52450937E87D81;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArUcoMarkerDetection_GestureRecognizer_Tapped_m2C884AFF72EF0911F57E240A476E1110A1C5EBB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArUcoMarkerDetection_U3CUpdateU3Eb__21_0_m58CAABDC9BD1CE819881C27CB69711B201C1C6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArUcoMarkerDetection_UpdateArUcoDetections_m122FFE6351F677B394738EB6EA52A20B437448D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_mE23C90CD7B553A58EFEB942BA43E7F7C9CDE2705_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m3604E0B1B00613F34E330F5FB2FA3FAC21F0570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_m99A11684A29ACFD9ABA5AD82ED0F7A3D7F3B696A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m4EDD11C19C7C26CF3E75C85652B523CAFE7FA572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m13E701CA06E23467A757BE6E40B5643A8ACF19C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_m4BA3BB2282801A9C7185A159A250D51118DC666A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m75724F2B86996B9DB73046FC593AC5E6037F0367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_mCFDC134A9B9CA9EA385CB6E71F4134B8D94E85AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m6CEF33120FE54B478D58D09DB600871F8AAD8FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m2103E6CBA9A7FE6A9D9C520050063A8C6D0BD280_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m775F893B4FCA318F9DF4F1A35E21F7643729EBCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m7D32B1F4B99BAFC491F0D3BB3BB6F9FEA0116E94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC7A9A7BEAF6BEDFE75B38817D4FC3C128277B215_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mC5D6296782D721E8F72314B9AFF3876F18DA7DBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisIList_1_t50C9889DE6756F376FF44D887B56A41378D0AF4E_m7A8BC1D9301DAA4250AC3A12FC94C68F978568E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayCoroutineU3Ed__20_System_Collections_IEnumerator_Reset_m005F9CBD7A06730A4586F09E191DA969A9491BA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_MoveNext_m923FAEDEAD8E99621CC9B550115165B5028AFF2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ArUcoMarkerDetection_DelayCoroutine_mB46B026348997284F6EDFEF7AAF9F134386CBEAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArUcoMarkerDetection_GetByteArrayFromSoftwareBitmap_m606D385839DDAF173138C95D9D48B272B50D1CE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArUcoMarkerDetection_InitializeHandler_mF45E86244DBBB774A2A704F74DAE44E3F379FF5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArUcoMarkerDetection_OnApplicationQuit_mBB1DFDED64354C9BE9B1238534E2C6A38DE20F67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArUcoMarkerDetection_StartHoloLensMediaFrameSourceGroups_m4CE484FD341CC630E87ED49D916EDCE8E65E3B02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArUcoMarkerDetection_Start_m8C01C3371CB66AD5CDBC9D747CA4F12591CC9A67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArUcoMarkerDetection_StopHoloLensMediaFrameSourceGroup_mE75A85457562EFB9808F9028E10E77E02024710F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArUcoMarkerDetection_UpdateArUcoDetections_m122FFE6351F677B394738EB6EA52A20B437448D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ArUcoMarkerDetection_Update_m649203843A83CA06F7EF05993B148D766686211A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CvUtils_GetQuatFromMatrix_mF942E7582B9F4253C9829A87E4C27B38B828D7B2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CvUtils_GetVectorFromMatrix_mB9197DB2927379ABAE3C20D66B407F83A96B4B8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CvUtils_RotationQuatFromRodrigues_m8EAEC5E80BD1F45F656ADF8B9215D644149D9332_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CvUtils_TransformInUnitySpace_mBD06B0A2A6CE9B6A3DC2D19F173207267FFC58C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayCoroutineU3Ed__20_MoveNext_mCB3D09613A649AE493C70866D93BF5CAB3D83A67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDelayCoroutineU3Ed__20_System_Collections_IEnumerator_Reset_m005F9CBD7A06730A4586F09E191DA969A9491BA4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnApplicationQuitU3Ed__22_MoveNext_m7515B44248DA91C31F1F1C8826DA89DC7E9685F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_MoveNext_m923FAEDEAD8E99621CC9B550115165B5028AFF2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartU3Ed__19_MoveNext_m0A01F356A9023BE8AAA099B78CBA8C52B48324A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_MoveNext_mB83D4D857D6E7A97A439DD36BDFFE3439C98C56B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CUpdateU3Ed__21_MoveNext_m89BACACDD456C57BB2A53365DA783C50747CE657_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper;
struct IBitmapBuffer_t578B9355F854F58D0C26BD5B4AA5007CFBFB0494;
struct ISensorFrameSinkGroup_tF5B6B0A94C69297B65BCE11AD1C48E9B9A2036E4;
struct ISoftwareBitmap_tF311080EE78E9ED0F3A927086502A086D0A01206;
struct ISpatialCoordinateSystem_t8F4DC599755946B5BB8F082B564C34A94EF14F57;
struct __IDetectedArUcoMarkerPublicNonVirtuals_t67D399CEEF363D005BE24FC89B2A667783D31F9F;
struct __IMediaFrameSourceGroupPublicNonVirtuals_t2AF40F8686B5E8E011733613FE80F10FC716ACAB;
struct __ISensorFrameStreamerPublicNonVirtuals_t8C9ECA5E465C3AB054CD0F0206FDAAD8573CB3B3;
struct __ISpatialPerceptionPublicNonVirtuals_t30DD9212F05E1C1DAA90C94A8347EFD4CDFB3FAD;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_IMemoryBufferByteAccess
struct NOVTABLE IMemoryBufferByteAccess_t21FDE02ADDCA6917E3461F40FAF32D0710A81864 : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMemoryBufferByteAccess_GetBuffer_m77E79A0DCC7B6C8CA1E6C2C1F74ED149756B4604(uint8_t** ___buffer0, uint32_t* ___capacity1) = 0;
};
// HoloLensForCV.ISensorFrameSinkGroup
struct NOVTABLE ISensorFrameSinkGroup_tF5B6B0A94C69297B65BCE11AD1C48E9B9A2036E4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISensorFrameSinkGroup_U24__Stripped0_GetSensorFrameSink_mC9E479D9713BF26C4804E924A6B1E04396F90329() = 0;
};
// HoloLensForCV.__IDetectedArUcoMarkerFactory
struct NOVTABLE __IDetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL __IDetectedArUcoMarkerFactory_U24__Stripped0_CreateInstance_mEABCBEE33C3D20068824011CDFA2639940192496() = 0;
};

// System.Object

// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_t763952C2BD8AC50CEB26803FF37B2111537736CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_mFA47FD762A357FA74B185A6CB2229B13A02B4F75(IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_mECC654248B45FBEA0BBCBD4BF8C1952E1D7313E1(IAsyncActionCompletedHandler_t1820A7A20AA2CF935463CD8EB21800005EFE488D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_m192BCF4CC6EE9E2E66722E3D2BFBBAEE124D7AD7() = 0;
};
// Windows.Foundation.IMemoryBufferReference
struct NOVTABLE IMemoryBufferReference_t652C97C544538DF8620B6D3A0D8E4A05718F683E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMemoryBufferReference_U24__Stripped0_get_Capacity_m420E13DA0A9AD6209A408A45445E6ECD39D321C0() = 0;
	virtual il2cpp_hresult_t STDCALL IMemoryBufferReference_U24__Stripped1_add_Closed_mE51E73CA5FFC251008A6BED314843901A8631440() = 0;
	virtual il2cpp_hresult_t STDCALL IMemoryBufferReference_U24__Stripped2_remove_Closed_m888270C53ED0421E582E79C029FB0ED53A873211() = 0;
};
// Windows.Graphics.Imaging.ISoftwareBitmapStatics
struct NOVTABLE ISoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped0_Copy_m3D069CDAEC7A024D2C723F89EA92AA632C0DD648() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped1_Convert_mCD9AF5DDC3782387D7F52F35288BC30C371CAEFC() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped2_Convert_m451FAD654A91B5AD1568BBF0CE2FB7811BB21418() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped3_CreateCopyFromBuffer_m45BE2FC8DC2BC95D34BB321055C182D1494D45E5() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped4_CreateCopyFromBuffer_mBE2EC0B9A90251A10FB764B87B7E6F6BFF97E631() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped5_CreateCopyFromSurfaceAsync_mC6C02E2C67DBAE7BF2E16C938928E4B347EC0BC9() = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapStatics_U24__Stripped6_CreateCopyFromSurfaceAsync_m87D675FA0149CBC623E54DC42C0BFFBAABF75C47() = 0;
};

// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<DelayCoroutine>d__20
struct  U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731  : public RuntimeObject
{
public:
	// System.Int32 ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<DelayCoroutine>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<DelayCoroutine>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// ArUcoDetectionHoloLensUnity.CvUtils
struct  CvUtils_t5C40DBA24BD32A99FA9FBDEAC171F5125424B02B  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.__Il2CppComObject


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// HoloLensForCV.DetectedArUcoMarker
struct  DetectedArUcoMarker_tE0CCF8E3491906BB001A66A3088664DA2F8C7730  : public Il2CppComObject
{
public:

public:
};

struct DetectedArUcoMarker_tE0CCF8E3491906BB001A66A3088664DA2F8C7730_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to HoloLensForCV.__IDetectedArUcoMarkerFactory
	__IDetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422* ____idetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("HoloLensForCV.DetectedArUcoMarker"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline __IDetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422* get_____idetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422()
	{
		__IDetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422* returnValue = ____idetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(__IDetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<__IDetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422>((&____idetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idetectedArUcoMarkerFactory_t1A3C943595741B1F5B579944A299287ECF449422;
			}
		}
		return returnValue;
	}
};


// HoloLensForCV.SensorFrameStreamer
struct  SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849  : public Il2CppComObject
{
public:

public:
};

struct SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("HoloLensForCV.SensorFrameStreamer"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};


// HoloLensForCV.SpatialPerception
struct  SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577  : public Il2CppComObject
{
public:

public:
};

struct SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("HoloLensForCV.SpatialPerception"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Numerics.Matrix4x4
struct  Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields, ____identity_16)); }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  value)
	{
		____identity_16 = value;
	}
};


// System.Numerics.Vector3
struct  Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F, ___m_task_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_pinvoke
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_marshaled_com
{
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>
struct  TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE, ___m_task_0)); }
	inline Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// Windows.Graphics.Imaging.BitmapBuffer
struct  BitmapBuffer_tAB279453A7114B91ACFEDEAA2F3E22040B026D91  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct  SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658  : public Il2CppComObject
{
public:

public:
};


// ArUcoDetectionHoloLensUnity.CvUtils_ArUcoDictionaryName
struct  ArUcoDictionaryName_t6DBA806E6816BDBBF90F577BEB2F9111F1B31EBC 
{
public:
	// System.Int32 ArUcoDetectionHoloLensUnity.CvUtils_ArUcoDictionaryName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ArUcoDictionaryName_t6DBA806E6816BDBBF90F577BEB2F9111F1B31EBC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ArUcoDetectionHoloLensUnity.CvUtils_DeviceTypeUnity
struct  DeviceTypeUnity_t8B1166824F6C92E9A6AE838B3FEEAE58968D903F 
{
public:
	// System.Int32 ArUcoDetectionHoloLensUnity.CvUtils_DeviceTypeUnity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceTypeUnity_t8B1166824F6C92E9A6AE838B3FEEAE58968D903F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ArUcoDetectionHoloLensUnity.CvUtils_SensorTypeUnity
struct  SensorTypeUnity_tA79E1B78F5260EC9B629A5B1EF3672B54D593CA3 
{
public:
	// System.Int32 ArUcoDetectionHoloLensUnity.CvUtils_SensorTypeUnity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SensorTypeUnity_tA79E1B78F5260EC9B629A5B1EF3672B54D593CA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HoloLensForCV.DeviceType
struct  DeviceType_t128020FCF42A03FD3E6BC4F98AC437F2B17ECCE6 
{
public:
	// System.Int32 HoloLensForCV.DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_t128020FCF42A03FD3E6BC4F98AC437F2B17ECCE6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HoloLensForCV.MediaFrameSourceGroupType
struct  MediaFrameSourceGroupType_tD313583C232A5364AB10C88709EDEE0672705638 
{
public:
	// System.Int32 HoloLensForCV.MediaFrameSourceGroupType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaFrameSourceGroupType_tD313583C232A5364AB10C88709EDEE0672705638, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HoloLensForCV.SensorType
struct  SensorType_t61C3C6CE95FDA09A5F40396D7192A0B3FB80DD10 
{
public:
	// System.Int32 HoloLensForCV.SensorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SensorType_t61C3C6CE95FDA09A5F40396D7192A0B3FB80DD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_task_2)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultResultTask_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_task_2)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_pinvoke
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_com
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.GestureRecognizer
struct  GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceled
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * ___HoldCanceled_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompleted
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * ___HoldCompleted_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStarted
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * ___HoldStarted_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::Tapped
	Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * ___Tapped_4;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceled
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * ___ManipulationCanceled_5;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompleted
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * ___ManipulationCompleted_6;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStarted
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * ___ManipulationStarted_7;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdated
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * ___ManipulationUpdated_8;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceled
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * ___NavigationCanceled_9;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompleted
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * ___NavigationCompleted_10;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStarted
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * ___NavigationStarted_11;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdated
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * ___NavigationUpdated_12;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEnded
	Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * ___RecognitionEnded_13;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStarted
	Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * ___RecognitionStarted_14;
	// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::GestureError
	Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * ___GestureError_15;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceledEvent
	HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * ___HoldCanceledEvent_16;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompletedEvent
	HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * ___HoldCompletedEvent_17;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStartedEvent
	HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * ___HoldStartedEvent_18;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::TappedEvent
	TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * ___TappedEvent_19;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceledEvent
	ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * ___ManipulationCanceledEvent_20;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompletedEvent
	ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * ___ManipulationCompletedEvent_21;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStartedEvent
	ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * ___ManipulationStartedEvent_22;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdatedEvent
	ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * ___ManipulationUpdatedEvent_23;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceledEvent
	NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * ___NavigationCanceledEvent_24;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompletedEvent
	NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * ___NavigationCompletedEvent_25;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStartedEvent
	NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * ___NavigationStartedEvent_26;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdatedEvent
	NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * ___NavigationUpdatedEvent_27;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEndedEvent
	RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * ___RecognitionEndedEvent_28;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStartedEvent
	RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * ___RecognitionStartedEvent_29;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::GestureErrorEvent
	GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * ___GestureErrorEvent_30;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_HoldCanceled_1() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceled_1)); }
	inline Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * get_HoldCanceled_1() const { return ___HoldCanceled_1; }
	inline Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B ** get_address_of_HoldCanceled_1() { return &___HoldCanceled_1; }
	inline void set_HoldCanceled_1(Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * value)
	{
		___HoldCanceled_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceled_1), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompleted_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompleted_2)); }
	inline Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * get_HoldCompleted_2() const { return ___HoldCompleted_2; }
	inline Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 ** get_address_of_HoldCompleted_2() { return &___HoldCompleted_2; }
	inline void set_HoldCompleted_2(Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * value)
	{
		___HoldCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompleted_2), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStarted_3() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStarted_3)); }
	inline Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * get_HoldStarted_3() const { return ___HoldStarted_3; }
	inline Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E ** get_address_of_HoldStarted_3() { return &___HoldStarted_3; }
	inline void set_HoldStarted_3(Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * value)
	{
		___HoldStarted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStarted_3), (void*)value);
	}

	inline static int32_t get_offset_of_Tapped_4() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___Tapped_4)); }
	inline Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * get_Tapped_4() const { return ___Tapped_4; }
	inline Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 ** get_address_of_Tapped_4() { return &___Tapped_4; }
	inline void set_Tapped_4(Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * value)
	{
		___Tapped_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tapped_4), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceled_5() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceled_5)); }
	inline Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * get_ManipulationCanceled_5() const { return ___ManipulationCanceled_5; }
	inline Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E ** get_address_of_ManipulationCanceled_5() { return &___ManipulationCanceled_5; }
	inline void set_ManipulationCanceled_5(Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * value)
	{
		___ManipulationCanceled_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceled_5), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompleted_6() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompleted_6)); }
	inline Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * get_ManipulationCompleted_6() const { return ___ManipulationCompleted_6; }
	inline Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F ** get_address_of_ManipulationCompleted_6() { return &___ManipulationCompleted_6; }
	inline void set_ManipulationCompleted_6(Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * value)
	{
		___ManipulationCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStarted_7() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStarted_7)); }
	inline Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * get_ManipulationStarted_7() const { return ___ManipulationStarted_7; }
	inline Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E ** get_address_of_ManipulationStarted_7() { return &___ManipulationStarted_7; }
	inline void set_ManipulationStarted_7(Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * value)
	{
		___ManipulationStarted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStarted_7), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdated_8() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdated_8)); }
	inline Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * get_ManipulationUpdated_8() const { return ___ManipulationUpdated_8; }
	inline Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC ** get_address_of_ManipulationUpdated_8() { return &___ManipulationUpdated_8; }
	inline void set_ManipulationUpdated_8(Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * value)
	{
		___ManipulationUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceled_9() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceled_9)); }
	inline Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * get_NavigationCanceled_9() const { return ___NavigationCanceled_9; }
	inline Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B ** get_address_of_NavigationCanceled_9() { return &___NavigationCanceled_9; }
	inline void set_NavigationCanceled_9(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * value)
	{
		___NavigationCanceled_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceled_9), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompleted_10() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompleted_10)); }
	inline Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * get_NavigationCompleted_10() const { return ___NavigationCompleted_10; }
	inline Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 ** get_address_of_NavigationCompleted_10() { return &___NavigationCompleted_10; }
	inline void set_NavigationCompleted_10(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * value)
	{
		___NavigationCompleted_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompleted_10), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStarted_11() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStarted_11)); }
	inline Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * get_NavigationStarted_11() const { return ___NavigationStarted_11; }
	inline Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E ** get_address_of_NavigationStarted_11() { return &___NavigationStarted_11; }
	inline void set_NavigationStarted_11(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * value)
	{
		___NavigationStarted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStarted_11), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdated_12() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdated_12)); }
	inline Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * get_NavigationUpdated_12() const { return ___NavigationUpdated_12; }
	inline Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C ** get_address_of_NavigationUpdated_12() { return &___NavigationUpdated_12; }
	inline void set_NavigationUpdated_12(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * value)
	{
		___NavigationUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEnded_13() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEnded_13)); }
	inline Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * get_RecognitionEnded_13() const { return ___RecognitionEnded_13; }
	inline Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 ** get_address_of_RecognitionEnded_13() { return &___RecognitionEnded_13; }
	inline void set_RecognitionEnded_13(Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * value)
	{
		___RecognitionEnded_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEnded_13), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStarted_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStarted_14)); }
	inline Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * get_RecognitionStarted_14() const { return ___RecognitionStarted_14; }
	inline Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E ** get_address_of_RecognitionStarted_14() { return &___RecognitionStarted_14; }
	inline void set_RecognitionStarted_14(Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * value)
	{
		___RecognitionStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStarted_14), (void*)value);
	}

	inline static int32_t get_offset_of_GestureError_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureError_15)); }
	inline Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * get_GestureError_15() const { return ___GestureError_15; }
	inline Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B ** get_address_of_GestureError_15() { return &___GestureError_15; }
	inline void set_GestureError_15(Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * value)
	{
		___GestureError_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureError_15), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCanceledEvent_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceledEvent_16)); }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * get_HoldCanceledEvent_16() const { return ___HoldCanceledEvent_16; }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 ** get_address_of_HoldCanceledEvent_16() { return &___HoldCanceledEvent_16; }
	inline void set_HoldCanceledEvent_16(HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * value)
	{
		___HoldCanceledEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceledEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompletedEvent_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompletedEvent_17)); }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * get_HoldCompletedEvent_17() const { return ___HoldCompletedEvent_17; }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A ** get_address_of_HoldCompletedEvent_17() { return &___HoldCompletedEvent_17; }
	inline void set_HoldCompletedEvent_17(HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * value)
	{
		___HoldCompletedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompletedEvent_17), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStartedEvent_18() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStartedEvent_18)); }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * get_HoldStartedEvent_18() const { return ___HoldStartedEvent_18; }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 ** get_address_of_HoldStartedEvent_18() { return &___HoldStartedEvent_18; }
	inline void set_HoldStartedEvent_18(HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * value)
	{
		___HoldStartedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStartedEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_TappedEvent_19() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___TappedEvent_19)); }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * get_TappedEvent_19() const { return ___TappedEvent_19; }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F ** get_address_of_TappedEvent_19() { return &___TappedEvent_19; }
	inline void set_TappedEvent_19(TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * value)
	{
		___TappedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TappedEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceledEvent_20() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceledEvent_20)); }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * get_ManipulationCanceledEvent_20() const { return ___ManipulationCanceledEvent_20; }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 ** get_address_of_ManipulationCanceledEvent_20() { return &___ManipulationCanceledEvent_20; }
	inline void set_ManipulationCanceledEvent_20(ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * value)
	{
		___ManipulationCanceledEvent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceledEvent_20), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompletedEvent_21() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompletedEvent_21)); }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * get_ManipulationCompletedEvent_21() const { return ___ManipulationCompletedEvent_21; }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 ** get_address_of_ManipulationCompletedEvent_21() { return &___ManipulationCompletedEvent_21; }
	inline void set_ManipulationCompletedEvent_21(ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * value)
	{
		___ManipulationCompletedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompletedEvent_21), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStartedEvent_22() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStartedEvent_22)); }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * get_ManipulationStartedEvent_22() const { return ___ManipulationStartedEvent_22; }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 ** get_address_of_ManipulationStartedEvent_22() { return &___ManipulationStartedEvent_22; }
	inline void set_ManipulationStartedEvent_22(ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * value)
	{
		___ManipulationStartedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStartedEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdatedEvent_23() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdatedEvent_23)); }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * get_ManipulationUpdatedEvent_23() const { return ___ManipulationUpdatedEvent_23; }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 ** get_address_of_ManipulationUpdatedEvent_23() { return &___ManipulationUpdatedEvent_23; }
	inline void set_ManipulationUpdatedEvent_23(ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * value)
	{
		___ManipulationUpdatedEvent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdatedEvent_23), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceledEvent_24() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceledEvent_24)); }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * get_NavigationCanceledEvent_24() const { return ___NavigationCanceledEvent_24; }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 ** get_address_of_NavigationCanceledEvent_24() { return &___NavigationCanceledEvent_24; }
	inline void set_NavigationCanceledEvent_24(NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * value)
	{
		___NavigationCanceledEvent_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceledEvent_24), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompletedEvent_25() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompletedEvent_25)); }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * get_NavigationCompletedEvent_25() const { return ___NavigationCompletedEvent_25; }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 ** get_address_of_NavigationCompletedEvent_25() { return &___NavigationCompletedEvent_25; }
	inline void set_NavigationCompletedEvent_25(NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * value)
	{
		___NavigationCompletedEvent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompletedEvent_25), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStartedEvent_26() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStartedEvent_26)); }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * get_NavigationStartedEvent_26() const { return ___NavigationStartedEvent_26; }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF ** get_address_of_NavigationStartedEvent_26() { return &___NavigationStartedEvent_26; }
	inline void set_NavigationStartedEvent_26(NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * value)
	{
		___NavigationStartedEvent_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStartedEvent_26), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdatedEvent_27() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdatedEvent_27)); }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * get_NavigationUpdatedEvent_27() const { return ___NavigationUpdatedEvent_27; }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A ** get_address_of_NavigationUpdatedEvent_27() { return &___NavigationUpdatedEvent_27; }
	inline void set_NavigationUpdatedEvent_27(NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * value)
	{
		___NavigationUpdatedEvent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdatedEvent_27), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEndedEvent_28() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEndedEvent_28)); }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * get_RecognitionEndedEvent_28() const { return ___RecognitionEndedEvent_28; }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B ** get_address_of_RecognitionEndedEvent_28() { return &___RecognitionEndedEvent_28; }
	inline void set_RecognitionEndedEvent_28(RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * value)
	{
		___RecognitionEndedEvent_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEndedEvent_28), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStartedEvent_29() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStartedEvent_29)); }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * get_RecognitionStartedEvent_29() const { return ___RecognitionStartedEvent_29; }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 ** get_address_of_RecognitionStartedEvent_29() { return &___RecognitionStartedEvent_29; }
	inline void set_RecognitionStartedEvent_29(RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * value)
	{
		___RecognitionStartedEvent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStartedEvent_29), (void*)value);
	}

	inline static int32_t get_offset_of_GestureErrorEvent_30() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureErrorEvent_30)); }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * get_GestureErrorEvent_30() const { return ___GestureErrorEvent_30; }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 ** get_address_of_GestureErrorEvent_30() { return &___GestureErrorEvent_30; }
	inline void set_GestureErrorEvent_30(GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * value)
	{
		___GestureErrorEvent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureErrorEvent_30), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};

// UnityEngine.XR.WSA.Input.GestureSettings
struct  GestureSettings_t75803D4EC100BFFD3E80E60E6228FE13BC816F4A 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.GestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureSettings_t75803D4EC100BFFD3E80E60E6228FE13BC816F4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags
struct  InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy
struct  InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Graphics.Imaging.BitmapBufferAccessMode
struct  BitmapBufferAccessMode_t1026123EB8BF28B9C6F5E41AEB81CEB0C5352BE2 
{
public:
	// System.Int32 Windows.Graphics.Imaging.BitmapBufferAccessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BitmapBufferAccessMode_t1026123EB8BF28B9C6F5E41AEB81CEB0C5352BE2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Graphics.Imaging.BitmapPixelFormat
struct  BitmapPixelFormat_t9713EE6A3256713135CE7F6F7DB5EFEAC9ED5F07 
{
public:
	// System.Int32 Windows.Graphics.Imaging.BitmapPixelFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BitmapPixelFormat_t9713EE6A3256713135CE7F6F7DB5EFEAC9ED5F07, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<OnApplicationQuit>d__22
struct  U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F 
{
public:
	// System.Int32 ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<OnApplicationQuit>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<OnApplicationQuit>d__22::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<OnApplicationQuit>d__22::<>4__this
	ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<OnApplicationQuit>d__22::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F, ___U3CU3E4__this_2)); }
	inline ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Start>d__19
struct  U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 
{
public:
	// System.Int32 ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Start>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Start>d__19::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Start>d__19::<>4__this
	ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Start>d__19::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325, ___U3CU3E4__this_2)); }
	inline ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Update>d__21
struct  U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A 
{
public:
	// System.Int32 ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Update>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Update>d__21::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Update>d__21::<>4__this
	ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>> ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Update>d__21::<>u__1
	TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A, ___U3CU3E4__this_2)); }
	inline ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};

// HoloLensForCV.__IMediaFrameSourceGroupFactory
struct NOVTABLE __IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL __IMediaFrameSourceGroupFactory_CreateInstance_m55501F9CDF7A9B182D141AD44B29104C1E635FA0(int32_t ___mediaFrameSourceGroupType0, __ISpatialPerceptionPublicNonVirtuals_t30DD9212F05E1C1DAA90C94A8347EFD4CDFB3FAD* ___spatialPerception1, int32_t ___deviceType2, ISensorFrameSinkGroup_tF5B6B0A94C69297B65BCE11AD1C48E9B9A2036E4* ___optionalSensorFrameSinkGroup3, float ___fL14, float ___fL25, float ___pP16, float ___pP27, float ___rD18, float ___rD29, float ___rD310, float ___tD111, float ___tD212, int32_t ___imageWidth13, int32_t ___imageHeight14, __IMediaFrameSourceGroupPublicNonVirtuals_t2AF40F8686B5E8E011733613FE80F10FC716ACAB** comReturnValue) = 0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  value)
	{
		___m_builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}
};

struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_cachedCompleted_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_com
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>
struct  Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B, ___m_result_22)); }
	inline RuntimeObject* get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t944482ACB6CA97336CDAC7828BEC7C3D394C6CB3 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t72E3DBD051000825F9B00CBCA9D0B118A14D4D4E * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t944482ACB6CA97336CDAC7828BEC7C3D394C6CB3 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t944482ACB6CA97336CDAC7828BEC7C3D394C6CB3 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t944482ACB6CA97336CDAC7828BEC7C3D394C6CB3 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t72E3DBD051000825F9B00CBCA9D0B118A14D4D4E * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t72E3DBD051000825F9B00CBCA9D0B118A14D4D4E ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t72E3DBD051000825F9B00CBCA9D0B118A14D4D4E * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePose
struct  InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 
{
public:
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_GripRotation_0;
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_PointerRotation_1;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_GripPosition_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_PointerPosition_3;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PositionAccuracy
	int32_t ___m_PositionAccuracy_6;
	// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_GripRotation_0() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripRotation_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_GripRotation_0() const { return ___m_GripRotation_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_GripRotation_0() { return &___m_GripRotation_0; }
	inline void set_m_GripRotation_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_GripRotation_0 = value;
	}

	inline static int32_t get_offset_of_m_PointerRotation_1() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerRotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_PointerRotation_1() const { return ___m_PointerRotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_PointerRotation_1() { return &___m_PointerRotation_1; }
	inline void set_m_PointerRotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_PointerRotation_1 = value;
	}

	inline static int32_t get_offset_of_m_GripPosition_2() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripPosition_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_GripPosition_2() const { return ___m_GripPosition_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_GripPosition_2() { return &___m_GripPosition_2; }
	inline void set_m_GripPosition_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_GripPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PointerPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerPosition_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_PointerPosition_3() const { return ___m_PointerPosition_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_PointerPosition_3() { return &___m_PointerPosition_3; }
	inline void set_m_PointerPosition_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_PointerPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionAccuracy_6() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PositionAccuracy_6)); }
	inline int32_t get_m_PositionAccuracy_6() const { return ___m_PositionAccuracy_6; }
	inline int32_t* get_address_of_m_PositionAccuracy_6() { return &___m_PositionAccuracy_6; }
	inline void set_m_PositionAccuracy_6(int32_t value)
	{
		___m_PositionAccuracy_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};

// Windows.Graphics.Imaging.ISoftwareBitmapFactory
struct NOVTABLE ISoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapFactory_Create_mDAE907DF71BCB10151E6967C34072D4C043787E2(int32_t ___format0, int32_t ___width1, int32_t ___height2, ISoftwareBitmap_tF311080EE78E9ED0F3A927086502A086D0A01206** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISoftwareBitmapFactory_U24__Stripped0_CreateWithAlpha_mDF56FDD3CC975FE596A150DC10335A0C934AF2AC() = 0;
};

// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StartHoloLensMediaFrameSourceGroups>d__23
struct  U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD 
{
public:
	// System.Int32 ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StartHoloLensMediaFrameSourceGroups>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StartHoloLensMediaFrameSourceGroups>d__23::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StartHoloLensMediaFrameSourceGroups>d__23::<>4__this
	ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StartHoloLensMediaFrameSourceGroups>d__23::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD, ___U3CU3E4__this_2)); }
	inline ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StopHoloLensMediaFrameSourceGroup>d__25
struct  U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 
{
public:
	// System.Int32 ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StopHoloLensMediaFrameSourceGroup>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StopHoloLensMediaFrameSourceGroup>d__25::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StopHoloLensMediaFrameSourceGroup>d__25::<>4__this
	ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StopHoloLensMediaFrameSourceGroup>d__25::<>u__1
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277, ___U3CU3E4__this_2)); }
	inline ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
	}
};


// HoloLensForCV.MediaFrameSourceGroup
struct  MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8  : public Il2CppComObject
{
public:

public:
};

struct MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to HoloLensForCV.__IMediaFrameSourceGroupFactory
	__IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B* ____imediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("HoloLensForCV.MediaFrameSourceGroup"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline __IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B* get_____imediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B()
	{
		__IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B* returnValue = ____imediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(__IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<__IMediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B>((&____imediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaFrameSourceGroupFactory_t894789955B54B857FA6F305E74D5720C20FE782B;
			}
		}
		return returnValue;
	}
};


// System.Func`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>
struct  Func_1_tFD2A92E1FC61161A2078F93C77265D7CF6FAB600  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.WSA.Input.TappedEventArgs
struct  TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.TappedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.TappedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.TappedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// System.Int32 UnityEngine.XR.WSA.Input.TappedEventArgs::m_TapCount
	int32_t ___m_TapCount_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_3() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_TapCount_3)); }
	inline int32_t get_m_TapCount_3() const { return ___m_TapCount_3; }
	inline int32_t* get_address_of_m_TapCount_3() { return &___m_TapCount_3; }
	inline void set_m_TapCount_3(int32_t value)
	{
		___m_TapCount_3 = value;
	}
};


// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:
	// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackingChanged_4), (void*)value);
	}
};


// Windows.Graphics.Imaging.SoftwareBitmap
struct  SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C  : public Il2CppComObject
{
public:

public:
};

struct SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Graphics.Imaging.ISoftwareBitmapFactory
	ISoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B* ____isoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B;
	// Cached pointer to Windows.Graphics.Imaging.ISoftwareBitmapStatics
	ISoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225* ____isoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Graphics.Imaging.SoftwareBitmap"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B* get_____isoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B()
	{
		ISoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B* returnValue = ____isoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B>((&____isoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isoftwareBitmapFactory_tDCC6F9B370D495BF1367EDE6DD7574C18A03BF1B;
			}
		}
		return returnValue;
	}

	inline ISoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225* get_____isoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225()
	{
		ISoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225* returnValue = ____isoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225>((&____isoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isoftwareBitmapStatics_tDB7DDB9262610AE1CF9C6B6D84A90529F306E225;
			}
		}
		return returnValue;
	}
};


// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct  Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection
struct  ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_isWorldAnchored
	bool ____isWorldAnchored_4;
	// UnityEngine.UI.Text ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::myText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___myText_5;
	// ArUcoDetectionHoloLensUnity.CvUtils_DeviceTypeUnity ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::deviceType
	int32_t ___deviceType_6;
	// ArUcoDetectionHoloLensUnity.CvUtils_SensorTypeUnity ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::sensorTypePv
	int32_t ___sensorTypePv_7;
	// ArUcoDetectionHoloLensUnity.CvUtils_ArUcoDictionaryName ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::arUcoDictionaryName
	int32_t ___arUcoDictionaryName_8;
	// System.Single ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::markerSize
	float ___markerSize_9;
	// CameraCalibrationParams ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::calibParams
	CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * ___calibParams_10;
	// UnityEngine.GameObject ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::markerGo
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___markerGo_11;
	// System.Boolean ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_mediaFrameSourceGroupsStarted
	bool ____mediaFrameSourceGroupsStarted_12;
	// System.Int32 ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_frameCount
	int32_t ____frameCount_13;
	// System.Int32 ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::skipFrames
	int32_t ___skipFrames_14;
	// HoloLensForCV.SensorFrameStreamer ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_sensorFrameStreamerPv
	SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * ____sensorFrameStreamerPv_15;
	// HoloLensForCV.SpatialPerception ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_spatialPerception
	SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * ____spatialPerception_16;
	// HoloLensForCV.DeviceType ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_deviceType
	int32_t ____deviceType_17;
	// HoloLensForCV.MediaFrameSourceGroupType ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_mediaFrameSourceGroup
	int32_t ____mediaFrameSourceGroup_18;
	// HoloLensForCV.MediaFrameSourceGroup ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_pvMediaFrameSourceGroup
	MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * ____pvMediaFrameSourceGroup_19;
	// HoloLensForCV.SensorType ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_sensorType
	int32_t ____sensorType_20;
	// Windows.Perception.Spatial.SpatialCoordinateSystem ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_unityCoordinateSystem
	SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ____unityCoordinateSystem_21;
	// UnityEngine.XR.WSA.Input.GestureRecognizer ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::_gestureRecognizer
	GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * ____gestureRecognizer_22;

public:
	inline static int32_t get_offset_of__isWorldAnchored_4() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____isWorldAnchored_4)); }
	inline bool get__isWorldAnchored_4() const { return ____isWorldAnchored_4; }
	inline bool* get_address_of__isWorldAnchored_4() { return &____isWorldAnchored_4; }
	inline void set__isWorldAnchored_4(bool value)
	{
		____isWorldAnchored_4 = value;
	}

	inline static int32_t get_offset_of_myText_5() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ___myText_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_myText_5() const { return ___myText_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_myText_5() { return &___myText_5; }
	inline void set_myText_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___myText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myText_5), (void*)value);
	}

	inline static int32_t get_offset_of_deviceType_6() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ___deviceType_6)); }
	inline int32_t get_deviceType_6() const { return ___deviceType_6; }
	inline int32_t* get_address_of_deviceType_6() { return &___deviceType_6; }
	inline void set_deviceType_6(int32_t value)
	{
		___deviceType_6 = value;
	}

	inline static int32_t get_offset_of_sensorTypePv_7() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ___sensorTypePv_7)); }
	inline int32_t get_sensorTypePv_7() const { return ___sensorTypePv_7; }
	inline int32_t* get_address_of_sensorTypePv_7() { return &___sensorTypePv_7; }
	inline void set_sensorTypePv_7(int32_t value)
	{
		___sensorTypePv_7 = value;
	}

	inline static int32_t get_offset_of_arUcoDictionaryName_8() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ___arUcoDictionaryName_8)); }
	inline int32_t get_arUcoDictionaryName_8() const { return ___arUcoDictionaryName_8; }
	inline int32_t* get_address_of_arUcoDictionaryName_8() { return &___arUcoDictionaryName_8; }
	inline void set_arUcoDictionaryName_8(int32_t value)
	{
		___arUcoDictionaryName_8 = value;
	}

	inline static int32_t get_offset_of_markerSize_9() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ___markerSize_9)); }
	inline float get_markerSize_9() const { return ___markerSize_9; }
	inline float* get_address_of_markerSize_9() { return &___markerSize_9; }
	inline void set_markerSize_9(float value)
	{
		___markerSize_9 = value;
	}

	inline static int32_t get_offset_of_calibParams_10() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ___calibParams_10)); }
	inline CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * get_calibParams_10() const { return ___calibParams_10; }
	inline CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 ** get_address_of_calibParams_10() { return &___calibParams_10; }
	inline void set_calibParams_10(CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * value)
	{
		___calibParams_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calibParams_10), (void*)value);
	}

	inline static int32_t get_offset_of_markerGo_11() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ___markerGo_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_markerGo_11() const { return ___markerGo_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_markerGo_11() { return &___markerGo_11; }
	inline void set_markerGo_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___markerGo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerGo_11), (void*)value);
	}

	inline static int32_t get_offset_of__mediaFrameSourceGroupsStarted_12() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____mediaFrameSourceGroupsStarted_12)); }
	inline bool get__mediaFrameSourceGroupsStarted_12() const { return ____mediaFrameSourceGroupsStarted_12; }
	inline bool* get_address_of__mediaFrameSourceGroupsStarted_12() { return &____mediaFrameSourceGroupsStarted_12; }
	inline void set__mediaFrameSourceGroupsStarted_12(bool value)
	{
		____mediaFrameSourceGroupsStarted_12 = value;
	}

	inline static int32_t get_offset_of__frameCount_13() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____frameCount_13)); }
	inline int32_t get__frameCount_13() const { return ____frameCount_13; }
	inline int32_t* get_address_of__frameCount_13() { return &____frameCount_13; }
	inline void set__frameCount_13(int32_t value)
	{
		____frameCount_13 = value;
	}

	inline static int32_t get_offset_of_skipFrames_14() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ___skipFrames_14)); }
	inline int32_t get_skipFrames_14() const { return ___skipFrames_14; }
	inline int32_t* get_address_of_skipFrames_14() { return &___skipFrames_14; }
	inline void set_skipFrames_14(int32_t value)
	{
		___skipFrames_14 = value;
	}

	inline static int32_t get_offset_of__sensorFrameStreamerPv_15() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____sensorFrameStreamerPv_15)); }
	inline SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * get__sensorFrameStreamerPv_15() const { return ____sensorFrameStreamerPv_15; }
	inline SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 ** get_address_of__sensorFrameStreamerPv_15() { return &____sensorFrameStreamerPv_15; }
	inline void set__sensorFrameStreamerPv_15(SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * value)
	{
		____sensorFrameStreamerPv_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sensorFrameStreamerPv_15), (void*)value);
	}

	inline static int32_t get_offset_of__spatialPerception_16() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____spatialPerception_16)); }
	inline SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * get__spatialPerception_16() const { return ____spatialPerception_16; }
	inline SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 ** get_address_of__spatialPerception_16() { return &____spatialPerception_16; }
	inline void set__spatialPerception_16(SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * value)
	{
		____spatialPerception_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____spatialPerception_16), (void*)value);
	}

	inline static int32_t get_offset_of__deviceType_17() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____deviceType_17)); }
	inline int32_t get__deviceType_17() const { return ____deviceType_17; }
	inline int32_t* get_address_of__deviceType_17() { return &____deviceType_17; }
	inline void set__deviceType_17(int32_t value)
	{
		____deviceType_17 = value;
	}

	inline static int32_t get_offset_of__mediaFrameSourceGroup_18() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____mediaFrameSourceGroup_18)); }
	inline int32_t get__mediaFrameSourceGroup_18() const { return ____mediaFrameSourceGroup_18; }
	inline int32_t* get_address_of__mediaFrameSourceGroup_18() { return &____mediaFrameSourceGroup_18; }
	inline void set__mediaFrameSourceGroup_18(int32_t value)
	{
		____mediaFrameSourceGroup_18 = value;
	}

	inline static int32_t get_offset_of__pvMediaFrameSourceGroup_19() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____pvMediaFrameSourceGroup_19)); }
	inline MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * get__pvMediaFrameSourceGroup_19() const { return ____pvMediaFrameSourceGroup_19; }
	inline MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 ** get_address_of__pvMediaFrameSourceGroup_19() { return &____pvMediaFrameSourceGroup_19; }
	inline void set__pvMediaFrameSourceGroup_19(MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * value)
	{
		____pvMediaFrameSourceGroup_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pvMediaFrameSourceGroup_19), (void*)value);
	}

	inline static int32_t get_offset_of__sensorType_20() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____sensorType_20)); }
	inline int32_t get__sensorType_20() const { return ____sensorType_20; }
	inline int32_t* get_address_of__sensorType_20() { return &____sensorType_20; }
	inline void set__sensorType_20(int32_t value)
	{
		____sensorType_20 = value;
	}

	inline static int32_t get_offset_of__unityCoordinateSystem_21() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____unityCoordinateSystem_21)); }
	inline SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * get__unityCoordinateSystem_21() const { return ____unityCoordinateSystem_21; }
	inline SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 ** get_address_of__unityCoordinateSystem_21() { return &____unityCoordinateSystem_21; }
	inline void set__unityCoordinateSystem_21(SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * value)
	{
		____unityCoordinateSystem_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unityCoordinateSystem_21), (void*)value);
	}

	inline static int32_t get_offset_of__gestureRecognizer_22() { return static_cast<int32_t>(offsetof(ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50, ____gestureRecognizer_22)); }
	inline GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * get__gestureRecognizer_22() const { return ____gestureRecognizer_22; }
	inline GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE ** get_address_of__gestureRecognizer_22() { return &____gestureRecognizer_22; }
	inline void set__gestureRecognizer_22(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * value)
	{
		____gestureRecognizer_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____gestureRecognizer_22), (void*)value);
	}
};


// CameraCalibrationParams
struct  CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Vector2 CameraCalibrationParams::focalLength
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___focalLength_4;
	// UnityEngine.Vector2 CameraCalibrationParams::principalPoint
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___principalPoint_5;
	// UnityEngine.Vector3 CameraCalibrationParams::radialDistortion
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___radialDistortion_6;
	// UnityEngine.Vector2 CameraCalibrationParams::tangentialDistortion
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___tangentialDistortion_7;
	// System.Int32 CameraCalibrationParams::imageWidth
	int32_t ___imageWidth_8;
	// System.Int32 CameraCalibrationParams::imageHeight
	int32_t ___imageHeight_9;

public:
	inline static int32_t get_offset_of_focalLength_4() { return static_cast<int32_t>(offsetof(CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3, ___focalLength_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_focalLength_4() const { return ___focalLength_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_focalLength_4() { return &___focalLength_4; }
	inline void set_focalLength_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___focalLength_4 = value;
	}

	inline static int32_t get_offset_of_principalPoint_5() { return static_cast<int32_t>(offsetof(CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3, ___principalPoint_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_principalPoint_5() const { return ___principalPoint_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_principalPoint_5() { return &___principalPoint_5; }
	inline void set_principalPoint_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___principalPoint_5 = value;
	}

	inline static int32_t get_offset_of_radialDistortion_6() { return static_cast<int32_t>(offsetof(CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3, ___radialDistortion_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_radialDistortion_6() const { return ___radialDistortion_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_radialDistortion_6() { return &___radialDistortion_6; }
	inline void set_radialDistortion_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___radialDistortion_6 = value;
	}

	inline static int32_t get_offset_of_tangentialDistortion_7() { return static_cast<int32_t>(offsetof(CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3, ___tangentialDistortion_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_tangentialDistortion_7() const { return ___tangentialDistortion_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_tangentialDistortion_7() { return &___tangentialDistortion_7; }
	inline void set_tangentialDistortion_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___tangentialDistortion_7 = value;
	}

	inline static int32_t get_offset_of_imageWidth_8() { return static_cast<int32_t>(offsetof(CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3, ___imageWidth_8)); }
	inline int32_t get_imageWidth_8() const { return ___imageWidth_8; }
	inline int32_t* get_address_of_imageWidth_8() { return &___imageWidth_8; }
	inline void set_imageWidth_8(int32_t value)
	{
		___imageWidth_8 = value;
	}

	inline static int32_t get_offset_of_imageHeight_9() { return static_cast<int32_t>(offsetof(CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3, ___imageHeight_9)); }
	inline int32_t get_imageHeight_9() const { return ___imageHeight_9; }
	inline int32_t* get_address_of_imageHeight_9() { return &___imageHeight_9; }
	inline void set_imageHeight_9(int32_t value)
	{
		___imageHeight_9 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Start>d__19>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m6CEF33120FE54B478D58D09DB600871F8AAD8FD4_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Update>d__21>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m2103E6CBA9A7FE6A9D9C520050063A8C6D0BD280_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<OnApplicationQuit>d__22>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_mCFDC134A9B9CA9EA385CB6E71F4134B8D94E85AE_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StartHoloLensMediaFrameSourceGroups>d__23>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_m99A11684A29ACFD9ABA5AD82ED0F7A3D7F3B696A_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD * ___stateMachine0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StopHoloLensMediaFrameSourceGroup>d__25>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m4EDD11C19C7C26CF3E75C85652B523CAFE7FA572_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 * ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0_gshared (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<OnApplicationQuit>d__22>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_m4BA3BB2282801A9C7185A159A250D51118DC666A_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Start>d__19>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m75724F2B86996B9DB73046FC593AC5E6037F0367_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StartHoloLensMediaFrameSourceGroups>d__23>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_mE23C90CD7B553A58EFEB942BA43E7F7C9CDE2705_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StopHoloLensMediaFrameSourceGroup>d__25>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m3604E0B1B00613F34E330F5FB2FA3FAC21F0570F_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 * ___stateMachine1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * Task_Run_TisRuntimeObject_mCF998C68623C833934353D12C469C935C60E5948_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___function0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Update>d__21>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m5C9BF0FC510E81F6E0B5533D8F0E8644DE7E42F4_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * ___awaiter0, U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Start>d__19>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m6CEF33120FE54B478D58D09DB600871F8AAD8FD4 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m6CEF33120FE54B478D58D09DB600871F8AAD8FD4_gshared)(__this, ___stateMachine0, method);
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<DelayCoroutine>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayCoroutineU3Ed__20__ctor_m7C8D44A2A414E50A5EE21DEEDC04730A82A9BA13 (U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Update>d__21>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m2103E6CBA9A7FE6A9D9C520050063A8C6D0BD280 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m2103E6CBA9A7FE6A9D9C520050063A8C6D0BD280_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<OnApplicationQuit>d__22>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_mCFDC134A9B9CA9EA385CB6E71F4134B8D94E85AE (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_mCFDC134A9B9CA9EA385CB6E71F4134B8D94E85AE_gshared)(__this, ___stateMachine0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StartHoloLensMediaFrameSourceGroups>d__23>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_m99A11684A29ACFD9ABA5AD82ED0F7A3D7F3B696A (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_m99A11684A29ACFD9ABA5AD82ED0F7A3D7F3B696A_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Numerics.Vector3 HoloLensForCV.DetectedArUcoMarker::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  DetectedArUcoMarker_get_Position_m125D910C88CB49B9059B9C534FEE5D32C3CE24DF (DetectedArUcoMarker_tE0CCF8E3491906BB001A66A3088664DA2F8C7730 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 ArUcoDetectionHoloLensUnity.CvUtils::Vec3FromFloat3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CvUtils_Vec3FromFloat3_m631823DDAB904406F2DBA1F0B4D7EDF168ECEE1C (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___v0, const RuntimeMethod* method);
// System.Numerics.Vector3 HoloLensForCV.DetectedArUcoMarker::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  DetectedArUcoMarker_get_Rotation_m4BF53FC416A6FAEF803DCB0BA922F3FEE194EBBB (DetectedArUcoMarker_tE0CCF8E3491906BB001A66A3088664DA2F8C7730 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion ArUcoDetectionHoloLensUnity.CvUtils::RotationQuatFromRodrigues(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CvUtils_RotationQuatFromRodrigues_m8EAEC5E80BD1F45F656ADF8B9215D644149D9332 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Numerics.Matrix4x4 HoloLensForCV.DetectedArUcoMarker::get_CameraToWorldUnity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  DetectedArUcoMarker_get_CameraToWorldUnity_m7B8DD796E06016AC92FC5E5171015C998A3B80DD (DetectedArUcoMarker_tE0CCF8E3491906BB001A66A3088664DA2F8C7730 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 ArUcoDetectionHoloLensUnity.CvUtils::Mat4x4FromFloat4x4(System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  CvUtils_Mat4x4FromFloat4x4_m2E21E4EEBE4E470B3D5A3199A9839476FC1BAC26 (Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___m0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 ArUcoDetectionHoloLensUnity.CvUtils::TransformInUnitySpace(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  CvUtils_TransformInUnitySpace_mBD06B0A2A6CE9B6A3DC2D19F173207267FFC58C5 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 ArUcoDetectionHoloLensUnity.CvUtils::GetVectorFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CvUtils_GetVectorFromMatrix_mB9197DB2927379ABAE3C20D66B407F83A96B4B8F (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m0, const RuntimeMethod* method);
// UnityEngine.Quaternion ArUcoDetectionHoloLensUnity.CvUtils::GetQuatFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CvUtils_GetQuatFromMatrix_mF942E7582B9F4253C9829A87E4C27B38B828D7B2 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_mDB9B34321018846FD7E2315CBE8D4A6612E3DE43 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StopHoloLensMediaFrameSourceGroup>d__25>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m4EDD11C19C7C26CF3E75C85652B523CAFE7FA572 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m4EDD11C19C7C26CF3E75C85652B523CAFE7FA572_gshared)(__this, ___stateMachine0, method);
}
// Windows.Graphics.Imaging.BitmapPixelFormat Windows.Graphics.Imaging.SoftwareBitmap::get_BitmapPixelFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoftwareBitmap_get_BitmapPixelFormat_m7AAF02FED0729C6527D012B064D6DFAFB63056D4 (SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * __this, const RuntimeMethod* method);
// System.Int32 Windows.Graphics.Imaging.SoftwareBitmap::get_PixelWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoftwareBitmap_get_PixelWidth_m99F5BAB93A095B81743F81424BF7024D7D3E8D52 (SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * __this, const RuntimeMethod* method);
// System.Int32 Windows.Graphics.Imaging.SoftwareBitmap::get_PixelHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SoftwareBitmap_get_PixelHeight_m371B24AF945EE588975E740133CA3089A79C7EED (SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * __this, const RuntimeMethod* method);
// System.Void Windows.Graphics.Imaging.SoftwareBitmap::.ctor(Windows.Graphics.Imaging.BitmapPixelFormat,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoftwareBitmap__ctor_m53165F3F53419EECADB0DA219035F73B4E45EDED (SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * __this, int32_t ___format0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method);
// Windows.Graphics.Imaging.BitmapBuffer Windows.Graphics.Imaging.SoftwareBitmap::LockBuffer(Windows.Graphics.Imaging.BitmapBufferAccessMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitmapBuffer_tAB279453A7114B91ACFEDEAA2F3E22040B026D91 * SoftwareBitmap_LockBuffer_mFFCA8BB5AB9518C5BB44EDD29A603A6550F2009D (SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * __this, int32_t ___mode0, const RuntimeMethod* method);
// Windows.Foundation.IMemoryBufferReference Windows.Graphics.Imaging.BitmapBuffer::CreateReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BitmapBuffer_CreateReference_m4D40B859E74C8429B325A6D2671C9ABBA44FBD1D (BitmapBuffer_tAB279453A7114B91ACFEDEAA2F3E22040B026D91 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer__ctor_m4EC0013B225C0189D0ACB2DC77092C809764F1D5 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.GestureSettings UnityEngine.XR.WSA.Input.GestureRecognizer::SetRecognizableGestures(UnityEngine.XR.WSA.Input.GestureSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureRecognizer_SetRecognizableGestures_mF459BAE914B9B2E01E7B1652ACF23C5C2722DA68 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, int32_t ___newMaskValue0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::StartCapturingGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_StartCapturingGestures_mD02F289C8263C8EACB47B4593E55C8B767C524FA (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0 (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_Tapped(System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_Tapped_mD5587B3F0115F9AC0599D555E2988E63136DA3EC (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Threading.Tasks.Task ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::StopHoloLensMediaFrameSourceGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ArUcoMarkerDetection_StopHoloLensMediaFrameSourceGroup_mE75A85457562EFB9808F9028E10E77E02024710F (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::CloseHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection_CloseHandler_mBB5A3624E66BBBC34A4F1B06DD2E6553FEA2DF91 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::StopCapturingGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_StopCapturingGestures_mBA5D5DFFC507CE972150A242E9DFC59B06121D61 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_Dispose_mCDB9196736129DA85372020E13A8768175E9A97C (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker> HoloLensForCV.MediaFrameSourceGroup::DetectArUcoMarkers(HoloLensForCV.SensorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaFrameSourceGroup_DetectArUcoMarkers_mD7AE9A0A18CAA3E7B1F7F5BDA13E6EFC50DBFCC4 (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C (Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87 (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<OnApplicationQuit>d__22>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_m4BA3BB2282801A9C7185A159A250D51118DC666A (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_m4BA3BB2282801A9C7185A159A250D51118DC666A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<OnApplicationQuit>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__22_MoveNext_m7515B44248DA91C31F1F1C8826DA89DC7E9685F9 (U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<OnApplicationQuit>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__22_SetStateMachine_m2FA5713E254642E359D9EFCCA06E296F0967037D (U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::InitializeHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection_InitializeHandler_mF45E86244DBBB774A2A704F74DAE44E3F379FF5C (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::StartHoloLensMediaFrameSourceGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ArUcoMarkerDetection_StartHoloLensMediaFrameSourceGroups_m4CE484FD341CC630E87ED49D916EDCE8E65E3B02 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Start>d__19>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m75724F2B86996B9DB73046FC593AC5E6037F0367 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m75724F2B86996B9DB73046FC593AC5E6037F0367_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Collections.IEnumerator ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::DelayCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArUcoMarkerDetection_DelayCoroutine_mB46B026348997284F6EDFEF7AAF9F134386CBEAE (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Start>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__19_MoveNext_m0A01F356A9023BE8AAA099B78CBA8C52B48324A7 (U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 * __this, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Start>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__19_SetStateMachine_m01ACD9CE3C0DB0FB9C566B8B1A5F73586739FF7A (U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void HoloLensForCV.SensorFrameStreamer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorFrameStreamer__ctor_m2A7FE63EE0D6B674FB9C840663B0EAFBF377C657 (SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * __this, const RuntimeMethod* method);
// System.Void HoloLensForCV.SensorFrameStreamer::Enable(HoloLensForCV.SensorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SensorFrameStreamer_Enable_m76FACD01E7F7662E5C8045742125D0D6494E82AD (SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * __this, int32_t ___sensorType0, const RuntimeMethod* method);
// System.Void HoloLensForCV.SpatialPerception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialPerception__ctor_mEF5E6D7D5750DD1AF34E9F594E10846F1EB007D3 (SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * __this, const RuntimeMethod* method);
// System.Void HoloLensForCV.MediaFrameSourceGroup::.ctor(HoloLensForCV.MediaFrameSourceGroupType,HoloLensForCV.SpatialPerception,HoloLensForCV.DeviceType,HoloLensForCV.ISensorFrameSinkGroup,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaFrameSourceGroup__ctor_m3DC45A3F6DA063A844CBB8432A506FF113A3BCEB (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * __this, int32_t ___mediaFrameSourceGroupType0, SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * ___spatialPerception1, int32_t ___deviceType2, RuntimeObject* ___optionalSensorFrameSinkGroup3, float ___fL14, float ___fL25, float ___pP16, float ___pP27, float ___rD18, float ___rD29, float ___rD310, float ___tD111, float ___tD212, int32_t ___imageWidth13, int32_t ___imageHeight14, const RuntimeMethod* method);
// System.Void HoloLensForCV.MediaFrameSourceGroup::Enable(HoloLensForCV.SensorType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MediaFrameSourceGroup_Enable_mFB95B66C15BEAD3C5AC911DD021551BBE8692532 (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * __this, int32_t ___sensorType0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncAction HoloLensForCV.MediaFrameSourceGroup::StartAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaFrameSourceGroup_StartAsync_m526B5B8956EB089601E9B7CA2A9AFE318DD6490C (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter System.WindowsRuntimeSystemExtensions::GetAwaiter(Windows.Foundation.IAsyncAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  WindowsRuntimeSystemExtensions_GetAwaiter_m1E46B83D2D5BEE385305CFFD9496572784AB5D2C (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StartHoloLensMediaFrameSourceGroups>d__23>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_mE23C90CD7B553A58EFEB942BA43E7F7C9CDE2705 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_mE23C90CD7B553A58EFEB942BA43E7F7C9CDE2705_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.IntPtr UnityEngine.XR.WSA.WorldManager::GetNativeISpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WorldManager_GetNativeISpatialCoordinateSystemPtr_m5B00922BB3D525275747790196EB0C639E245953 (const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::GetObjectForIUnknown(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_GetObjectForIUnknown_m4ABB91E8D7A1F5B5F9341FCBCD7100A4DC5E1DE2 (intptr_t ___pUnk0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncAction HoloLensForCV.MediaFrameSourceGroup::StartArUcoMarkerTrackerAsync(System.Single,System.Int32,Windows.Perception.Spatial.SpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaFrameSourceGroup_StartArUcoMarkerTrackerAsync_m2EDD5D4A4FF5098558D4F69E45DDF3E39CE380F2 (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * __this, float ___markerSize0, int32_t ___dictId1, SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ___unitySpatialCoodinateSystem2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StartHoloLensMediaFrameSourceGroups>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_MoveNext_m923FAEDEAD8E99621CC9B550115165B5028AFF2D (U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StartHoloLensMediaFrameSourceGroups>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_SetStateMachine_mB6ED45F4EB1196243094715857336A9295B228D6 (U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncAction HoloLensForCV.MediaFrameSourceGroup::StopAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MediaFrameSourceGroup_StopAsync_m7BD719AB4F6251735FE4EAFA4A0C48794CD23368 (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StopHoloLensMediaFrameSourceGroup>d__25>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m3604E0B1B00613F34E330F5FB2FA3FAC21F0570F (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * ___awaiter0, U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *, U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m3604E0B1B00613F34E330F5FB2FA3FAC21F0570F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StopHoloLensMediaFrameSourceGroup>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_MoveNext_mB83D4D857D6E7A97A439DD36BDFFE3439C98C56B (U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 * __this, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<StopHoloLensMediaFrameSourceGroup>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_SetStateMachine_m66B8573F474F21350A31A403E2BD7362512E6C14 (U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m775F893B4FCA318F9DF4F1A35E21F7643729EBCA (Func_1_tFD2A92E1FC61161A2078F93C77265D7CF6FAB600 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tFD2A92E1FC61161A2078F93C77265D7CF6FAB600 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::Run<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>(System.Func`1<!!0>)
inline Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B * Task_Run_TisIList_1_t50C9889DE6756F376FF44D887B56A41378D0AF4E_m7A8BC1D9301DAA4250AC3A12FC94C68F978568E2 (Func_1_tFD2A92E1FC61161A2078F93C77265D7CF6FAB600 * ___function0, const RuntimeMethod* method)
{
	return ((  Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B * (*) (Func_1_tFD2A92E1FC61161A2078F93C77265D7CF6FAB600 *, const RuntimeMethod*))Task_Run_TisRuntimeObject_mCF998C68623C833934353D12C469C935C60E5948_gshared)(___function0, method);
}
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>::GetAwaiter()
inline TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE  Task_1_GetAwaiter_mC5D6296782D721E8F72314B9AFF3876F18DA7DBE (Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE  (*) (Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC7A9A7BEAF6BEDFE75B38817D4FC3C128277B215 (TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>,ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Update>d__21>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m13E701CA06E23467A757BE6E40B5643A8ACF19C3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE * ___awaiter0, U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE *, U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m5C9BF0FC510E81F6E0B5533D8F0E8644DE7E42F4_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_m7D32B1F4B99BAFC491F0D3BB3BB6F9FEA0116E94 (TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::UpdateArUcoDetections(System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection_UpdateArUcoDetections_m122FFE6351F677B394738EB6EA52A20B437448D8 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, RuntimeObject* ___detections0, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Update>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__21_MoveNext_m89BACACDD456C57BB2A53365DA783C50747CE657 (U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A * __this, const RuntimeMethod* method);
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/<Update>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__21_SetStateMachine_m2E4F4349A771B6DE3FE08D2F4E35670A4AF2EE02 (U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
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
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection_Start_m8C01C3371CB66AD5CDBC9D747CA4F12591CC9A67 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArUcoMarkerDetection_Start_m8C01C3371CB66AD5CDBC9D747CA4F12591CC9A67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m6CEF33120FE54B478D58D09DB600871F8AAD8FD4((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m6CEF33120FE54B478D58D09DB600871F8AAD8FD4_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::DelayCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArUcoMarkerDetection_DelayCoroutine_mB46B026348997284F6EDFEF7AAF9F134386CBEAE (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArUcoMarkerDetection_DelayCoroutine_mB46B026348997284F6EDFEF7AAF9F134386CBEAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731 * L_0 = (U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731 *)il2cpp_codegen_object_new(U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731_il2cpp_TypeInfo_var);
		U3CDelayCoroutineU3Ed__20__ctor_m7C8D44A2A414E50A5EE21DEEDC04730A82A9BA13(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection_Update_m649203843A83CA06F7EF05993B148D766686211A (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArUcoMarkerDetection_Update_m649203843A83CA06F7EF05993B148D766686211A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m2103E6CBA9A7FE6A9D9C520050063A8C6D0BD280((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m2103E6CBA9A7FE6A9D9C520050063A8C6D0BD280_RuntimeMethod_var);
		return;
	}
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection_OnApplicationQuit_mBB1DFDED64354C9BE9B1238534E2C6A38DE20F67 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArUcoMarkerDetection_OnApplicationQuit_mBB1DFDED64354C9BE9B1238534E2C6A38DE20F67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_0 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F  L_1 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_mCFDC134A9B9CA9EA385CB6E71F4134B8D94E85AE((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_mCFDC134A9B9CA9EA385CB6E71F4134B8D94E85AE_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.Task ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::StartHoloLensMediaFrameSourceGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ArUcoMarkerDetection_StartHoloLensMediaFrameSourceGroups_m4CE484FD341CC630E87ED49D916EDCE8E65E3B02 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArUcoMarkerDetection_StartHoloLensMediaFrameSourceGroups_m4CE484FD341CC630E87ED49D916EDCE8E65E3B02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_0 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD  L_1 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_m99A11684A29ACFD9ABA5AD82ED0F7A3D7F3B696A((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_m99A11684A29ACFD9ABA5AD82ED0F7A3D7F3B696A_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::UpdateArUcoDetections(System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection_UpdateArUcoDetections_m122FFE6351F677B394738EB6EA52A20B437448D8 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, RuntimeObject* ___detections0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArUcoMarkerDetection_UpdateArUcoDetections_m122FFE6351F677B394738EB6EA52A20B437448D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (!_mediaFrameSourceGroupsStarted ||
		//     _pvMediaFrameSourceGroup == null)
		bool L_0 = __this->get__mediaFrameSourceGroupsStarted_12();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_1 = __this->get__pvMediaFrameSourceGroup_19();
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// if (detections.Count != 0)
		RuntimeObject* L_2 = ___detections0;
		NullCheck(L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<HoloLensForCV.DetectedArUcoMarker>::get_Count() */, ICollection_1_t63FCFB450D74584E94A43C474EA6B6AF7C6FE03D_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_00c8;
		}
	}
	{
		// if (_isWorldAnchored)
		bool L_4 = __this->get__isWorldAnchored_4();
		if (!L_4)
		{
			goto IL_0040;
		}
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		// DestroyImmediate(markerGo.GetComponent<WorldAnchor>());
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_markerGo_11();
		NullCheck(L_5);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_6 = GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971(L_5, /*hidden argument*/GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_6, /*hidden argument*/NULL);
		// _isWorldAnchored = false;
		__this->set__isWorldAnchored_4((bool)0);
		// }
		goto IL_0040;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003d;
		throw e;
	}

CATCH_003d:
	{ // begin catch(System.Exception)
		// catch (Exception)
		// throw;
		IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, ArUcoMarkerDetection_UpdateArUcoDetections_m122FFE6351F677B394738EB6EA52A20B437448D8_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0040:
	{
		// foreach (var detectedMarker in detections)
		RuntimeObject* L_7 = ___detections0;
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<HoloLensForCV.DetectedArUcoMarker>::GetEnumerator() */, IEnumerable_1_tBCE2561582F2DEB7EC3C61194F27696491D12075_il2cpp_TypeInfo_var, L_7);
		V_0 = L_8;
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b4;
		}

IL_0049:
		{
			// foreach (var detectedMarker in detections)
			RuntimeObject* L_9 = V_0;
			NullCheck(L_9);
			DetectedArUcoMarker_tE0CCF8E3491906BB001A66A3088664DA2F8C7730 * L_10 = InterfaceFuncInvoker0< DetectedArUcoMarker_tE0CCF8E3491906BB001A66A3088664DA2F8C7730 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<HoloLensForCV.DetectedArUcoMarker>::get_Current() */, IEnumerator_1_t597F0BD0933FE2F0AD56756E89DA6020283184A4_il2cpp_TypeInfo_var, L_9);
			// Vector3 position = CvUtils.Vec3FromFloat3(detectedMarker.Position);
			DetectedArUcoMarker_tE0CCF8E3491906BB001A66A3088664DA2F8C7730 * L_11 = L_10;
			NullCheck(L_11);
			Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_12 = DetectedArUcoMarker_get_Position_m125D910C88CB49B9059B9C534FEE5D32C3CE24DF(L_11, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = CvUtils_Vec3FromFloat3_m631823DDAB904406F2DBA1F0B4D7EDF168ECEE1C(L_12, /*hidden argument*/NULL);
			V_1 = L_13;
			// position.y *= -1f;
			float* L_14 = (&V_1)->get_address_of_y_3();
			float* L_15 = L_14;
			float L_16 = *((float*)L_15);
			*((float*)L_15) = (float)((float)il2cpp_codegen_multiply((float)L_16, (float)(-1.0f)));
			// Quaternion rotation = CvUtils.RotationQuatFromRodrigues(CvUtils.Vec3FromFloat3(detectedMarker.Rotation));
			DetectedArUcoMarker_tE0CCF8E3491906BB001A66A3088664DA2F8C7730 * L_17 = L_11;
			NullCheck(L_17);
			Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_18 = DetectedArUcoMarker_get_Rotation_m4BF53FC416A6FAEF803DCB0BA922F3FEE194EBBB(L_17, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = CvUtils_Vec3FromFloat3_m631823DDAB904406F2DBA1F0B4D7EDF168ECEE1C(L_18, /*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = CvUtils_RotationQuatFromRodrigues_m8EAEC5E80BD1F45F656ADF8B9215D644149D9332(L_19, /*hidden argument*/NULL);
			V_2 = L_20;
			// Matrix4x4 cameraToWorldUnity = CvUtils.Mat4x4FromFloat4x4(detectedMarker.CameraToWorldUnity);
			NullCheck(L_17);
			Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_21 = DetectedArUcoMarker_get_CameraToWorldUnity_m7B8DD796E06016AC92FC5E5171015C998A3B80DD(L_17, /*hidden argument*/NULL);
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_22 = CvUtils_Mat4x4FromFloat4x4_m2E21E4EEBE4E470B3D5A3199A9839476FC1BAC26(L_21, /*hidden argument*/NULL);
			// Matrix4x4 transformUnityCamera = CvUtils.TransformInUnitySpace(position, rotation);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_1;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_2;
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_25 = CvUtils_TransformInUnitySpace_mBD06B0A2A6CE9B6A3DC2D19F173207267FFC58C5(L_23, L_24, /*hidden argument*/NULL);
			V_3 = L_25;
			// Matrix4x4 transformUnityWorld = cameraToWorldUnity * transformUnityCamera;
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_26 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_27 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_22, L_26, /*hidden argument*/NULL);
			V_4 = L_27;
			// markerGo.transform.SetPositionAndRotation(
			//     CvUtils.GetVectorFromMatrix(transformUnityWorld),
			//     CvUtils.GetQuatFromMatrix(transformUnityWorld));
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_markerGo_11();
			NullCheck(L_28);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_30 = V_4;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = CvUtils_GetVectorFromMatrix_mB9197DB2927379ABAE3C20D66B407F83A96B4B8F(L_30, /*hidden argument*/NULL);
			Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_32 = V_4;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = CvUtils_GetQuatFromMatrix_mF942E7582B9F4253C9829A87E4C27B38B828D7B2(L_32, /*hidden argument*/NULL);
			NullCheck(L_29);
			Transform_SetPositionAndRotation_mDB9B34321018846FD7E2315CBE8D4A6612E3DE43(L_29, L_31, L_33, /*hidden argument*/NULL);
		}

IL_00b4:
		{
			// foreach (var detectedMarker in detections)
			RuntimeObject* L_34 = V_0;
			NullCheck(L_34);
			bool L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_0049;
			}
		}

IL_00bc:
		{
			IL2CPP_LEAVE(0xDB, FINALLY_00be);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00be;
	}

FINALLY_00be:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_36 = V_0;
			if (!L_36)
			{
				goto IL_00c7;
			}
		}

IL_00c1:
		{
			RuntimeObject* L_37 = V_0;
			NullCheck(L_37);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_37);
		}

IL_00c7:
		{
			IL2CPP_END_FINALLY(190)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(190)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDB, IL_00db)
	}

IL_00c8:
	{
		// markerGo.AddComponent<WorldAnchor>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = __this->get_markerGo_11();
		NullCheck(L_38);
		GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF(L_38, /*hidden argument*/GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var);
		// _isWorldAnchored = true;
		__this->set__isWorldAnchored_4((bool)1);
	}

IL_00db:
	{
		// myText.text = "Began streaming sensor frames. Double tap to end streaming.";
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_39 = __this->get_myText_5();
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, _stringLiteral096192D4CCCF8C80B8762E50B0589991A90EB02D);
		// }
		return;
	}
}
// System.Threading.Tasks.Task ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::StopHoloLensMediaFrameSourceGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ArUcoMarkerDetection_StopHoloLensMediaFrameSourceGroup_mE75A85457562EFB9808F9028E10E77E02024710F (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArUcoMarkerDetection_StopHoloLensMediaFrameSourceGroup_mE75A85457562EFB9808F9028E10E77E02024710F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_0 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277  L_1 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m4EDD11C19C7C26CF3E75C85652B523CAFE7FA572((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m4EDD11C19C7C26CF3E75C85652B523CAFE7FA572_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Byte* ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::GetByteArrayFromSoftwareBitmap(Windows.Graphics.Imaging.SoftwareBitmap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* ArUcoMarkerDetection_GetByteArrayFromSoftwareBitmap_m606D385839DDAF173138C95D9D48B272B50D1CE1 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * ___sb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArUcoMarkerDetection_GetByteArrayFromSoftwareBitmap_m606D385839DDAF173138C95D9D48B272B50D1CE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * V_0 = NULL;
	BitmapBuffer_tAB279453A7114B91ACFEDEAA2F3E22040B026D91 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint32_t V_4 = 0;
	uint8_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (sb == null)
		SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * L_0 = ___sb0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (uint8_t*)((((uintptr_t)0)));
	}

IL_0006:
	{
		// SoftwareBitmap sbCopy = new SoftwareBitmap(sb.BitmapPixelFormat, sb.PixelWidth, sb.PixelHeight);
		SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * L_1 = ___sb0;
		NullCheck(L_1);
		int32_t L_2 = SoftwareBitmap_get_BitmapPixelFormat_m7AAF02FED0729C6527D012B064D6DFAFB63056D4(L_1, /*hidden argument*/NULL);
		SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * L_3 = ___sb0;
		NullCheck(L_3);
		int32_t L_4 = SoftwareBitmap_get_PixelWidth_m99F5BAB93A095B81743F81424BF7024D7D3E8D52(L_3, /*hidden argument*/NULL);
		SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * L_5 = ___sb0;
		NullCheck(L_5);
		int32_t L_6 = SoftwareBitmap_get_PixelHeight_m371B24AF945EE588975E740133CA3089A79C7EED(L_5, /*hidden argument*/NULL);
		SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * L_7 = (SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C *)il2cpp_codegen_object_new(SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C_il2cpp_TypeInfo_var);
		SoftwareBitmap__ctor_m53165F3F53419EECADB0DA219035F73B4E45EDED(L_7, L_2, L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Interlocked.Exchange(ref sbCopy, sb);
		SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * L_8 = ___sb0;
		InterlockedExchangeImpl<SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C *>((SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C **)(&V_0), L_8);
		// using (var input = sbCopy.LockBuffer(BitmapBufferAccessMode.Read))
		SoftwareBitmap_t871B3C0711A694F4528932C74C6772A4B469710C * L_9 = V_0;
		NullCheck(L_9);
		BitmapBuffer_tAB279453A7114B91ACFEDEAA2F3E22040B026D91 * L_10 = SoftwareBitmap_LockBuffer_mFFCA8BB5AB9518C5BB44EDD29A603A6550F2009D(L_9, 0, /*hidden argument*/NULL);
		V_1 = L_10;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			// using (var inputReference = input.CreateReference())
			BitmapBuffer_tAB279453A7114B91ACFEDEAA2F3E22040B026D91 * L_11 = V_1;
			NullCheck(L_11);
			RuntimeObject* L_12 = BitmapBuffer_CreateReference_m4D40B859E74C8429B325A6D2671C9ABBA44FBD1D(L_11, /*hidden argument*/NULL);
			V_2 = L_12;
		}

IL_0036:
		try
		{ // begin try (depth: 2)
			// ((IMemoryBufferByteAccess)inputReference).GetBuffer(out inputBytes, out inputCapacity);
			RuntimeObject* L_13 = V_2;
			NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_13, IMemoryBufferByteAccess_t21FDE02ADDCA6917E3461F40FAF32D0710A81864_il2cpp_TypeInfo_var)));
			InterfaceActionInvoker2< uint8_t**, uint32_t* >::Invoke(0 /* System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection/IMemoryBufferByteAccess::GetBuffer(System.Byte*&,System.UInt32&) */, IMemoryBufferByteAccess_t21FDE02ADDCA6917E3461F40FAF32D0710A81864_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_13, IMemoryBufferByteAccess_t21FDE02ADDCA6917E3461F40FAF32D0710A81864_il2cpp_TypeInfo_var)), (uint8_t**)(&V_3), (uint32_t*)(&V_4));
			// return inputBytes;
			uint8_t* L_14 = V_3;
			V_5 = (uint8_t*)L_14;
			IL2CPP_LEAVE(0x5E, FINALLY_004a);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004a;
		}

FINALLY_004a:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_15 = V_2;
				if (!L_15)
				{
					goto IL_0053;
				}
			}

IL_004d:
			{
				RuntimeObject* L_16 = V_2;
				NullCheck(L_16);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_16);
			}

IL_0053:
			{
				IL2CPP_END_FINALLY(74)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(74)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x5E, FINALLY_0054);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		{
			BitmapBuffer_tAB279453A7114B91ACFEDEAA2F3E22040B026D91 * L_17 = V_1;
			if (!L_17)
			{
				goto IL_005d;
			}
		}

IL_0057:
		{
			BitmapBuffer_tAB279453A7114B91ACFEDEAA2F3E22040B026D91 * L_18 = V_1;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_18);
		}

IL_005d:
		{
			IL2CPP_END_FINALLY(84)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		// }
		uint8_t* L_19 = V_5;
		return (uint8_t*)(L_19);
	}
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::InitializeHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection_InitializeHandler_mF45E86244DBBB774A2A704F74DAE44E3F379FF5C (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ArUcoMarkerDetection_InitializeHandler_mF45E86244DBBB774A2A704F74DAE44E3F379FF5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gestureRecognizer = new GestureRecognizer();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_0 = (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *)il2cpp_codegen_object_new(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_il2cpp_TypeInfo_var);
		GestureRecognizer__ctor_m4EC0013B225C0189D0ACB2DC77092C809764F1D5(L_0, /*hidden argument*/NULL);
		__this->set__gestureRecognizer_22(L_0);
		// _gestureRecognizer.SetRecognizableGestures(GestureSettings.DoubleTap);
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_1 = __this->get__gestureRecognizer_22();
		NullCheck(L_1);
		GestureRecognizer_SetRecognizableGestures_mF459BAE914B9B2E01E7B1652ACF23C5C2722DA68(L_1, 2, /*hidden argument*/NULL);
		// _gestureRecognizer.StartCapturingGestures();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_2 = __this->get__gestureRecognizer_22();
		NullCheck(L_2);
		GestureRecognizer_StartCapturingGestures_mD02F289C8263C8EACB47B4593E55C8B767C524FA(L_2, /*hidden argument*/NULL);
		// _gestureRecognizer.Tapped += GestureRecognizer_Tapped;
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_3 = __this->get__gestureRecognizer_22();
		Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * L_4 = (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 *)il2cpp_codegen_object_new(Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var);
		Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0(L_4, __this, (intptr_t)((intptr_t)ArUcoMarkerDetection_GestureRecognizer_Tapped_m2C884AFF72EF0911F57E240A476E1110A1C5EBB4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mC172C98F4F0CF247C0880F1F05D557C9005F0FF0_RuntimeMethod_var);
		NullCheck(L_3);
		GestureRecognizer_add_Tapped_mD5587B3F0115F9AC0599D555E2988E63136DA3EC(L_3, L_4, /*hidden argument*/NULL);
		// Debug.Log("Gesture recognizer initialized.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralDE4748660C68C578CE09DBF781372426E97DA31B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::GestureRecognizer_Tapped(UnityEngine.XR.WSA.Input.TappedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection_GestureRecognizer_Tapped_m2C884AFF72EF0911F57E240A476E1110A1C5EBB4 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  ___obj0, const RuntimeMethod* method)
{
	{
		// StopHoloLensMediaFrameSourceGroup();
		ArUcoMarkerDetection_StopHoloLensMediaFrameSourceGroup_mE75A85457562EFB9808F9028E10E77E02024710F(__this, /*hidden argument*/NULL);
		// CloseHandler();
		ArUcoMarkerDetection_CloseHandler_mBB5A3624E66BBBC34A4F1B06DD2E6553FEA2DF91(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::CloseHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection_CloseHandler_mBB5A3624E66BBBC34A4F1B06DD2E6553FEA2DF91 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method)
{
	{
		// _gestureRecognizer.StopCapturingGestures();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_0 = __this->get__gestureRecognizer_22();
		NullCheck(L_0);
		GestureRecognizer_StopCapturingGestures_mBA5D5DFFC507CE972150A242E9DFC59B06121D61(L_0, /*hidden argument*/NULL);
		// _gestureRecognizer.Dispose();
		GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * L_1 = __this->get__gestureRecognizer_22();
		NullCheck(L_1);
		GestureRecognizer_Dispose_mCDB9196736129DA85372020E13A8768175E9A97C(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArUcoMarkerDetection__ctor_m9F585B2B0C0499C9B216654C31821CACF36E054A (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method)
{
	{
		// public int skipFrames = 3;
		__this->set_skipFrames_14(3);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker> ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection::<Update>b__21_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArUcoMarkerDetection_U3CUpdateU3Eb__21_0_m58CAABDC9BD1CE819881C27CB69711B201C1C6A5 (ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * __this, const RuntimeMethod* method)
{
	{
		// var detections = await Task.Run(() => _pvMediaFrameSourceGroup.DetectArUcoMarkers(_sensorType));
		MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_0 = __this->get__pvMediaFrameSourceGroup_19();
		int32_t L_1 = __this->get__sensorType_20();
		NullCheck(L_0);
		RuntimeObject* L_2 = MediaFrameSourceGroup_DetectArUcoMarkers_mD7AE9A0A18CAA3E7B1F7F5BDA13E6EFC50DBFCC4(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<DelayCoroutine>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayCoroutineU3Ed__20__ctor_m7C8D44A2A414E50A5EE21DEEDC04730A82A9BA13 (U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<DelayCoroutine>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayCoroutineU3Ed__20_System_IDisposable_Dispose_m8AF1E317496FC728835BAB488D8EDBAE669D61A7 (U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<DelayCoroutine>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayCoroutineU3Ed__20_MoveNext_mCB3D09613A649AE493C70866D93BF5CAB3D83A67 (U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayCoroutineU3Ed__20_MoveNext_mCB3D09613A649AE493C70866D93BF5CAB3D83A67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("Started Coroutine at timestamp : " + Time.time);
		float L_3 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteralA499F23BD4DF81A1FE25F87B9DEE935FD9181D86, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_6, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_7 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_7, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0049:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("Finished Coroutine at timestamp : " + Time.time);
		float L_8 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_9 = L_8;
		RuntimeObject * L_10 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral16696378F6BCFDD42650410E7E122F251F3B694F, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_11, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<DelayCoroutine>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayCoroutineU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m42EAC980FD915993BC4E0004B9DBC0F6EA939326 (U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<DelayCoroutine>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayCoroutineU3Ed__20_System_Collections_IEnumerator_Reset_m005F9CBD7A06730A4586F09E191DA969A9491BA4 (U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDelayCoroutineU3Ed__20_System_Collections_IEnumerator_Reset_m005F9CBD7A06730A4586F09E191DA969A9491BA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDelayCoroutineU3Ed__20_System_Collections_IEnumerator_Reset_m005F9CBD7A06730A4586F09E191DA969A9491BA4_RuntimeMethod_var);
	}
}
// System.Object ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<DelayCoroutine>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayCoroutineU3Ed__20_System_Collections_IEnumerator_get_Current_mFDB9E91CB4033CD3998494CD8A5A98E980715AF8 (U3CDelayCoroutineU3Ed__20_t4534007B014F14C073AB212C4406DDE82A771731 * __this, const RuntimeMethod* method)
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
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<OnApplicationQuit>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__22_MoveNext_m7515B44248DA91C31F1F1C8826DA89DC7E9685F9 (U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnApplicationQuitU3Ed__22_MoveNext_m7515B44248DA91C31F1F1C8826DA89DC7E9685F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0046;
			}
		}

IL_0011:
		{
			// await StopHoloLensMediaFrameSourceGroup();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_3 = V_1;
			NullCheck(L_3);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = ArUcoMarkerDetection_StopHoloLensMediaFrameSourceGroup_mE75A85457562EFB9808F9028E10E77E02024710F(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_5 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			bool L_6 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_6)
			{
				goto IL_0062;
			}
		}

IL_0026:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_8 = V_2;
			__this->set_U3CU3Eu__1_3(L_8);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_m4BA3BB2282801A9C7185A159A250D51118DC666A((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_9, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F_m4BA3BB2282801A9C7185A159A250D51118DC666A_RuntimeMethod_var);
			goto IL_0095;
		}

IL_0046:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_10 = __this->get_U3CU3Eu__1_3();
			V_2 = L_10;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_11 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0062:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			goto IL_0082;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006b;
		throw e;
	}

CATCH_006b:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_13 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_14 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_13, L_14, /*hidden argument*/NULL);
		goto IL_0095;
	} // end catch (depth: 1)

IL_0082:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_15 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_15, /*hidden argument*/NULL);
	}

IL_0095:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnApplicationQuitU3Ed__22_MoveNext_m7515B44248DA91C31F1F1C8826DA89DC7E9685F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F * _thisAdjusted = reinterpret_cast<U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F *>(__this + _offset);
	U3COnApplicationQuitU3Ed__22_MoveNext_m7515B44248DA91C31F1F1C8826DA89DC7E9685F9(_thisAdjusted, method);
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<OnApplicationQuit>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnApplicationQuitU3Ed__22_SetStateMachine_m2FA5713E254642E359D9EFCCA06E296F0967037D (U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3COnApplicationQuitU3Ed__22_SetStateMachine_m2FA5713E254642E359D9EFCCA06E296F0967037D_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F * _thisAdjusted = reinterpret_cast<U3COnApplicationQuitU3Ed__22_t31F4DE964D062EDD7EE1D4F051D896B9A1648D4F *>(__this + _offset);
	U3COnApplicationQuitU3Ed__22_SetStateMachine_m2FA5713E254642E359D9EFCCA06E296F0967037D(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Start>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__19_MoveNext_m0A01F356A9023BE8AAA099B78CBA8C52B48324A7 (U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__19_MoveNext_m0A01F356A9023BE8AAA099B78CBA8C52B48324A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004f;
			}
		}

IL_0011:
		{
			// InitializeHandler();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_3 = V_1;
			NullCheck(L_3);
			ArUcoMarkerDetection_InitializeHandler_mF45E86244DBBB774A2A704F74DAE44E3F379FF5C(L_3, /*hidden argument*/NULL);
			// await StartHoloLensMediaFrameSourceGroups();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_4 = V_1;
			NullCheck(L_4);
			Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_5 = ArUcoMarkerDetection_StartHoloLensMediaFrameSourceGroups_m4CE484FD341CC630E87ED49D916EDCE8E65E3B02(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_6 = Task_GetAwaiter_m73027D5E4C16E961C658B83526BED8E32FD2AC6C(L_5, /*hidden argument*/NULL);
			V_2 = L_6;
			bool L_7 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_7)
			{
				goto IL_006b;
			}
		}

IL_002c:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_9 = V_2;
			__this->set_U3CU3Eu__1_3(L_9);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m75724F2B86996B9DB73046FC593AC5E6037F0367((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_10, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325_m75724F2B86996B9DB73046FC593AC5E6037F0367_RuntimeMethod_var);
			goto IL_00d2;
		}

IL_004f:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_11 = __this->get_U3CU3Eu__1_3();
			V_2 = L_11;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_12 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006b:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			// StartCoroutine(DelayCoroutine());
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_14 = V_1;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_15 = V_1;
			NullCheck(L_15);
			RuntimeObject* L_16 = ArUcoMarkerDetection_DelayCoroutine_mB46B026348997284F6EDFEF7AAF9F134386CBEAE(L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(L_14, L_16, /*hidden argument*/NULL);
			// markerGo.transform.localScale = new Vector3(markerSize, markerSize, markerSize);
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_17 = V_1;
			NullCheck(L_17);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = L_17->get_markerGo_11();
			NullCheck(L_18);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_20 = V_1;
			NullCheck(L_20);
			float L_21 = L_20->get_markerSize_9();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_22 = V_1;
			NullCheck(L_22);
			float L_23 = L_22->get_markerSize_9();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_24 = V_1;
			NullCheck(L_24);
			float L_25 = L_24->get_markerSize_9();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26;
			memset((&L_26), 0, sizeof(L_26));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_26), L_21, L_23, L_25, /*hidden argument*/NULL);
			NullCheck(L_19);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_19, L_26, /*hidden argument*/NULL);
			goto IL_00bf;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a8;
		throw e;
	}

CATCH_00a8:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_28 = V_3;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_27, L_28, /*hidden argument*/NULL);
		goto IL_00d2;
	} // end catch (depth: 1)

IL_00bf:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_29 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_29, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__19_MoveNext_m0A01F356A9023BE8AAA099B78CBA8C52B48324A7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 *>(__this + _offset);
	U3CStartU3Ed__19_MoveNext_m0A01F356A9023BE8AAA099B78CBA8C52B48324A7(_thisAdjusted, method);
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Start>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__19_SetStateMachine_m01ACD9CE3C0DB0FB9C566B8B1A5F73586739FF7A (U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartU3Ed__19_SetStateMachine_m01ACD9CE3C0DB0FB9C566B8B1A5F73586739FF7A_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 * _thisAdjusted = reinterpret_cast<U3CStartU3Ed__19_t06A6F678FBEE8F5C066F4AB39094BA88E0CFB325 *>(__this + _offset);
	U3CStartU3Ed__19_SetStateMachine_m01ACD9CE3C0DB0FB9C566B8B1A5F73586739FF7A(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StartHoloLensMediaFrameSourceGroups>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_MoveNext_m923FAEDEAD8E99621CC9B550115165B5028AFF2D (U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_MoveNext_m923FAEDEAD8E99621CC9B550115165B5028AFF2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 5);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_01d1;
			}
		}

IL_0014:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_027b;
			}
		}

IL_001b:
		{
			// myText.text = "Initializing MediaFrameSourceGroups...";
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_4 = V_1;
			NullCheck(L_4);
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_5 = L_4->get_myText_5();
			NullCheck(L_5);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralF75B3E7B7E35C807FE47CB6DF31B649CAE4C4793);
			// Debug.Log("HoloLensForCVUnity.ArUcoDetection.StartHoloLensMediaFrameSourceGroup: Setting up sensor frame streamer");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral9163E165EC5C310FF61D5C0203783925317872A7, /*hidden argument*/NULL);
			// _sensorType = (SensorType)sensorTypePv;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_6 = V_1;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_7 = V_1;
			NullCheck(L_7);
			int32_t L_8 = L_7->get_sensorTypePv_7();
			NullCheck(L_6);
			L_6->set__sensorType_20(L_8);
			// _sensorFrameStreamerPv = new SensorFrameStreamer();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_9 = V_1;
			SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * L_10 = (SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 *)il2cpp_codegen_object_new(SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849_il2cpp_TypeInfo_var);
			SensorFrameStreamer__ctor_m2A7FE63EE0D6B674FB9C840663B0EAFBF377C657(L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			L_9->set__sensorFrameStreamerPv_15(L_10);
			// _sensorFrameStreamerPv.Enable(_sensorType);
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_11 = V_1;
			NullCheck(L_11);
			SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * L_12 = L_11->get__sensorFrameStreamerPv_15();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_13 = V_1;
			NullCheck(L_13);
			int32_t L_14 = L_13->get__sensorType_20();
			NullCheck(L_12);
			SensorFrameStreamer_Enable_m76FACD01E7F7662E5C8045742125D0D6494E82AD(L_12, L_14, /*hidden argument*/NULL);
			// Debug.Log("HoloLensForCVUnity.ArUcoDetection.StartHoloLensMediaFrameSourceGroup: Setting up spatial perception");
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral327554AAE65FB95D6FA8FD00D02633ABE9C7D52B, /*hidden argument*/NULL);
			// _spatialPerception = new SpatialPerception();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_15 = V_1;
			SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * L_16 = (SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 *)il2cpp_codegen_object_new(SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577_il2cpp_TypeInfo_var);
			SpatialPerception__ctor_mEF5E6D7D5750DD1AF34E9F594E10846F1EB007D3(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			L_15->set__spatialPerception_16(L_16);
			// Debug.Log("HoloLensForCVUnity.ArUcoDetection.StartHoloLensMediaFrameSourceGroup: Setting up the media frame source group");
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralF7950E4EFD272DC2F8DE443D5A52450937E87D81, /*hidden argument*/NULL);
			// if (sensorTypePv == CvUtils.SensorTypeUnity.PhotoVideo)
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_17 = V_1;
			NullCheck(L_17);
			int32_t L_18 = L_17->get_sensorTypePv_7();
			if (L_18)
			{
				goto IL_008d;
			}
		}

IL_0084:
		{
			// _mediaFrameSourceGroup = MediaFrameSourceGroupType.PhotoVideoCamera;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_19 = V_1;
			NullCheck(L_19);
			L_19->set__mediaFrameSourceGroup_18(0);
			goto IL_0094;
		}

IL_008d:
		{
			// _mediaFrameSourceGroup = MediaFrameSourceGroupType.HoloLensResearchModeSensors;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_20 = V_1;
			NullCheck(L_20);
			L_20->set__mediaFrameSourceGroup_18(1);
		}

IL_0094:
		{
			// _deviceType = (HoloLensForCV.DeviceType)deviceType;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_21 = V_1;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_22 = V_1;
			NullCheck(L_22);
			int32_t L_23 = L_22->get_deviceType_6();
			NullCheck(L_21);
			L_21->set__deviceType_17(L_23);
			// _pvMediaFrameSourceGroup = new MediaFrameSourceGroup(
			//     _mediaFrameSourceGroup,
			//     _spatialPerception,
			//     _deviceType,
			//     _sensorFrameStreamerPv,
			// 
			//     
			//     calibParams.focalLength.x, calibParams.focalLength.y,
			//     calibParams.principalPoint.x, calibParams.principalPoint.y,
			//     calibParams.radialDistortion.x, calibParams.radialDistortion.y, calibParams.radialDistortion.z,
			//     calibParams.tangentialDistortion.x, calibParams.tangentialDistortion.y,
			//     calibParams.imageHeight, calibParams.imageWidth);
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_24 = V_1;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_25 = V_1;
			NullCheck(L_25);
			int32_t L_26 = L_25->get__mediaFrameSourceGroup_18();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_27 = V_1;
			NullCheck(L_27);
			SpatialPerception_tDD728203A074E13BCA1E015A265D6CC013A08577 * L_28 = L_27->get__spatialPerception_16();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_29 = V_1;
			NullCheck(L_29);
			int32_t L_30 = L_29->get__deviceType_17();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_31 = V_1;
			NullCheck(L_31);
			SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 * L_32 = L_31->get__sensorFrameStreamerPv_15();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_33 = V_1;
			NullCheck(L_33);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_34 = L_33->get_calibParams_10();
			NullCheck(L_34);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_35 = L_34->get_address_of_focalLength_4();
			float L_36 = L_35->get_x_0();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_37 = V_1;
			NullCheck(L_37);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_38 = L_37->get_calibParams_10();
			NullCheck(L_38);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_39 = L_38->get_address_of_focalLength_4();
			float L_40 = L_39->get_y_1();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_41 = V_1;
			NullCheck(L_41);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_42 = L_41->get_calibParams_10();
			NullCheck(L_42);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_43 = L_42->get_address_of_principalPoint_5();
			float L_44 = L_43->get_x_0();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_45 = V_1;
			NullCheck(L_45);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_46 = L_45->get_calibParams_10();
			NullCheck(L_46);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_47 = L_46->get_address_of_principalPoint_5();
			float L_48 = L_47->get_y_1();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_49 = V_1;
			NullCheck(L_49);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_50 = L_49->get_calibParams_10();
			NullCheck(L_50);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_51 = L_50->get_address_of_radialDistortion_6();
			float L_52 = L_51->get_x_2();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_53 = V_1;
			NullCheck(L_53);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_54 = L_53->get_calibParams_10();
			NullCheck(L_54);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_55 = L_54->get_address_of_radialDistortion_6();
			float L_56 = L_55->get_y_3();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_57 = V_1;
			NullCheck(L_57);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_58 = L_57->get_calibParams_10();
			NullCheck(L_58);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_59 = L_58->get_address_of_radialDistortion_6();
			float L_60 = L_59->get_z_4();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_61 = V_1;
			NullCheck(L_61);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_62 = L_61->get_calibParams_10();
			NullCheck(L_62);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_63 = L_62->get_address_of_tangentialDistortion_7();
			float L_64 = L_63->get_x_0();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_65 = V_1;
			NullCheck(L_65);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_66 = L_65->get_calibParams_10();
			NullCheck(L_66);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_67 = L_66->get_address_of_tangentialDistortion_7();
			float L_68 = L_67->get_y_1();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_69 = V_1;
			NullCheck(L_69);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_70 = L_69->get_calibParams_10();
			NullCheck(L_70);
			int32_t L_71 = L_70->get_imageHeight_9();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_72 = V_1;
			NullCheck(L_72);
			CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * L_73 = L_72->get_calibParams_10();
			NullCheck(L_73);
			int32_t L_74 = L_73->get_imageWidth_8();
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_75 = (MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 *)il2cpp_codegen_object_new(MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8_il2cpp_TypeInfo_var);
			MediaFrameSourceGroup__ctor_m3DC45A3F6DA063A844CBB8432A506FF113A3BCEB(L_75, L_26, L_28, L_30, L_32, L_36, L_40, L_44, L_48, L_52, L_56, L_60, L_64, L_68, L_71, L_74, /*hidden argument*/NULL);
			NullCheck(L_24);
			L_24->set__pvMediaFrameSourceGroup_19(L_75);
			// _pvMediaFrameSourceGroup.Enable(_sensorType);
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_76 = V_1;
			NullCheck(L_76);
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_77 = L_76->get__pvMediaFrameSourceGroup_19();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_78 = V_1;
			NullCheck(L_78);
			int32_t L_79 = L_78->get__sensorType_20();
			NullCheck(L_77);
			MediaFrameSourceGroup_Enable_mFB95B66C15BEAD3C5AC911DD021551BBE8692532(L_77, L_79, /*hidden argument*/NULL);
			// myText.text = "Starting MediaFrameSourceGroups...";
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_80 = V_1;
			NullCheck(L_80);
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_81 = L_80->get_myText_5();
			NullCheck(L_81);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_81, _stringLiteral4ED5D681651AC9A6E74DC13E8C360629648BE9D1);
			// Debug.Log("HoloLensForCVUnity.ArUcoDetection.StartHoloLensMediaFrameSourceGroup: Starting the media frame source group");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral04611D9C9FD471AC37CDE16C100358DDBCFE9006, /*hidden argument*/NULL);
			// await _pvMediaFrameSourceGroup.StartAsync();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_82 = V_1;
			NullCheck(L_82);
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_83 = L_82->get__pvMediaFrameSourceGroup_19();
			NullCheck(L_83);
			RuntimeObject* L_84 = MediaFrameSourceGroup_StartAsync_m526B5B8956EB089601E9B7CA2A9AFE318DD6490C(L_83, /*hidden argument*/NULL);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_85 = WindowsRuntimeSystemExtensions_GetAwaiter_m1E46B83D2D5BEE385305CFFD9496572784AB5D2C(L_84, /*hidden argument*/NULL);
			V_2 = L_85;
			bool L_86 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_86)
			{
				goto IL_01ed;
			}
		}

IL_01ae:
		{
			int32_t L_87 = 0;
			V_0 = L_87;
			__this->set_U3CU3E1__state_0(L_87);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_88 = V_2;
			__this->set_U3CU3Eu__1_3(L_88);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_89 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_mE23C90CD7B553A58EFEB942BA43E7F7C9CDE2705((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_89, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_mE23C90CD7B553A58EFEB942BA43E7F7C9CDE2705_RuntimeMethod_var);
			goto IL_02ca;
		}

IL_01d1:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_90 = __this->get_U3CU3Eu__1_3();
			V_2 = L_90;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_91 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_91, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_92 = (-1);
			V_0 = L_92;
			__this->set_U3CU3E1__state_0(L_92);
		}

IL_01ed:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			// _mediaFrameSourceGroupsStarted = true;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_93 = V_1;
			NullCheck(L_93);
			L_93->set__mediaFrameSourceGroupsStarted_12((bool)1);
			// myText.text = "MediaFrameSourceGroups started...";
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_94 = V_1;
			NullCheck(L_94);
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_95 = L_94->get_myText_5();
			NullCheck(L_95);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_95, _stringLiteralB4E4829D6802BCDC01293620CF84BEF699ECC5A4);
		}

IL_020b:
		try
		{ // begin try (depth: 2)
			// _unityCoordinateSystem = Marshal.GetObjectForIUnknown(WorldManager.GetNativeISpatialCoordinateSystemPtr()) as SpatialCoordinateSystem;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_96 = V_1;
			intptr_t L_97 = WorldManager_GetNativeISpatialCoordinateSystemPtr_m5B00922BB3D525275747790196EB0C639E245953(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
			RuntimeObject * L_98 = Marshal_GetObjectForIUnknown_m4ABB91E8D7A1F5B5F9341FCBCD7100A4DC5E1DE2((intptr_t)L_97, /*hidden argument*/NULL);
			NullCheck(L_96);
			L_96->set__unityCoordinateSystem_21(((SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 *)IsInstSealed((RuntimeObject*)L_98, SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658_il2cpp_TypeInfo_var)));
			// }
			goto IL_022f;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0222;
			throw e;
		}

CATCH_0222:
		{ // begin catch(System.Exception)
			// catch (Exception)
			// Debug.Log("ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection: Could not get pointer to Unity spatial coordinate system.");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral9A378E7EAF9162C44F1750F07037C7BE94E62B6E, /*hidden argument*/NULL);
			// throw;
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_MoveNext_m923FAEDEAD8E99621CC9B550115165B5028AFF2D_RuntimeMethod_var);
		} // end catch (depth: 2)

IL_022f:
		{
			// await _pvMediaFrameSourceGroup.StartArUcoMarkerTrackerAsync(
			//     markerSize,
			//     (int)arUcoDictionaryName,
			//     _unityCoordinateSystem);
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_99 = V_1;
			NullCheck(L_99);
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_100 = L_99->get__pvMediaFrameSourceGroup_19();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_101 = V_1;
			NullCheck(L_101);
			float L_102 = L_101->get_markerSize_9();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_103 = V_1;
			NullCheck(L_103);
			int32_t L_104 = L_103->get_arUcoDictionaryName_8();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_105 = V_1;
			NullCheck(L_105);
			SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_106 = L_105->get__unityCoordinateSystem_21();
			NullCheck(L_100);
			RuntimeObject* L_107 = MediaFrameSourceGroup_StartArUcoMarkerTrackerAsync_m2EDD5D4A4FF5098558D4F69E45DDF3E39CE380F2(L_100, L_102, L_104, L_106, /*hidden argument*/NULL);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_108 = WindowsRuntimeSystemExtensions_GetAwaiter_m1E46B83D2D5BEE385305CFFD9496572784AB5D2C(L_107, /*hidden argument*/NULL);
			V_2 = L_108;
			bool L_109 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_109)
			{
				goto IL_0297;
			}
		}

IL_025b:
		{
			int32_t L_110 = 1;
			V_0 = L_110;
			__this->set_U3CU3E1__state_0(L_110);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_111 = V_2;
			__this->set_U3CU3Eu__1_3(L_111);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_112 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_mE23C90CD7B553A58EFEB942BA43E7F7C9CDE2705((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_112, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD_mE23C90CD7B553A58EFEB942BA43E7F7C9CDE2705_RuntimeMethod_var);
			goto IL_02ca;
		}

IL_027b:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_113 = __this->get_U3CU3Eu__1_3();
			V_2 = L_113;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_114 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_114, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_115 = (-1);
			V_0 = L_115;
			__this->set_U3CU3E1__state_0(L_115);
		}

IL_0297:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			goto IL_02b7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_02a0;
		throw e;
	}

CATCH_02a0:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_116 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_117 = V_3;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_116, L_117, /*hidden argument*/NULL);
		goto IL_02ca;
	} // end catch (depth: 1)

IL_02b7:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_118 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_118, /*hidden argument*/NULL);
	}

IL_02ca:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_MoveNext_m923FAEDEAD8E99621CC9B550115165B5028AFF2D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD * _thisAdjusted = reinterpret_cast<U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD *>(__this + _offset);
	U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_MoveNext_m923FAEDEAD8E99621CC9B550115165B5028AFF2D(_thisAdjusted, method);
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StartHoloLensMediaFrameSourceGroups>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_SetStateMachine_mB6ED45F4EB1196243094715857336A9295B228D6 (U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_SetStateMachine_mB6ED45F4EB1196243094715857336A9295B228D6_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD * _thisAdjusted = reinterpret_cast<U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_tE3B881C5A5E06B49BD235E52993E355C4ECD00DD *>(__this + _offset);
	U3CStartHoloLensMediaFrameSourceGroupsU3Ed__23_SetStateMachine_mB6ED45F4EB1196243094715857336A9295B228D6(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StopHoloLensMediaFrameSourceGroup>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_MoveNext_mB83D4D857D6E7A97A439DD36BDFFE3439C98C56B (U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_MoveNext_mB83D4D857D6E7A97A439DD36BDFFE3439C98C56B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * V_1 = NULL;
	TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0060;
			}
		}

IL_0011:
		{
			// if (!_mediaFrameSourceGroupsStarted ||
			//     _pvMediaFrameSourceGroup == null)
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = L_3->get__mediaFrameSourceGroupsStarted_12();
			if (!L_4)
			{
				goto IL_0021;
			}
		}

IL_0019:
		{
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_5 = V_1;
			NullCheck(L_5);
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_6 = L_5->get__pvMediaFrameSourceGroup_19();
			if (L_6)
			{
				goto IL_0026;
			}
		}

IL_0021:
		{
			// return;
			goto IL_00c1;
		}

IL_0026:
		{
			// await _pvMediaFrameSourceGroup.StopAsync();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_7 = V_1;
			NullCheck(L_7);
			MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 * L_8 = L_7->get__pvMediaFrameSourceGroup_19();
			NullCheck(L_8);
			RuntimeObject* L_9 = MediaFrameSourceGroup_StopAsync_m7BD719AB4F6251735FE4EAFA4A0C48794CD23368(L_8, /*hidden argument*/NULL);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_10 = WindowsRuntimeSystemExtensions_GetAwaiter_m1E46B83D2D5BEE385305CFFD9496572784AB5D2C(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			bool L_11 = TaskAwaiter_get_IsCompleted_m5A2B6FEA0ED3B01B5E88DBF2D8BC4A45652ABD87((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			if (L_11)
			{
				goto IL_007c;
			}
		}

IL_0040:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_13 = V_2;
			__this->set_U3CU3Eu__1_3(L_13);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m3604E0B1B00613F34E330F5FB2FA3FAC21F0570F((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_14, (TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), (U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F_TisU3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277_m3604E0B1B00613F34E330F5FB2FA3FAC21F0570F_RuntimeMethod_var);
			goto IL_00d4;
		}

IL_0060:
		{
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F  L_15 = __this->get_U3CU3Eu__1_3();
			V_2 = L_15;
			TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F * L_16 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_007c:
		{
			TaskAwaiter_GetResult_m89868C01592AC2B06CE1FD42D9B9C187C6FD928A((TaskAwaiter_t0CDE8DBB564F0A0EA55FA6B3D43EEF96BC26252F *)(&V_2), /*hidden argument*/NULL);
			// _pvMediaFrameSourceGroup = null;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_18 = V_1;
			NullCheck(L_18);
			L_18->set__pvMediaFrameSourceGroup_19((MediaFrameSourceGroup_t81A62BB7229CDBDE57DACE8362C9A7657B19DEB8 *)NULL);
			// _sensorFrameStreamerPv = null;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_19 = V_1;
			NullCheck(L_19);
			L_19->set__sensorFrameStreamerPv_15((SensorFrameStreamer_t260E842ACC198DB23E5DDF4E161D537DFB2A0849 *)NULL);
			// _mediaFrameSourceGroupsStarted = false;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_20 = V_1;
			NullCheck(L_20);
			L_20->set__mediaFrameSourceGroupsStarted_12((bool)0);
			// myText.text = "Stopped streaming sensor frames. Okay to exit app.";
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_21 = V_1;
			NullCheck(L_21);
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_22 = L_21->get_myText_5();
			NullCheck(L_22);
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, _stringLiteralA97FE5BE55A60552D5A67C321D11E2A23B3F36F4);
			goto IL_00c1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00aa;
		throw e;
	}

CATCH_00aa:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_24 = V_3;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_23, L_24, /*hidden argument*/NULL);
		goto IL_00d4;
	} // end catch (depth: 1)

IL_00c1:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_25, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_MoveNext_mB83D4D857D6E7A97A439DD36BDFFE3439C98C56B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 * _thisAdjusted = reinterpret_cast<U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 *>(__this + _offset);
	U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_MoveNext_mB83D4D857D6E7A97A439DD36BDFFE3439C98C56B(_thisAdjusted, method);
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<StopHoloLensMediaFrameSourceGroup>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_SetStateMachine_m66B8573F474F21350A31A403E2BD7362512E6C14 (U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_SetStateMachine_m66B8573F474F21350A31A403E2BD7362512E6C14_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 * _thisAdjusted = reinterpret_cast<U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_tAF3CA46C9BB2BCFE55E5DFCB20BBD9E510E22277 *>(__this + _offset);
	U3CStopHoloLensMediaFrameSourceGroupU3Ed__25_SetStateMachine_m66B8573F474F21350A31A403E2BD7362512E6C14(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Update>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__21_MoveNext_m89BACACDD456C57BB2A53365DA783C50747CE657 (U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUpdateU3Ed__21_MoveNext_m89BACACDD456C57BB2A53365DA783C50747CE657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006d;
			}
		}

IL_0011:
		{
			// _frameCount += 1;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_3 = V_1;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = L_4->get__frameCount_13();
			NullCheck(L_3);
			L_3->set__frameCount_13(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
			// if (_frameCount == skipFrames)
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_6 = V_1;
			NullCheck(L_6);
			int32_t L_7 = L_6->get__frameCount_13();
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_8 = V_1;
			NullCheck(L_8);
			int32_t L_9 = L_8->get_skipFrames_14();
			if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
			{
				goto IL_009f;
			}
		}

IL_002d:
		{
			// var detections = await Task.Run(() => _pvMediaFrameSourceGroup.DetectArUcoMarkers(_sensorType));
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_10 = V_1;
			Func_1_tFD2A92E1FC61161A2078F93C77265D7CF6FAB600 * L_11 = (Func_1_tFD2A92E1FC61161A2078F93C77265D7CF6FAB600 *)il2cpp_codegen_object_new(Func_1_tFD2A92E1FC61161A2078F93C77265D7CF6FAB600_il2cpp_TypeInfo_var);
			Func_1__ctor_m775F893B4FCA318F9DF4F1A35E21F7643729EBCA(L_11, L_10, (intptr_t)((intptr_t)ArUcoMarkerDetection_U3CUpdateU3Eb__21_0_m58CAABDC9BD1CE819881C27CB69711B201C1C6A5_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m775F893B4FCA318F9DF4F1A35E21F7643729EBCA_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
			Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B * L_12 = Task_Run_TisIList_1_t50C9889DE6756F376FF44D887B56A41378D0AF4E_m7A8BC1D9301DAA4250AC3A12FC94C68F978568E2(L_11, /*hidden argument*/Task_Run_TisIList_1_t50C9889DE6756F376FF44D887B56A41378D0AF4E_m7A8BC1D9301DAA4250AC3A12FC94C68F978568E2_RuntimeMethod_var);
			NullCheck(L_12);
			TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE  L_13 = Task_1_GetAwaiter_mC5D6296782D721E8F72314B9AFF3876F18DA7DBE(L_12, /*hidden argument*/Task_1_GetAwaiter_mC5D6296782D721E8F72314B9AFF3876F18DA7DBE_RuntimeMethod_var);
			V_3 = L_13;
			bool L_14 = TaskAwaiter_1_get_IsCompleted_mC7A9A7BEAF6BEDFE75B38817D4FC3C128277B215((TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_mC7A9A7BEAF6BEDFE75B38817D4FC3C128277B215_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0089;
			}
		}

IL_004d:
		{
			int32_t L_15 = 0;
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
			TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE  L_16 = V_3;
			__this->set_U3CU3Eu__1_3(L_16);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_17 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m13E701CA06E23467A757BE6E40B5643A8ACF19C3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_17, (TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE *)(&V_3), (U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE_TisU3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A_m13E701CA06E23467A757BE6E40B5643A8ACF19C3_RuntimeMethod_var);
			goto IL_00cd;
		}

IL_006d:
		{
			TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE  L_18 = __this->get_U3CU3Eu__1_3();
			V_3 = L_18;
			TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE * L_19 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_19, sizeof(TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE ));
			int32_t L_20 = (-1);
			V_0 = L_20;
			__this->set_U3CU3E1__state_0(L_20);
		}

IL_0089:
		{
			RuntimeObject* L_21 = TaskAwaiter_1_GetResult_m7D32B1F4B99BAFC491F0D3BB3BB6F9FEA0116E94((TaskAwaiter_1_t1C4C4F2D8B45EDD44899FECAA8E8137BC56B59FE *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m7D32B1F4B99BAFC491F0D3BB3BB6F9FEA0116E94_RuntimeMethod_var);
			V_2 = L_21;
			// UpdateArUcoDetections(detections);
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_22 = V_1;
			RuntimeObject* L_23 = V_2;
			NullCheck(L_22);
			ArUcoMarkerDetection_UpdateArUcoDetections_m122FFE6351F677B394738EB6EA52A20B437448D8(L_22, L_23, /*hidden argument*/NULL);
			// _frameCount = 0;
			ArUcoMarkerDetection_tBFD32FEA52CBDDA0154B4949572DD1835D8BCB50 * L_24 = V_1;
			NullCheck(L_24);
			L_24->set__frameCount_13(0);
		}

IL_009f:
		{
			goto IL_00ba;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a1;
		throw e;
	}

CATCH_00a1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_25 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_26 = V_4;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_25, L_26, /*hidden argument*/NULL);
		goto IL_00cd;
	} // end catch (depth: 1)

IL_00ba:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_27 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_27, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateU3Ed__21_MoveNext_m89BACACDD456C57BB2A53365DA783C50747CE657_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A * _thisAdjusted = reinterpret_cast<U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A *>(__this + _offset);
	U3CUpdateU3Ed__21_MoveNext_m89BACACDD456C57BB2A53365DA783C50747CE657(_thisAdjusted, method);
}
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_<Update>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateU3Ed__21_SetStateMachine_m2E4F4349A771B6DE3FE08D2F4E35670A4AF2EE02 (U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CUpdateU3Ed__21_SetStateMachine_m2E4F4349A771B6DE3FE08D2F4E35670A4AF2EE02_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A * _thisAdjusted = reinterpret_cast<U3CUpdateU3Ed__21_t1BD9242A38147CFAA78DA54C14C1F5C5A8C8919A *>(__this + _offset);
	U3CUpdateU3Ed__21_SetStateMachine_m2E4F4349A771B6DE3FE08D2F4E35670A4AF2EE02(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_IMemoryBufferByteAccess
const Il2CppGuid IMemoryBufferByteAccess_t21FDE02ADDCA6917E3461F40FAF32D0710A81864::IID = { 0x5b0d3235, 0x4dba, 0x4d44, 0x86, 0x5e, 0x8f, 0x1d, 0xe, 0x4f, 0xd0, 0x4d };
// System.Void ArUcoDetectionHoloLensUnity.ArUcoMarkerDetection_IMemoryBufferByteAccess::GetBuffer(System.Byte*&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IMemoryBufferByteAccess_GetBuffer_m77E79A0DCC7B6C8CA1E6C2C1F74ED149756B4604 (RuntimeObject* __this, uint8_t** ___buffer0, uint32_t* ___capacity1, const RuntimeMethod* method)
{
	IMemoryBufferByteAccess_t21FDE02ADDCA6917E3461F40FAF32D0710A81864* ____imemoryBufferByteAccess_t21FDE02ADDCA6917E3461F40FAF32D0710A81864 = il2cpp_codegen_com_query_interface<IMemoryBufferByteAccess_t21FDE02ADDCA6917E3461F40FAF32D0710A81864>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___buffer0' to native representation
	uint8_t* ____buffer0_empty = NULL;
	uint8_t** ____buffer0_marshaled = &____buffer0_empty;

	// Native function invocation
	const il2cpp_hresult_t hr = ____imemoryBufferByteAccess_t21FDE02ADDCA6917E3461F40FAF32D0710A81864->IMemoryBufferByteAccess_GetBuffer_m77E79A0DCC7B6C8CA1E6C2C1F74ED149756B4604(____buffer0_marshaled, ___capacity1);

	il2cpp_codegen_com_raise_exception_if_failed(hr, true);

	// Marshaling of parameter '___buffer0' back from native representation
	uint8_t* _____buffer0_marshaled_unmarshaled_dereferenced = NULL;
	_____buffer0_marshaled_unmarshaled_dereferenced = *____buffer0_marshaled;
	*___buffer0 = _____buffer0_marshaled_unmarshaled_dereferenced;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 ArUcoDetectionHoloLensUnity.CvUtils::Vec3FromFloat3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CvUtils_Vec3FromFloat3_m631823DDAB904406F2DBA1F0B4D7EDF168ECEE1C (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___v0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3()
		// {
		//     x = v.X,
		//     y = v.Y,
		//     z = v.Z
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_0 = ___v0;
		float L_1 = L_0.get_X_0();
		(&V_0)->set_x_2(L_1);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_2 = ___v0;
		float L_3 = L_2.get_Y_1();
		(&V_0)->set_y_3(L_3);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_4 = ___v0;
		float L_5 = L_4.get_Z_2();
		(&V_0)->set_z_4(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 ArUcoDetectionHoloLensUnity.CvUtils::GetVectorFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CvUtils_GetVectorFromMatrix_mB9197DB2927379ABAE3C20D66B407F83A96B4B8F (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CvUtils_GetVectorFromMatrix_mB9197DB2927379ABAE3C20D66B407F83A96B4B8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m.GetColumn(3);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___m0), 3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion ArUcoDetectionHoloLensUnity.CvUtils::GetQuatFromMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CvUtils_GetQuatFromMatrix_mF942E7582B9F4253C9829A87E4C27B38B828D7B2 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CvUtils_GetQuatFromMatrix_mF942E7582B9F4253C9829A87E4C27B38B828D7B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Quaternion.LookRotation(m.GetColumn(2), m.GetColumn(1));
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___m0), 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_0, /*hidden argument*/NULL);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = Matrix4x4_GetColumn_m34D9081FB464BB7CF124C50BB5BE4C22E2DBFA9E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___m0), 1, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Matrix4x4 ArUcoDetectionHoloLensUnity.CvUtils::TransformInUnitySpace(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  CvUtils_TransformInUnitySpace_mBD06B0A2A6CE9B6A3DC2D19F173207267FFC58C5 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CvUtils_TransformInUnitySpace_mBD06B0A2A6CE9B6A3DC2D19F173207267FFC58C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var tOpenCV = Matrix4x4.TRS(v, q, Vector3.one);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___v0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___q1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_0, L_1, L_2, /*hidden argument*/NULL);
		// var t = tOpenCV;
		V_0 = L_3;
		// t.m20 *= -1.0f;
		float* L_4 = (&V_0)->get_address_of_m20_2();
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		*((float*)L_5) = (float)((float)il2cpp_codegen_multiply((float)L_6, (float)(-1.0f)));
		// t.m21 *= -1.0f;
		float* L_7 = (&V_0)->get_address_of_m21_6();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_multiply((float)L_9, (float)(-1.0f)));
		// t.m22 *= -1.0f;
		float* L_10 = (&V_0)->get_address_of_m22_10();
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		*((float*)L_11) = (float)((float)il2cpp_codegen_multiply((float)L_12, (float)(-1.0f)));
		// t.m23 *= -1.0f;
		float* L_13 = (&V_0)->get_address_of_m23_14();
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		*((float*)L_14) = (float)((float)il2cpp_codegen_multiply((float)L_15, (float)(-1.0f)));
		// return t;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Matrix4x4 ArUcoDetectionHoloLensUnity.CvUtils::Mat4x4FromFloat4x4(System.Numerics.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  CvUtils_Mat4x4FromFloat4x4_m2E21E4EEBE4E470B3D5A3199A9839476FC1BAC26 (Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___m0, const RuntimeMethod* method)
{
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Matrix4x4()
		// {
		//     m00 = m.M11,
		//     m10 = m.M21,
		//     m20 = m.M31,
		//     m30 = m.M41,
		// 
		//     m01 = m.M12,
		//     m11 = m.M22,
		//     m21 = m.M32,
		//     m31 = m.M42,
		// 
		//     m02 = m.M13,
		//     m12 = m.M23,
		//     m22 = m.M33,
		//     m32 = m.M43,
		// 
		//     m03 = m.M14,
		//     m13 = m.M24,
		//     m23 = m.M34,
		//     m33 = m.M44,
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA ));
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_0 = ___m0;
		float L_1 = L_0.get_M11_0();
		(&V_0)->set_m00_0(L_1);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_2 = ___m0;
		float L_3 = L_2.get_M21_4();
		(&V_0)->set_m10_1(L_3);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_4 = ___m0;
		float L_5 = L_4.get_M31_8();
		(&V_0)->set_m20_2(L_5);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_6 = ___m0;
		float L_7 = L_6.get_M41_12();
		(&V_0)->set_m30_3(L_7);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_8 = ___m0;
		float L_9 = L_8.get_M12_1();
		(&V_0)->set_m01_4(L_9);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_10 = ___m0;
		float L_11 = L_10.get_M22_5();
		(&V_0)->set_m11_5(L_11);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_12 = ___m0;
		float L_13 = L_12.get_M32_9();
		(&V_0)->set_m21_6(L_13);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_14 = ___m0;
		float L_15 = L_14.get_M42_13();
		(&V_0)->set_m31_7(L_15);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_16 = ___m0;
		float L_17 = L_16.get_M13_2();
		(&V_0)->set_m02_8(L_17);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_18 = ___m0;
		float L_19 = L_18.get_M23_6();
		(&V_0)->set_m12_9(L_19);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_20 = ___m0;
		float L_21 = L_20.get_M33_10();
		(&V_0)->set_m22_10(L_21);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_22 = ___m0;
		float L_23 = L_22.get_M43_14();
		(&V_0)->set_m32_11(L_23);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_24 = ___m0;
		float L_25 = L_24.get_M14_3();
		(&V_0)->set_m03_12(L_25);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_26 = ___m0;
		float L_27 = L_26.get_M24_7();
		(&V_0)->set_m13_13(L_27);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_28 = ___m0;
		float L_29 = L_28.get_M34_11();
		(&V_0)->set_m23_14(L_29);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_30 = ___m0;
		float L_31 = L_30.get_M44_15();
		(&V_0)->set_m33_15(L_31);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_32 = V_0;
		return L_32;
	}
}
// UnityEngine.Quaternion ArUcoDetectionHoloLensUnity.CvUtils::RotationQuatFromRodrigues(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  CvUtils_RotationQuatFromRodrigues_m8EAEC5E80BD1F45F656ADF8B9215D644149D9332 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CvUtils_RotationQuatFromRodrigues_m8EAEC5E80BD1F45F656ADF8B9215D644149D9332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var angle = Mathf.Rad2Deg * v.magnitude;
		float L_0 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v0), /*hidden argument*/NULL);
		// var axis = v.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___v0), /*hidden argument*/NULL);
		V_0 = L_1;
		// Quaternion q = Quaternion.AngleAxis(angle, axis);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(((float)il2cpp_codegen_multiply((float)(57.29578f), (float)L_0)), L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// q = Quaternion.Euler(
		//     -1.0f * q.eulerAngles.x,
		//     q.eulerAngles.y,
		//     -1.0f * q.eulerAngles.z) * Quaternion.Euler(0, 0, 180);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_5)), L_7, ((float)il2cpp_codegen_multiply((float)(-1.0f), (float)L_9)), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_10, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// return q;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = V_1;
		return L_13;
	}
}
// System.Void ArUcoDetectionHoloLensUnity.CvUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CvUtils__ctor_m32A3447DD96B37E25BADE629A06F5D70492480D0 (CvUtils_t5C40DBA24BD32A99FA9FBDEAC171F5125424B02B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void CameraCalibrationParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraCalibrationParams__ctor_m6D5DBB2A553FB8A404C952C2FC4C3B88BBFB53CB (CameraCalibrationParams_t3D069233E93D7AC69641359A051955B76D0854E3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
