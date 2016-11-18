﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2431285719;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1894914657;

#include "mscorlib_System_Object4170816371.h"
#include "System_System_Security_Authentication_SslProtocols1694761299.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.SslConfiguration
struct  SslConfiguration_t463236076  : public Il2CppObject
{
public:
	// System.Net.Security.LocalCertificateSelectionCallback WebSocketSharp.Net.SslConfiguration::_certSelectionCallback
	LocalCertificateSelectionCallback_t2431285719 * ____certSelectionCallback_0;
	// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.SslConfiguration::_certValidationCallback
	RemoteCertificateValidationCallback_t1894914657 * ____certValidationCallback_1;
	// System.Boolean WebSocketSharp.Net.SslConfiguration::_checkCertRevocation
	bool ____checkCertRevocation_2;
	// System.Security.Authentication.SslProtocols WebSocketSharp.Net.SslConfiguration::_enabledProtocols
	int32_t ____enabledProtocols_3;

public:
	inline static int32_t get_offset_of__certSelectionCallback_0() { return static_cast<int32_t>(offsetof(SslConfiguration_t463236076, ____certSelectionCallback_0)); }
	inline LocalCertificateSelectionCallback_t2431285719 * get__certSelectionCallback_0() const { return ____certSelectionCallback_0; }
	inline LocalCertificateSelectionCallback_t2431285719 ** get_address_of__certSelectionCallback_0() { return &____certSelectionCallback_0; }
	inline void set__certSelectionCallback_0(LocalCertificateSelectionCallback_t2431285719 * value)
	{
		____certSelectionCallback_0 = value;
		Il2CppCodeGenWriteBarrier(&____certSelectionCallback_0, value);
	}

	inline static int32_t get_offset_of__certValidationCallback_1() { return static_cast<int32_t>(offsetof(SslConfiguration_t463236076, ____certValidationCallback_1)); }
	inline RemoteCertificateValidationCallback_t1894914657 * get__certValidationCallback_1() const { return ____certValidationCallback_1; }
	inline RemoteCertificateValidationCallback_t1894914657 ** get_address_of__certValidationCallback_1() { return &____certValidationCallback_1; }
	inline void set__certValidationCallback_1(RemoteCertificateValidationCallback_t1894914657 * value)
	{
		____certValidationCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&____certValidationCallback_1, value);
	}

	inline static int32_t get_offset_of__checkCertRevocation_2() { return static_cast<int32_t>(offsetof(SslConfiguration_t463236076, ____checkCertRevocation_2)); }
	inline bool get__checkCertRevocation_2() const { return ____checkCertRevocation_2; }
	inline bool* get_address_of__checkCertRevocation_2() { return &____checkCertRevocation_2; }
	inline void set__checkCertRevocation_2(bool value)
	{
		____checkCertRevocation_2 = value;
	}

	inline static int32_t get_offset_of__enabledProtocols_3() { return static_cast<int32_t>(offsetof(SslConfiguration_t463236076, ____enabledProtocols_3)); }
	inline int32_t get__enabledProtocols_3() const { return ____enabledProtocols_3; }
	inline int32_t* get_address_of__enabledProtocols_3() { return &____enabledProtocols_3; }
	inline void set__enabledProtocols_3(int32_t value)
	{
		____enabledProtocols_3 = value;
	}
};

struct SslConfiguration_t463236076_StaticFields
{
public:
	// System.Net.Security.LocalCertificateSelectionCallback WebSocketSharp.Net.SslConfiguration::<>f__am$cache4
	LocalCertificateSelectionCallback_t2431285719 * ___U3CU3Ef__amU24cache4_4;
	// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.SslConfiguration::<>f__am$cache5
	RemoteCertificateValidationCallback_t1894914657 * ___U3CU3Ef__amU24cache5_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_4() { return static_cast<int32_t>(offsetof(SslConfiguration_t463236076_StaticFields, ___U3CU3Ef__amU24cache4_4)); }
	inline LocalCertificateSelectionCallback_t2431285719 * get_U3CU3Ef__amU24cache4_4() const { return ___U3CU3Ef__amU24cache4_4; }
	inline LocalCertificateSelectionCallback_t2431285719 ** get_address_of_U3CU3Ef__amU24cache4_4() { return &___U3CU3Ef__amU24cache4_4; }
	inline void set_U3CU3Ef__amU24cache4_4(LocalCertificateSelectionCallback_t2431285719 * value)
	{
		___U3CU3Ef__amU24cache4_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(SslConfiguration_t463236076_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline RemoteCertificateValidationCallback_t1894914657 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline RemoteCertificateValidationCallback_t1894914657 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(RemoteCertificateValidationCallback_t1894914657 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
