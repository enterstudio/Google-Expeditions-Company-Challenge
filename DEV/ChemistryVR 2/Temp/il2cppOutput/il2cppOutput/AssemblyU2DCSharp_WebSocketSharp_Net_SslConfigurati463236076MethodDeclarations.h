#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// WebSocketSharp.Net.SslConfiguration
struct SslConfiguration_t463236076;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2431285719;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1894914657;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3220522733;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1111884825;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Authentication_SslProtocols1694761299.h"
#include "System_System_Net_Security_LocalCertificateSelecti2431285719.h"
#include "System_System_Net_Security_RemoteCertificateValida1894914657.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Security_Cryptography_X509Certificat3220522733.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "System_System_Security_Cryptography_X509Certificat1111884825.h"
#include "System_System_Net_Security_SslPolicyErrors3099591579.h"

// System.Void WebSocketSharp.Net.SslConfiguration::.ctor(System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void SslConfiguration__ctor_m635508326 (SslConfiguration_t463236076 * __this, int32_t ___enabledSslProtocols0, bool ___checkCertificateRevocation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.LocalCertificateSelectionCallback WebSocketSharp.Net.SslConfiguration::get_CertificateSelectionCallback()
extern "C"  LocalCertificateSelectionCallback_t2431285719 * SslConfiguration_get_CertificateSelectionCallback_m1160532694 (SslConfiguration_t463236076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.SslConfiguration::set_CertificateSelectionCallback(System.Net.Security.LocalCertificateSelectionCallback)
extern "C"  void SslConfiguration_set_CertificateSelectionCallback_m278380245 (SslConfiguration_t463236076 * __this, LocalCertificateSelectionCallback_t2431285719 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.SslConfiguration::get_CertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t1894914657 * SslConfiguration_get_CertificateValidationCallback_m3292635569 (SslConfiguration_t463236076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.SslConfiguration::set_CertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
extern "C"  void SslConfiguration_set_CertificateValidationCallback_m2476310150 (SslConfiguration_t463236076 * __this, RemoteCertificateValidationCallback_t1894914657 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.SslConfiguration::get_CheckCertificateRevocation()
extern "C"  bool SslConfiguration_get_CheckCertificateRevocation_m3609321377 (SslConfiguration_t463236076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.SslConfiguration::set_CheckCertificateRevocation(System.Boolean)
extern "C"  void SslConfiguration_set_CheckCertificateRevocation_m3287621120 (SslConfiguration_t463236076 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Authentication.SslProtocols WebSocketSharp.Net.SslConfiguration::get_EnabledSslProtocols()
extern "C"  int32_t SslConfiguration_get_EnabledSslProtocols_m986440775 (SslConfiguration_t463236076 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.SslConfiguration::set_EnabledSslProtocols(System.Security.Authentication.SslProtocols)
extern "C"  void SslConfiguration_set_EnabledSslProtocols_m175347974 (SslConfiguration_t463236076 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate WebSocketSharp.Net.SslConfiguration::<get_CertificateSelectionCallback>m__11(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C"  X509Certificate_t3076817455 * SslConfiguration_U3Cget_CertificateSelectionCallbackU3Em__11_m3524015112 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, String_t* ___targetHost1, X509CertificateCollection_t3220522733 * ___localCertificates2, X509Certificate_t3076817455 * ___remoteCertificate3, StringU5BU5D_t4054002952* ___acceptableIssuers4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebSocketSharp.Net.SslConfiguration::<get_CertificateValidationCallback>m__12(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool SslConfiguration_U3Cget_CertificateValidationCallbackU3Em__12_m2597616680 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, X509Certificate_t3076817455 * ___certificate1, X509Chain_t1111884825 * ___chain2, int32_t ___sslPolicyErrors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
