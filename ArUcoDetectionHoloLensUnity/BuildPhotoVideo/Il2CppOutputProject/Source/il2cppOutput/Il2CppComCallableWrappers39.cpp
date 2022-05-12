#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "vm/CachedCCWBase.h"
#include "os/Unity/UnityPlatformConfigure.h"
#include "il2cpp-object-internals.h"


// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>
struct IList_1_t50C9889DE6756F376FF44D887B56A41378D0AF4E;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.CRCMessageEntry>
struct List_1_t8D93CB0068628F055B6D9009DC492C2B8D050922;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>>
struct Func_2_t72E3DBD051000825F9B00CBCA9D0B118A14D4D4E;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.String
struct String_t;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>
struct TaskFactory_1_t944482ACB6CA97336CDAC7828BEC7C3D394C6CB3;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;

struct IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B;
struct IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96;
struct IIterator_1_t9567105C4EAEF1A0CD78219153D0583D1C48D11C;
struct IVectorView_1_t5FE896DC2D755826090222D74FFEC248C0650719;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

// Windows.Foundation.Collections.IIterable`1<System.Boolean>
struct NOVTABLE IIterable_1_tF1BBFC48541C330D12DE2019AEB805A05D602A10 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFEDFE608D5BBDCC3559FE058FCA10981343CE693(IIterator_1_t9567105C4EAEF1A0CD78219153D0583D1C48D11C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Boolean>
struct NOVTABLE IVectorView_1_t5FE896DC2D755826090222D74FFEC248C0650719 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m901ABB17E23AFB29D7D7D336822A068257AAE538(uint32_t ___index0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m6724F2A64F2C2D4EA533FC4C5A47DB808C4C74E4(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3BC19BCB4F2AB76CB4EC895229B23B550B57460D(bool ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mB7E498B3B2F11EF84CAEA7C33DC865757A2D4430(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Boolean>
struct NOVTABLE IVector_1_tCD20AF461783D0D1EF8074C8B49F3EEAEAF9A97A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m4687C4F46108EF8271A9647DC18FAE5AA560F1F7(uint32_t ___index0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_mDAF636DFDB833BB54CF183E923578197C39BBB1B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mADBA121498CE2BC7FEAF20806861D363E63F4B49(IVectorView_1_t5FE896DC2D755826090222D74FFEC248C0650719** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m7155489A7AA563C6EB009D98EC93865732D577F2(bool ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m0A0E4EA81898F5857548E52DFFEB4D006E2275EB(uint32_t ___index0, bool ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mFB6C03ABEB33A1A9EBB49CAE1D3E18AFCCB7024C(uint32_t ___index0, bool ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m38920F67884C2B132B2FD7D2473621B0D17732FF(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0F510CCFC3E3C38227EFB276CC95D8A588D01686(bool ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mB7727F597672707F20D1559FFF55508585E434DE() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m104D089C16B7DCDB46B358427F022C0B3F5E6042() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m67A146F52A5A3430CBAAC670DAFEB219FF361D6A(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mC5B26882878FE0A2B16829D0245C58C56909784B(uint32_t ___items0ArraySize, bool* ___items0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t5808AF951019E4388C66F7A88AC569F52F581167 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB(IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1() = 0;
};

// System.Array_EmptyInternalEnumerator`1<UnityEngine.Networking.NetworkTransformChild>
struct  EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC  : public RuntimeObject
{
public:

public:
};

struct EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC_StaticFields
{
public:
	// System.Array_EmptyInternalEnumerator`1<T> System.Array_EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC_StaticFields, ___Value_0)); }
	inline EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC * get_Value_0() const { return ___Value_0; }
	inline EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____items_1)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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

// System.Array_InternalEnumerator`1<UnityEngine.Networking.NetworkTransformChild>
struct  InternalEnumerator_1_t3B239AFEB3B5BEE44A4536577F65119226E6438E 
{
public:
	// System.Array System.Array_InternalEnumerator`1::array
	RuntimeArray * ___array_0;
	// System.Int32 System.Array_InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t3B239AFEB3B5BEE44A4536577F65119226E6438E, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t3B239AFEB3B5BEE44A4536577F65119226E6438E, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif

// System.Collections.Generic.List`1_Enumerator<System.Boolean>
struct  Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	bool ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___list_0)); }
	inline List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * get_list_0() const { return ___list_0; }
	inline List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783, ___current_3)); }
	inline bool get_current_3() const { return ___current_3; }
	inline bool* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(bool value)
	{
		___current_3 = value;
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


// UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct  CRCMessageEntry_t7EDFC0B08924104688EF94226798EC1918D83118 
{
public:
	// System.String UnityEngine.Networking.NetworkSystem.CRCMessageEntry::name
	String_t* ___name_0;
	// System.Byte UnityEngine.Networking.NetworkSystem.CRCMessageEntry::channel
	uint8_t ___channel_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(CRCMessageEntry_t7EDFC0B08924104688EF94226798EC1918D83118, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_channel_1() { return static_cast<int32_t>(offsetof(CRCMessageEntry_t7EDFC0B08924104688EF94226798EC1918D83118, ___channel_1)); }
	inline uint8_t get_channel_1() const { return ___channel_1; }
	inline uint8_t* get_address_of_channel_1() { return &___channel_1; }
	inline void set_channel_1(uint8_t value)
	{
		___channel_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t7EDFC0B08924104688EF94226798EC1918D83118_marshaled_pinvoke
{
	char* ___name_0;
	uint8_t ___channel_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t7EDFC0B08924104688EF94226798EC1918D83118_marshaled_com
{
	Il2CppChar* ___name_0;
	uint8_t ___channel_1;
};

// System.Collections.Generic.List`1_Enumerator<UnityEngine.Networking.NetworkSystem.CRCMessageEntry>
struct  Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t8D93CB0068628F055B6D9009DC492C2B8D050922 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	CRCMessageEntry_t7EDFC0B08924104688EF94226798EC1918D83118  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C, ___list_0)); }
	inline List_1_t8D93CB0068628F055B6D9009DC492C2B8D050922 * get_list_0() const { return ___list_0; }
	inline List_1_t8D93CB0068628F055B6D9009DC492C2B8D050922 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8D93CB0068628F055B6D9009DC492C2B8D050922 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C, ___current_3)); }
	inline CRCMessageEntry_t7EDFC0B08924104688EF94226798EC1918D83118  get_current_3() const { return ___current_3; }
	inline CRCMessageEntry_t7EDFC0B08924104688EF94226798EC1918D83118 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CRCMessageEntry_t7EDFC0B08924104688EF94226798EC1918D83118  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___name_0), (void*)NULL);
	}
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetAt_m4687C4F46108EF8271A9647DC18FAE5AA560F1F7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool* comReturnValue);
il2cpp_hresult_t IVector_1_get_Size_mDAF636DFDB833BB54CF183E923578197C39BBB1B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_GetView_mADBA121498CE2BC7FEAF20806861D363E63F4B49_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t5FE896DC2D755826090222D74FFEC248C0650719** comReturnValue);
il2cpp_hresult_t IVector_1_IndexOf_m7155489A7AA563C6EB009D98EC93865732D577F2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVector_1_SetAt_m0A0E4EA81898F5857548E52DFFEB4D006E2275EB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool ___value1);
il2cpp_hresult_t IVector_1_InsertAt_mFB6C03ABEB33A1A9EBB49CAE1D3E18AFCCB7024C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool ___value1);
il2cpp_hresult_t IVector_1_RemoveAt_m38920F67884C2B132B2FD7D2473621B0D17732FF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IVector_1_Append_m0F510CCFC3E3C38227EFB276CC95D8A588D01686_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool ___value0);
il2cpp_hresult_t IVector_1_RemoveAtEnd_mB7727F597672707F20D1559FFF55508585E434DE_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_Clear_m104D089C16B7DCDB46B358427F022C0B3F5E6042_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVector_1_GetMany_m67A146F52A5A3430CBAAC670DAFEB219FF361D6A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IVector_1_ReplaceAll_mC5B26882878FE0A2B16829D0245C58C56909784B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, bool* ___items0);
il2cpp_hresult_t IIterable_1_First_mFEDFE608D5BBDCC3559FE058FCA10981343CE693_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9567105C4EAEF1A0CD78219153D0583D1C48D11C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVectorView_1_GetAt_m901ABB17E23AFB29D7D7D336822A068257AAE538_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m6724F2A64F2C2D4EA533FC4C5A47DB808C4C74E4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m3BC19BCB4F2AB76CB4EC895229B23B550B57460D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_mB7E498B3B2F11EF84CAEA7C33DC865757A2D4430_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue);



