﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.IDictionary`2<System.Int16,System.Object>
struct IDictionary_2_t2A228A4199F8E92777749C0843653792D8AEB459;
// System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>
struct IDictionary_2_tA359427016452362582134A8C14496A1241B840D;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int16,System.Object>
struct IReadOnlyDictionary_2_t150BBF415AE69D17E32A22805D9A5BF83EFA2C87;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.UInt32>
struct IReadOnlyDictionary_2_t82A03384040526B0308B1F80CCA2F995DEC65B4A;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.UInt32>
struct IReadOnlyDictionary_2_tA7B4F9389BD3367FAFED12740EA72C5BA2DAC321;
// System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Boolean>
struct IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2;
// System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>[]
struct KeyValuePair_2U5BU5D_t108FFFA2995D6C5F0A334BF9F2F88D9E7A51EE0E;
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t19B3A62B543B8CB4D79E1231E616A92C2413EB03;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int16,System.Object>
struct KeyCollection_tC420610E913E44E3066EFD6809E050E6C3D62E9F;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.UInt32,System.Boolean>
struct KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int16,System.Object>
struct ValueCollection_tF163AA08B1D067717D878AA038D97C216C0AED8C;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.UInt32,System.Boolean>
struct ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int16,System.Object>
struct ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>
struct ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int16,System.Object>
struct KeyValuePairComparer_t2B4BC80061A242281DD498358FB2D2B715698CC5;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.UInt32>
struct KeyValuePairComparer_t73CF9CF29994181301F3B135822A104838FE71F2;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.UInt32,System.Boolean>
struct KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>
struct ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.UInt32>
struct ConstantSplittableMap_2_t77B4769366C205FC0AD315992C2753F641C51F5C;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.UInt32>
struct ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>
struct ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t7D4606D2D9319314F52345651A187959DFB80DDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t8B79319064AA37D303A6F7B44B226829D712B647_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t2A228A4199F8E92777749C0843653792D8AEB459_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t016732327846E3306CCE371ADA0BD384F985EF6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t01BC03E3AEE0ABFAA071862E349731E686E7671C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t150BBF415AE69D17E32A22805D9A5BF83EFA2C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tA7B4F9389BD3367FAFED12740EA72C5BA2DAC321_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297;
IL2CPP_EXTERN_C const RuntimeMethod* ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConstantSplittableMap_2_Split_m5CD1E34437B0D86A0D102AD7BF32AC04BB1675BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConstantSplittableMap_2_Split_m92DEF5E669FC945FBBF258F2C04D141CBAD2DE76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConstantSplittableMap_2__ctor_m21FCFE586A04F39A7BEED2F6E5664245B3D4CA58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConstantSplittableMap_2__ctor_mBA73B5060F640874A9CED7D672F76D187BF72872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m48828D89A9BB576EE1933F9B5CD0FBD28251685C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mAC9079549859FB0364CA62C5227D7150EAB580AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mBAB143970C0AF85A4E84F96B7BE29E1F165274E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mFA234A9FD680620E176E53939B494349F60DD2CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m1882242B4B33547EA8804C65ADE7719742ECE6EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t IKeyValuePair_2_get_Key_m420D070CDE5AB890A3DE2AAF417D7D6566E5D8D2_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKeyValuePair_2_get_Key_mE4028393AE56F52A4C792F8BD233F32058CCE16E_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKeyValuePair_2_get_Value_m441AC5AA09C10475944766A3BB434D3AB087D88F_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IKeyValuePair_2_get_Value_m94E24C7AD7FDD84D40F583916C88316048084042_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_HasKey_mC999B9580045D666F961C810C248DD5D3C4464E7_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_HasKey_mCB9DB7059280DD0412354699AA5214CB74328F13_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_Lookup_m987E740741E83171FAABFBD0CDA745A64E1AA264_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_Lookup_mA5845123DC6BDABE8B1D4590F542C59A777A5715_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_Split_m089E5491A3267BA9E4ECD91F6E1A6145171E5EBD_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_Split_m9D0236F3E63B169A67F8735907CD21A5B6E5E471_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_get_Size_m919C134D1D0995503FD0BDF8FE0D006BB7429A92_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMapView_2_get_Size_m9C26E33E40F12E9BB5AC31C00B9D7F5F96FBCF07_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_Clear_m9818E318E49DC5DD10778A9F0FF40905AE316E77_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_GetView_mF66B963C0D5E0218FB18D0A5574A1AA6E53DA3FF_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_HasKey_m7D82E44642A7CF89777A0451A00F475F8C6FF4D1_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_Insert_m97FF9EBBE6E505B12516856A13B50D1F767388F5_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_Lookup_mB1D8F2755B887CDE426656DFE4F78DD51F054287_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_Remove_m5CC3955FA3E52C52753B61417A027D8578A7BCCE_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E_ComCallableWrapperProjectedMethod_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IMap_2_get_Size_mA4ECB2437EAF878C79BCBBBA9121D36CEA44C8AC_ComCallableWrapperProjectedMethod_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7;
struct IMapView_2_t82DD3353B291CAAB35A7457B729AE28D131D062D;
struct IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

// Windows.Foundation.Collections.IKeyValuePair`2<System.Int16,System.Object>
struct NOVTABLE IKeyValuePair_2_tAA33B87AFF136A468E07272CD16C566C0B6F62BC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mE4028393AE56F52A4C792F8BD233F32058CCE16E(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m441AC5AA09C10475944766A3BB434D3AB087D88F(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.UInt32>
struct NOVTABLE IKeyValuePair_2_tF4F5BD4B224E1C46E9202870D52281A18DA8C124 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m420D070CDE5AB890A3DE2AAF417D7D6566E5D8D2(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m94E24C7AD7FDD84D40F583916C88316048084042(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Boolean>
struct NOVTABLE IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int16,System.Object>
struct NOVTABLE IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mA5845123DC6BDABE8B1D4590F542C59A777A5715(int16_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m919C134D1D0995503FD0BDF8FE0D006BB7429A92(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mCB9DB7059280DD0412354699AA5214CB74328F13(int16_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m9D0236F3E63B169A67F8735907CD21A5B6E5E471(IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252** ___first0, IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.UInt32>
struct NOVTABLE IMapView_2_t82DD3353B291CAAB35A7457B729AE28D131D062D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m987E740741E83171FAABFBD0CDA745A64E1AA264(Il2CppHString ___key0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m9C26E33E40F12E9BB5AC31C00B9D7F5F96FBCF07(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mC999B9580045D666F961C810C248DD5D3C4464E7(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m089E5491A3267BA9E4ECD91F6E1A6145171E5EBD(IMapView_2_t82DD3353B291CAAB35A7457B729AE28D131D062D** ___first0, IMapView_2_t82DD3353B291CAAB35A7457B729AE28D131D062D** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>
struct NOVTABLE IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___first0, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>
struct NOVTABLE IMap_2_t7DCCCCE75ABB1B9347204C3727C6E633E2C4D99C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mB1D8F2755B887CDE426656DFE4F78DD51F054287(int16_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mA4ECB2437EAF878C79BCBBBA9121D36CEA44C8AC(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m7D82E44642A7CF89777A0451A00F475F8C6FF4D1(int16_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mF66B963C0D5E0218FB18D0A5574A1AA6E53DA3FF(IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m97FF9EBBE6E505B12516856A13B50D1F767388F5(int16_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m5CC3955FA3E52C52753B61417A027D8578A7BCCE(int16_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m9818E318E49DC5DD10778A9F0FF40905AE316E77() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>
struct NOVTABLE IMap_2_t36C9AB5B1AB38FC142C2FA92750C4250666E8DBA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B(uint32_t ___key0, bool ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A(uint32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3() = 0;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int16,System.Object>
struct  ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_tC420610E913E44E3066EFD6809E050E6C3D62E9F * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tF163AA08B1D067717D878AA038D97C216C0AED8C * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31, ___m_keys_2)); }
	inline KeyCollection_tC420610E913E44E3066EFD6809E050E6C3D62E9F * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_tC420610E913E44E3066EFD6809E050E6C3D62E9F ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_tC420610E913E44E3066EFD6809E050E6C3D62E9F * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keys_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31, ___m_values_3)); }
	inline ValueCollection_tF163AA08B1D067717D878AA038D97C216C0AED8C * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_tF163AA08B1D067717D878AA038D97C216C0AED8C ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_tF163AA08B1D067717D878AA038D97C216C0AED8C * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_3), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>
struct  ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_keys_2)); }
	inline KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keys_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_values_3)); }
	inline ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_values_3), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>
struct  ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t108FFFA2995D6C5F0A334BF9F2F88D9E7A51EE0E* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t108FFFA2995D6C5F0A334BF9F2F88D9E7A51EE0E* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t108FFFA2995D6C5F0A334BF9F2F88D9E7A51EE0E** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t108FFFA2995D6C5F0A334BF9F2F88D9E7A51EE0E* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t2B4BC80061A242281DD498358FB2D2B715698CC5 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t2B4BC80061A242281DD498358FB2D2B715698CC5 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t2B4BC80061A242281DD498358FB2D2B715698CC5 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t2B4BC80061A242281DD498358FB2D2B715698CC5 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.UInt32>
struct  ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t19B3A62B543B8CB4D79E1231E616A92C2413EB03* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t19B3A62B543B8CB4D79E1231E616A92C2413EB03* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t19B3A62B543B8CB4D79E1231E616A92C2413EB03** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t19B3A62B543B8CB4D79E1231E616A92C2413EB03* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t73CF9CF29994181301F3B135822A104838FE71F2 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t73CF9CF29994181301F3B135822A104838FE71F2 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t73CF9CF29994181301F3B135822A104838FE71F2 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t73CF9CF29994181301F3B135822A104838FE71F2 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>
struct  ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_1), (void*)value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyValuePairComparer_0), (void*)value);
	}
};


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


// System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>
struct  KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int16_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A, ___key_0)); }
	inline int16_t get_key_0() const { return ___key_0; }
	inline int16_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int16_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>
