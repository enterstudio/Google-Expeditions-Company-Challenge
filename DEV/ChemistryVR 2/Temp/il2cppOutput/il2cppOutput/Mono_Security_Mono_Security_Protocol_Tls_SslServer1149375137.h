#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t3090555431;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t3559239239;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t3353735195;

#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamB657895919.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslServerStream
struct  SslServerStream_t1149375137  : public SslStreamBase_t657895919
{
public:
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslServerStream::ClientCertValidation
	CertificateValidationCallback_t3090555431 * ___ClientCertValidation_16;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslServerStream::PrivateKeySelection
	PrivateKeySelectionCallback_t3559239239 * ___PrivateKeySelection_17;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslServerStream::ClientCertValidation2
	CertificateValidationCallback2_t3353735195 * ___ClientCertValidation2_18;

public:
	inline static int32_t get_offset_of_ClientCertValidation_16() { return static_cast<int32_t>(offsetof(SslServerStream_t1149375137, ___ClientCertValidation_16)); }
	inline CertificateValidationCallback_t3090555431 * get_ClientCertValidation_16() const { return ___ClientCertValidation_16; }
	inline CertificateValidationCallback_t3090555431 ** get_address_of_ClientCertValidation_16() { return &___ClientCertValidation_16; }
	inline void set_ClientCertValidation_16(CertificateValidationCallback_t3090555431 * value)
	{
		___ClientCertValidation_16 = value;
		Il2CppCodeGenWriteBarrier(&___ClientCertValidation_16, value);
	}

	inline static int32_t get_offset_of_PrivateKeySelection_17() { return static_cast<int32_t>(offsetof(SslServerStream_t1149375137, ___PrivateKeySelection_17)); }
	inline PrivateKeySelectionCallback_t3559239239 * get_PrivateKeySelection_17() const { return ___PrivateKeySelection_17; }
	inline PrivateKeySelectionCallback_t3559239239 ** get_address_of_PrivateKeySelection_17() { return &___PrivateKeySelection_17; }
	inline void set_PrivateKeySelection_17(PrivateKeySelectionCallback_t3559239239 * value)
	{
		___PrivateKeySelection_17 = value;
		Il2CppCodeGenWriteBarrier(&___PrivateKeySelection_17, value);
	}

	inline static int32_t get_offset_of_ClientCertValidation2_18() { return static_cast<int32_t>(offsetof(SslServerStream_t1149375137, ___ClientCertValidation2_18)); }
	inline CertificateValidationCallback2_t3353735195 * get_ClientCertValidation2_18() const { return ___ClientCertValidation2_18; }
	inline CertificateValidationCallback2_t3353735195 ** get_address_of_ClientCertValidation2_18() { return &___ClientCertValidation2_18; }
	inline void set_ClientCertValidation2_18(CertificateValidationCallback2_t3353735195 * value)
	{
		___ClientCertValidation2_18 = value;
		Il2CppCodeGenWriteBarrier(&___ClientCertValidation2_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