// COM Callable Wrapper for System.Collections.Generic.List`1_Enumerator<UnityEngine.Networking.NetworkSystem.CRCMessageEntry>
struct Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tD22101F0065FF54E1F71D59C71338E2BCE7D961C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array_EmptyInternalEnumerator`1<UnityEngine.Networking.NetworkTransformChild>
struct EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyInternalEnumerator_1_t7FAEB7BF111C790684F6D3ACE01728B071E571DC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array_InternalEnumerator`1<UnityEngine.Networking.NetworkTransformChild>
struct InternalEnumerator_1_t3B239AFEB3B5BEE44A4536577F65119226E6438E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t3B239AFEB3B5BEE44A4536577F65119226E6438E_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline InternalEnumerator_1_t3B239AFEB3B5BEE44A4536577F65119226E6438E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t3B239AFEB3B5BEE44A4536577F65119226E6438E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InternalEnumerator_1_t3B239AFEB3B5BEE44A4536577F65119226E6438E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InternalEnumerator_1_t3B239AFEB3B5BEE44A4536577F65119226E6438E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InternalEnumerator_1_t3B239AFEB3B5BEE44A4536577F65119226E6438E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.List`1<System.Boolean>
struct List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_ComCallableWrapper>, IVector_1_tCD20AF461783D0D1EF8074C8B49F3EEAEAF9A97A, IIterable_1_tF1BBFC48541C330D12DE2019AEB805A05D602A10, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39, IVectorView_1_t5FE896DC2D755826090222D74FFEC248C0650719
{
	inline List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVector_1_tCD20AF461783D0D1EF8074C8B49F3EEAEAF9A97A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVector_1_tCD20AF461783D0D1EF8074C8B49F3EEAEAF9A97A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tF1BBFC48541C330D12DE2019AEB805A05D602A10::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tF1BBFC48541C330D12DE2019AEB805A05D602A10*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t5FE896DC2D755826090222D74FFEC248C0650719::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t5FE896DC2D755826090222D74FFEC248C0650719*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(5);
		interfaceIds[0] = IVector_1_tCD20AF461783D0D1EF8074C8B49F3EEAEAF9A97A::IID;
		interfaceIds[1] = IIterable_1_tF1BBFC48541C330D12DE2019AEB805A05D602A10::IID;
		interfaceIds[2] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[3] = IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID;
		interfaceIds[4] = IVectorView_1_t5FE896DC2D755826090222D74FFEC248C0650719::IID;

		*iidCount = 5;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m4687C4F46108EF8271A9647DC18FAE5AA560F1F7(uint32_t ___index0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetAt_m4687C4F46108EF8271A9647DC18FAE5AA560F1F7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_mDAF636DFDB833BB54CF183E923578197C39BBB1B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_get_Size_mDAF636DFDB833BB54CF183E923578197C39BBB1B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_mADBA121498CE2BC7FEAF20806861D363E63F4B49(IVectorView_1_t5FE896DC2D755826090222D74FFEC248C0650719** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetView_mADBA121498CE2BC7FEAF20806861D363E63F4B49_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m7155489A7AA563C6EB009D98EC93865732D577F2(bool ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_IndexOf_m7155489A7AA563C6EB009D98EC93865732D577F2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m0A0E4EA81898F5857548E52DFFEB4D006E2275EB(uint32_t ___index0, bool ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_SetAt_m0A0E4EA81898F5857548E52DFFEB4D006E2275EB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_mFB6C03ABEB33A1A9EBB49CAE1D3E18AFCCB7024C(uint32_t ___index0, bool ___value1) IL2CPP_OVERRIDE
	{
		return IVector_1_InsertAt_mFB6C03ABEB33A1A9EBB49CAE1D3E18AFCCB7024C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m38920F67884C2B132B2FD7D2473621B0D17732FF(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAt_m38920F67884C2B132B2FD7D2473621B0D17732FF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m0F510CCFC3E3C38227EFB276CC95D8A588D01686(bool ___value0) IL2CPP_OVERRIDE
	{
		return IVector_1_Append_m0F510CCFC3E3C38227EFB276CC95D8A588D01686_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_mB7727F597672707F20D1559FFF55508585E434DE() IL2CPP_OVERRIDE
	{
		return IVector_1_RemoveAtEnd_mB7727F597672707F20D1559FFF55508585E434DE_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m104D089C16B7DCDB46B358427F022C0B3F5E6042() IL2CPP_OVERRIDE
	{
		return IVector_1_Clear_m104D089C16B7DCDB46B358427F022C0B3F5E6042_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m67A146F52A5A3430CBAAC670DAFEB219FF361D6A(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVector_1_GetMany_m67A146F52A5A3430CBAAC670DAFEB219FF361D6A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_mC5B26882878FE0A2B16829D0245C58C56909784B(uint32_t ___items0ArraySize, bool* ___items0) IL2CPP_OVERRIDE
	{
		return IVector_1_ReplaceAll_mC5B26882878FE0A2B16829D0245C58C56909784B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___items0ArraySize, ___items0);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mFEDFE608D5BBDCC3559FE058FCA10981343CE693(IIterator_1_t9567105C4EAEF1A0CD78219153D0583D1C48D11C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mFEDFE608D5BBDCC3559FE058FCA10981343CE693_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB(IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m901ABB17E23AFB29D7D7D336822A068257AAE538(uint32_t ___index0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m901ABB17E23AFB29D7D7D336822A068257AAE538_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m6724F2A64F2C2D4EA533FC4C5A47DB808C4C74E4(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m6724F2A64F2C2D4EA533FC4C5A47DB808C4C74E4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3BC19BCB4F2AB76CB4EC895229B23B550B57460D(bool ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m3BC19BCB4F2AB76CB4EC895229B23B550B57460D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_mB7E498B3B2F11EF84CAEA7C33DC865757A2D4430(uint32_t ___startIndex0, uint32_t ___items1ArraySize, bool* ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_mB7E498B3B2F11EF84CAEA7C33DC865757A2D4430_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tCF6613377FD07378DDA05A5BC95C5EF4A07B3E75_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.List`1_Enumerator<System.Boolean>
struct Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t70B763692CD8F7854E25DF83069FA76B7C4C7783_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Collections.Generic.IList`1<HoloLensForCV.DetectedArUcoMarker>>
struct Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tC833AB2D08F5043DDC72818A1BB7529A7F0B365B_ComCallableWrapper(obj));
}
