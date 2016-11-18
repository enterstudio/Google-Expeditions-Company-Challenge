﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t224487639;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3220522733;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2431285719;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1894914657;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Security_Cryptography_X509Certificat3220522733.h"
#include "System_System_Security_Authentication_SslProtocols1694761299.h"
#include "System_System_Net_Security_LocalCertificateSelecti2431285719.h"
#include "System_System_Net_Security_RemoteCertificateValida1894914657.h"

// System.Void WebSocketSharp.Net.ClientSslConfiguration::.ctor(System.String)
extern "C"  void ClientSslConfiguration__ctor_m1520595208 (ClientSslConfiguration_t224487639 * __this, String_t* ___targetHost0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::.ctor(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C"  void ClientSslConfiguration__ctor_m4139311017 (ClientSslConfiguration_t224487639 * __this, String_t* ___targetHost0, X509CertificateCollection_t3220522733 * ___clientCertificates1, int32_t ___enabledSslProtocols2, bool ___checkCertificateRevocation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection WebSocketSharp.Net.ClientSslConfiguration::get_ClientCertificates()
extern "C"  X509CertificateCollection_t3220522733 * ClientSslConfiguration_get_ClientCertificates_m3059222461 (ClientSslConfiguration_t224487639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::set_ClientCertificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void ClientSslConfiguration_set_ClientCertificates_m935052366 (ClientSslConfiguration_t224487639 * __this, X509CertificateCollection_t3220522733 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.LocalCertificateSelectionCallback WebSocketSharp.Net.ClientSslConfiguration::get_ClientCertificateSelectionCallback()
extern "C"  LocalCertificateSelectionCallback_t2431285719 * ClientSslConfiguration_get_ClientCertificateSelectionCallback_m2032495468 (ClientSslConfiguration_t224487639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::set_ClientCertificateSelectionCallback(System.Net.Security.LocalCertificateSelectionCallback)
extern "C"  void ClientSslConfiguration_set_ClientCertificateSelectionCallback_m1166328063 (ClientSslConfiguration_t224487639 * __this, LocalCertificateSelectionCallback_t2431285719 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.ClientSslConfiguration::get_ServerCertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t1894914657 * ClientSslConfiguration_get_ServerCertificateValidationCallback_m3419189347 (ClientSslConfiguration_t224487639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::set_ServerCertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
extern "C"  void ClientSslConfiguration_set_ServerCertificateValidationCallback_m1115776404 (ClientSslConfiguration_t224487639 * __this, RemoteCertificateValidationCallback_t1894914657 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WebSocketSharp.Net.ClientSslConfiguration::get_TargetHost()
extern "C"  String_t* ClientSslConfiguration_get_TargetHost_m186084713 (ClientSslConfiguration_t224487639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::set_TargetHost(System.String)
extern "C"  void ClientSslConfiguration_set_TargetHost_m2314038050 (ClientSslConfiguration_t224487639 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
