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
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.Version
struct Version_t763695022;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.HttpBase
struct  HttpBase_t1712924533  : public Il2CppObject
{
public:
	// System.Collections.Specialized.NameValueCollection WebSocketSharp.HttpBase::_headers
	NameValueCollection_t2791941106 * ____headers_2;
	// System.Version WebSocketSharp.HttpBase::_version
	Version_t763695022 * ____version_3;
	// System.Byte[] WebSocketSharp.HttpBase::EntityBodyData
	ByteU5BU5D_t4260760469* ___EntityBodyData_4;

public:
	inline static int32_t get_offset_of__headers_2() { return static_cast<int32_t>(offsetof(HttpBase_t1712924533, ____headers_2)); }
	inline NameValueCollection_t2791941106 * get__headers_2() const { return ____headers_2; }
	inline NameValueCollection_t2791941106 ** get_address_of__headers_2() { return &____headers_2; }
	inline void set__headers_2(NameValueCollection_t2791941106 * value)
	{
		____headers_2 = value;
		Il2CppCodeGenWriteBarrier(&____headers_2, value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(HttpBase_t1712924533, ____version_3)); }
	inline Version_t763695022 * get__version_3() const { return ____version_3; }
	inline Version_t763695022 ** get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(Version_t763695022 * value)
	{
		____version_3 = value;
		Il2CppCodeGenWriteBarrier(&____version_3, value);
	}

	inline static int32_t get_offset_of_EntityBodyData_4() { return static_cast<int32_t>(offsetof(HttpBase_t1712924533, ___EntityBodyData_4)); }
	inline ByteU5BU5D_t4260760469* get_EntityBodyData_4() const { return ___EntityBodyData_4; }
	inline ByteU5BU5D_t4260760469** get_address_of_EntityBodyData_4() { return &___EntityBodyData_4; }
	inline void set_EntityBodyData_4(ByteU5BU5D_t4260760469* value)
	{
		___EntityBodyData_4 = value;
		Il2CppCodeGenWriteBarrier(&___EntityBodyData_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
