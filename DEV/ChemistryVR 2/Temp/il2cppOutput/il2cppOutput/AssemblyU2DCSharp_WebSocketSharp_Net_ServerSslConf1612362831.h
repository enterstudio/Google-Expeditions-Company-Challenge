#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t160474609;

#include "AssemblyU2DCSharp_WebSocketSharp_Net_SslConfigurati463236076.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebSocketSharp.Net.ServerSslConfiguration
struct  ServerSslConfiguration_t1612362831  : public SslConfiguration_t463236076
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate2 WebSocketSharp.Net.ServerSslConfiguration::_cert
	X509Certificate2_t160474609 * ____cert_6;
	// System.Boolean WebSocketSharp.Net.ServerSslConfiguration::_clientCertRequired
	bool ____clientCertRequired_7;

public:
	inline static int32_t get_offset_of__cert_6() { return static_cast<int32_t>(offsetof(ServerSslConfiguration_t1612362831, ____cert_6)); }
	inline X509Certificate2_t160474609 * get__cert_6() const { return ____cert_6; }
	inline X509Certificate2_t160474609 ** get_address_of__cert_6() { return &____cert_6; }
	inline void set__cert_6(X509Certificate2_t160474609 * value)
	{
		____cert_6 = value;
		Il2CppCodeGenWriteBarrier(&____cert_6, value);
	}

	inline static int32_t get_offset_of__clientCertRequired_7() { return static_cast<int32_t>(offsetof(ServerSslConfiguration_t1612362831, ____clientCertRequired_7)); }
	inline bool get__clientCertRequired_7() const { return ____clientCertRequired_7; }
	inline bool* get_address_of__clientCertRequired_7() { return &____clientCertRequired_7; }
	inline void set__clientCertRequired_7(bool value)
	{
		____clientCertRequired_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
