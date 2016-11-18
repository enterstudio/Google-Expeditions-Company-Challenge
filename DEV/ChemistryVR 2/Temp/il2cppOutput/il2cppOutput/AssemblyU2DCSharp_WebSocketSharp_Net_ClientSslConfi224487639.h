#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3220522733;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_WebSocketSharp_Net_SslConfigurati463236076.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.ClientSslConfiguration
struct  ClientSslConfiguration_t224487639  : public SslConfiguration_t463236076
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection WebSocketSharp.Net.ClientSslConfiguration::_certs
	X509CertificateCollection_t3220522733 * ____certs_6;
	// System.String WebSocketSharp.Net.ClientSslConfiguration::_host
	String_t* ____host_7;

public:
	inline static int32_t get_offset_of__certs_6() { return static_cast<int32_t>(offsetof(ClientSslConfiguration_t224487639, ____certs_6)); }
	inline X509CertificateCollection_t3220522733 * get__certs_6() const { return ____certs_6; }
	inline X509CertificateCollection_t3220522733 ** get_address_of__certs_6() { return &____certs_6; }
	inline void set__certs_6(X509CertificateCollection_t3220522733 * value)
	{
		____certs_6 = value;
		Il2CppCodeGenWriteBarrier(&____certs_6, value);
	}

	inline static int32_t get_offset_of__host_7() { return static_cast<int32_t>(offsetof(ClientSslConfiguration_t224487639, ____host_7)); }
	inline String_t* get__host_7() const { return ____host_7; }
	inline String_t** get_address_of__host_7() { return &____host_7; }
	inline void set__host_7(String_t* value)
	{
		____host_7 = value;
		Il2CppCodeGenWriteBarrier(&____host_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