struct  KeyValuePair_2_t683ADD3289D3AC7636F0919817F654335ABBAB84 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t683ADD3289D3AC7636F0919817F654335ABBAB84, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t683ADD3289D3AC7636F0919817F654335ABBAB84, ___value_1)); }
	inline uint32_t get_value_1() const { return ___value_1; }
	inline uint32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>
struct  KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1, ___value_1)); }
	inline uint32_t get_value_1() const { return ___value_1; }
	inline uint32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>
struct  KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.UInt32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m1243D9D72787759A3A48C69ACE9C82D66D11CAC9_gshared (ConstantSplittableMap_2_t77B4769366C205FC0AD315992C2753F641C51F5C * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.UInt32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_mB4C308597561E367BAC540F886216D4AE28C3F42_gshared (ConstantSplittableMap_2_t77B4769366C205FC0AD315992C2753F641C51F5C * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCE69F47A714AF849A03AA0825434A785432E5DF4_gshared_inline (KeyValuePair_2_t683ADD3289D3AC7636F0919817F654335ABBAB84 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt32>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_m694857E8D337155994028A00B13E2DEB30C3A378_gshared_inline (KeyValuePair_2_t683ADD3289D3AC7636F0919817F654335ABBAB84 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_gshared (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_gshared (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_gshared (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_gshared_inline (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_gshared_inline (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m1882242B4B33547EA8804C65ADE7719742ECE6EA_gshared (ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m21FCFE586A04F39A7BEED2F6E5664245B3D4CA58_gshared (ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m92DEF5E669FC945FBBF258F2C04D141CBAD2DE76_gshared (ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int16_t KeyValuePair_2_get_Key_m48828D89A9BB576EE1933F9B5CD0FBD28251685C_gshared_inline (KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mBAB143970C0AF85A4E84F96B7BE29E1F165274E4_gshared_inline (KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99_inline (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.UInt32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_mBA73B5060F640874A9CED7D672F76D187BF72872 (ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m1243D9D72787759A3A48C69ACE9C82D66D11CAC9_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.UInt32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m5CD1E34437B0D86A0D102AD7BF32AC04BB1675BB (ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_mB4C308597561E367BAC540F886216D4AE28C3F42_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mAC9079549859FB0364CA62C5227D7150EAB580AC_inline (KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCE69F47A714AF849A03AA0825434A785432E5DF4_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>::get_Value()
inline uint32_t KeyValuePair_2_get_Value_mFA234A9FD680620E176E53939B494349F60DD2CA_inline (KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m694857E8D337155994028A00B13E2DEB30C3A378_gshared_inline)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24 (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3 (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_inline (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_inline (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_gshared_inline)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m1882242B4B33547EA8804C65ADE7719742ECE6EA (ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m1882242B4B33547EA8804C65ADE7719742ECE6EA_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m21FCFE586A04F39A7BEED2F6E5664245B3D4CA58 (ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m21FCFE586A04F39A7BEED2F6E5664245B3D4CA58_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m92DEF5E669FC945FBBF258F2C04D141CBAD2DE76 (ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m92DEF5E669FC945FBBF258F2C04D141CBAD2DE76_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Key()
inline int16_t KeyValuePair_2_get_Key_m48828D89A9BB576EE1933F9B5CD0FBD28251685C_inline (KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A * __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A *, const RuntimeMethod*))KeyValuePair_2_get_Key_m48828D89A9BB576EE1933F9B5CD0FBD28251685C_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_mBAB143970C0AF85A4E84F96B7BE29E1F165274E4_inline (KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A *, const RuntimeMethod*))KeyValuePair_2_get_Value_mBAB143970C0AF85A4E84F96B7BE29E1F165274E4_gshared_inline)(__this, method);
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.UInt32>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m987E740741E83171FAABFBD0CDA745A64E1AA264_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m987E740741E83171FAABFBD0CDA745A64E1AA264_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, uint32_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.UInt32>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tA7B4F9389BD3367FAFED12740EA72C5BA2DAC321_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99_inline(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.UInt32>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m9C26E33E40F12E9BB5AC31C00B9D7F5F96FBCF07_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m9C26E33E40F12E9BB5AC31C00B9D7F5F96FBCF07_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count() */, IReadOnlyCollection_1_t01BC03E3AEE0ABFAA071862E349731E686E7671C_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.UInt32>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_mC999B9580045D666F961C810C248DD5D3C4464E7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_mC999B9580045D666F961C810C248DD5D3C4464E7_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.UInt32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tA7B4F9389BD3367FAFED12740EA72C5BA2DAC321_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.UInt32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m089E5491A3267BA9E4ECD91F6E1A6145171E5EBD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t82DD3353B291CAAB35A7457B729AE28D131D062D** ___first0, IMapView_2_t82DD3353B291CAAB35A7457B729AE28D131D062D** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m089E5491A3267BA9E4ECD91F6E1A6145171E5EBD_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt32>>::get_Count() */, IReadOnlyCollection_1_t01BC03E3AEE0ABFAA071862E349731E686E7671C_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460 * splittableMap = (ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460 *)IsInstSealed(__this, ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460*)il2cpp_codegen_object_new(ConstantSplittableMap_2_tCA3B52A9CB4A3CFB9FEB80AE5AAB379B05244460_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_mBA73B5060F640874A9CED7D672F76D187BF72872(splittableMap, __this, ConstantSplittableMap_2__ctor_mBA73B5060F640874A9CED7D672F76D187BF72872_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m5CD1E34437B0D86A0D102AD7BF32AC04BB1675BB(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m5CD1E34437B0D86A0D102AD7BF32AC04BB1675BB_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			*___first0 = il2cpp_codegen_com_query_interface<IMapView_2_t82DD3353B291CAAB35A7457B729AE28D131D062D>(static_cast<Il2CppComObject*>(____first0_empty));
			(*___first0)->AddRef();
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t82DD3353B291CAAB35A7457B729AE28D131D062D>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			*___second1 = il2cpp_codegen_com_query_interface<IMapView_2_t82DD3353B291CAAB35A7457B729AE28D131D062D>(static_cast<Il2CppComObject*>(____second1_empty));
			(*___second1)->AddRef();
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t82DD3353B291CAAB35A7457B729AE28D131D062D>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.UInt32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m420D070CDE5AB890A3DE2AAF417D7D6566E5D8D2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m420D070CDE5AB890A3DE2AAF417D7D6566E5D8D2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_mAC9079549859FB0364CA62C5227D7150EAB580AC_inline((KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1*)UnBox(__thisValue, KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_mAC9079549859FB0364CA62C5227D7150EAB580AC_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.UInt32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m94E24C7AD7FDD84D40F583916C88316048084042_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m94E24C7AD7FDD84D40F583916C88316048084042_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_mFA234A9FD680620E176E53939B494349F60DD2CA_inline((KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1*)UnBox(__thisValue, KeyValuePair_2_tAC577F2B0C883BC99D07632DC85220790DA0DCF1_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_mFA234A9FD680620E176E53939B494349F60DD2CA_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, bool* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::TryGetValue(TKey,TValue&) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99_inline(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, ICollection_1_t8B79319064AA37D303A6F7B44B226829D712B647_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::GetView()
il2cpp_hresult_t IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D * readOnlyDictionary = (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			_returnValue_marshaled = il2cpp_codegen_com_query_interface<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(static_cast<Il2CppComObject*>(returnValue));
			(_returnValue_marshaled)->AddRef();
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< uint32_t, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::Remove(TKey) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99_inline(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Clear()
il2cpp_hresult_t IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::Clear() */, ICollection_1_t8B79319064AA37D303A6F7B44B226829D712B647_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, bool* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Boolean>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99_inline(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Boolean>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___first0, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * splittableMap = (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 *)IsInstSealed(__this, ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3(splittableMap, __this, ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			*___first0 = il2cpp_codegen_com_query_interface<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(static_cast<Il2CppComObject*>(____first0_empty));
			(*___first0)->AddRef();
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			*___second1 = il2cpp_codegen_com_query_interface<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(static_cast<Il2CppComObject*>(____second1_empty));
			(*___second1)->AddRef();
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Boolean>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_inline((KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE*)UnBox(__thisValue, KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Boolean>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_inline((KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE*)UnBox(__thisValue, KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_mB1D8F2755B887CDE426656DFE4F78DD51F054287_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_mB1D8F2755B887CDE426656DFE4F78DD51F054287_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int16_t, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int16,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2A228A4199F8E92777749C0843653792D8AEB459_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99_inline(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			_returnValue_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(returnValue));
			(_returnValue_marshaled)->AddRef();
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_mA4ECB2437EAF878C79BCBBBA9121D36CEA44C8AC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_mA4ECB2437EAF878C79BCBBBA9121D36CEA44C8AC_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>>::get_Count() */, ICollection_1_t7D4606D2D9319314F52345651A187959DFB80DDB_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m7D82E44642A7CF89777A0451A00F475F8C6FF4D1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m7D82E44642A7CF89777A0451A00F475F8C6FF4D1_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int16_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int16,System.Object>::ContainsKey(TKey) */, IDictionary_2_t2A228A4199F8E92777749C0843653792D8AEB459_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_mF66B963C0D5E0218FB18D0A5574A1AA6E53DA3FF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_mF66B963C0D5E0218FB18D0A5574A1AA6E53DA3FF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t150BBF415AE69D17E32A22805D9A5BF83EFA2C87_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31 * readOnlyDictionary = (ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t0CC80111D330CBCBA8F63E9FFFB650512BADCB31_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m1882242B4B33547EA8804C65ADE7719742ECE6EA(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m1882242B4B33547EA8804C65ADE7719742ECE6EA_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			_returnValue_marshaled = il2cpp_codegen_com_query_interface<IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252>(static_cast<Il2CppComObject*>(returnValue));
			(_returnValue_marshaled)->AddRef();
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m97FF9EBBE6E505B12516856A13B50D1F767388F5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m97FF9EBBE6E505B12516856A13B50D1F767388F5_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(____value1_unmarshaled))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____value1_unmarshaled), Il2CppIInspectable::IID, ___value1);
		}
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int16_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int16,System.Object>::ContainsKey(TKey) */, IDictionary_2_t2A228A4199F8E92777749C0843653792D8AEB459_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int16_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int16,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t2A228A4199F8E92777749C0843653792D8AEB459_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m5CC3955FA3E52C52753B61417A027D8578A7BCCE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m5CC3955FA3E52C52753B61417A027D8578A7BCCE_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int16_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int16,System.Object>::Remove(TKey) */, IDictionary_2_t2A228A4199F8E92777749C0843653792D8AEB459_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99_inline(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m9818E318E49DC5DD10778A9F0FF40905AE316E77_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m9818E318E49DC5DD10778A9F0FF40905AE316E77_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>>::Clear() */, ICollection_1_t7D4606D2D9319314F52345651A187959DFB80DDB_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int16,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_mA5845123DC6BDABE8B1D4590F542C59A777A5715_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_mA5845123DC6BDABE8B1D4590F542C59A777A5715_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int16_t, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int16,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t150BBF415AE69D17E32A22805D9A5BF83EFA2C87_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99_inline(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			_returnValue_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(returnValue));
			(_returnValue_marshaled)->AddRef();
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int16,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m919C134D1D0995503FD0BDF8FE0D006BB7429A92_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m919C134D1D0995503FD0BDF8FE0D006BB7429A92_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>>::get_Count() */, IReadOnlyCollection_1_t016732327846E3306CCE371ADA0BD384F985EF6A_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int16,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_mCB9DB7059280DD0412354699AA5214CB74328F13_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_mCB9DB7059280DD0412354699AA5214CB74328F13_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int16,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t150BBF415AE69D17E32A22805D9A5BF83EFA2C87_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int16,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m9D0236F3E63B169A67F8735907CD21A5B6E5E471_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252** ___first0, IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m9D0236F3E63B169A67F8735907CD21A5B6E5E471_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>>::get_Count() */, IReadOnlyCollection_1_t016732327846E3306CCE371ADA0BD384F985EF6A_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B * splittableMap = (ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B *)IsInstSealed(__this, ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B*)il2cpp_codegen_object_new(ConstantSplittableMap_2_tC3D1358985C190D0477014AA1B2825481B9F2C2B_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m21FCFE586A04F39A7BEED2F6E5664245B3D4CA58(splittableMap, __this, ConstantSplittableMap_2__ctor_m21FCFE586A04F39A7BEED2F6E5664245B3D4CA58_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m92DEF5E669FC945FBBF258F2C04D141CBAD2DE76(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m92DEF5E669FC945FBBF258F2C04D141CBAD2DE76_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			*___first0 = il2cpp_codegen_com_query_interface<IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252>(static_cast<Il2CppComObject*>(____first0_empty));
			(*___first0)->AddRef();
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			*___second1 = il2cpp_codegen_com_query_interface<IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252>(static_cast<Il2CppComObject*>(____second1_empty));
			(*___second1)->AddRef();
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t8C335AA6961FDCF22AF3DB555FD7417446987252>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int16,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mE4028393AE56F52A4C792F8BD233F32058CCE16E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mE4028393AE56F52A4C792F8BD233F32058CCE16E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int16_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m48828D89A9BB576EE1933F9B5CD0FBD28251685C_inline((KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A*)UnBox(__thisValue, KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m48828D89A9BB576EE1933F9B5CD0FBD28251685C_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int16,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m441AC5AA09C10475944766A3BB434D3AB087D88F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m441AC5AA09C10475944766A3BB434D3AB087D88F_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_mBAB143970C0AF85A4E84F96B7BE29E1F165274E4_inline((KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A*)UnBox(__thisValue, KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_mBAB143970C0AF85A4E84F96B7BE29E1F165274E4_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			_returnValue_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(returnValue));
			(_returnValue_marshaled)->AddRef();
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99_inline (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__HResult_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCE69F47A714AF849A03AA0825434A785432E5DF4_gshared_inline (KeyValuePair_2_t683ADD3289D3AC7636F0919817F654335ABBAB84 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_m694857E8D337155994028A00B13E2DEB30C3A378_gshared_inline (KeyValuePair_2_t683ADD3289D3AC7636F0919817F654335ABBAB84 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = (uint32_t)__this->get_value_1();
		return (uint32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_gshared_inline (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = (uint32_t)__this->get_key_0();
		return (uint32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_gshared_inline (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int16_t KeyValuePair_2_get_Key_m48828D89A9BB576EE1933F9B5CD0FBD28251685C_gshared_inline (KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A * __this, const RuntimeMethod* method)
{
	{
		int16_t L_0 = (int16_t)__this->get_key_0();
		return (int16_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mBAB143970C0AF85A4E84F96B7BE29E1F165274E4_gshared_inline (KeyValuePair_2_t555144B3695E2461AEE04F0CB2AA400AA55F5A2A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
