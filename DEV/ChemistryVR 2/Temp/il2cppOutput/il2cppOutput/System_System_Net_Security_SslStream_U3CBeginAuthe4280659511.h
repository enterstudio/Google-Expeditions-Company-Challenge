﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.Net.Security.SslStream
struct SslStream_t490807902;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream/<BeginAuthenticateAsServer>c__AnonStorey8
struct  U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t4280659511  : public Il2CppObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream/<BeginAuthenticateAsServer>c__AnonStorey8::serverCertificate
	X509Certificate_t3076817455 * ___serverCertificate_0;
	// System.Net.Security.SslStream System.Net.Security.SslStream/<BeginAuthenticateAsServer>c__AnonStorey8::<>f__this
	SslStream_t490807902 * ___U3CU3Ef__this_1;

public:
	inline static int32_t get_offset_of_serverCertificate_0() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t4280659511, ___serverCertificate_0)); }
	inline X509Certificate_t3076817455 * get_serverCertificate_0() const { return ___serverCertificate_0; }
	inline X509Certificate_t3076817455 ** get_address_of_serverCertificate_0() { return &___serverCertificate_0; }
	inline void set_serverCertificate_0(X509Certificate_t3076817455 * value)
	{
		___serverCertificate_0 = value;
		Il2CppCodeGenWriteBarrier(&___serverCertificate_0, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_1() { return static_cast<int32_t>(offsetof(U3CBeginAuthenticateAsServerU3Ec__AnonStorey8_t4280659511, ___U3CU3Ef__this_1)); }
	inline SslStream_t490807902 * get_U3CU3Ef__this_1() const { return ___U3CU3Ef__this_1; }
	inline SslStream_t490807902 ** get_address_of_U3CU3Ef__this_1() { return &___U3CU3Ef__this_1; }
	inline void set_U3CU3Ef__this_1(SslStream_t490807902 * value)
	{
		___U3CU3Ef__this_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
