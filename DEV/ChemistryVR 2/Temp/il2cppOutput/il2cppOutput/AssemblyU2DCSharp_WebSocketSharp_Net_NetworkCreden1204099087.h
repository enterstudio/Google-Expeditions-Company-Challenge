#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.NetworkCredential
struct  NetworkCredential_t1204099087  : public Il2CppObject
{
public:
	// System.String WebSocketSharp.Net.NetworkCredential::_domain
	String_t* ____domain_0;
	// System.String WebSocketSharp.Net.NetworkCredential::_password
	String_t* ____password_1;
	// System.String[] WebSocketSharp.Net.NetworkCredential::_roles
	StringU5BU5D_t4054002952* ____roles_2;
	// System.String WebSocketSharp.Net.NetworkCredential::_userName
	String_t* ____userName_3;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(NetworkCredential_t1204099087, ____domain_0)); }
	inline String_t* get__domain_0() const { return ____domain_0; }
	inline String_t** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(String_t* value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier(&____domain_0, value);
	}

	inline static int32_t get_offset_of__password_1() { return static_cast<int32_t>(offsetof(NetworkCredential_t1204099087, ____password_1)); }
	inline String_t* get__password_1() const { return ____password_1; }
	inline String_t** get_address_of__password_1() { return &____password_1; }
	inline void set__password_1(String_t* value)
	{
		____password_1 = value;
		Il2CppCodeGenWriteBarrier(&____password_1, value);
	}

	inline static int32_t get_offset_of__roles_2() { return static_cast<int32_t>(offsetof(NetworkCredential_t1204099087, ____roles_2)); }
	inline StringU5BU5D_t4054002952* get__roles_2() const { return ____roles_2; }
	inline StringU5BU5D_t4054002952** get_address_of__roles_2() { return &____roles_2; }
	inline void set__roles_2(StringU5BU5D_t4054002952* value)
	{
		____roles_2 = value;
		Il2CppCodeGenWriteBarrier(&____roles_2, value);
	}

	inline static int32_t get_offset_of__userName_3() { return static_cast<int32_t>(offsetof(NetworkCredential_t1204099087, ____userName_3)); }
	inline String_t* get__userName_3() const { return ____userName_3; }
	inline String_t** get_address_of__userName_3() { return &____userName_3; }
	inline void set__userName_3(String_t* value)
	{
		____userName_3 = value;
		Il2CppCodeGenWriteBarrier(&____userName_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
