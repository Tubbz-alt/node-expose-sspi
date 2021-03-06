[node-expose-sspi](../README.md) › [Globals](../globals.md) › ["lib/sspi.d"](_lib_sspi_d_.md)

# Module: "lib/sspi.d"

## Index

### Interfaces

* [AcceptSecurityContextInput](../interfaces/_lib_sspi_d_.acceptsecuritycontextinput.md)
* [AcquireCredHandleInput](../interfaces/_lib_sspi_d_.acquirecredhandleinput.md)
* [CredHandle](../interfaces/_lib_sspi_d_.credhandle.md)
* [CredentialWithExpiry](../interfaces/_lib_sspi_d_.credentialwithexpiry.md)
* [CtxtHandle](../interfaces/_lib_sspi_d_.ctxthandle.md)
* [GetTokenInformationInput](../interfaces/_lib_sspi_d_.gettokeninformationinput.md)
* [HANDLE](../interfaces/_lib_sspi_d_.handle.md)
* [InitializeSecurityContextInput](../interfaces/_lib_sspi_d_.initializesecuritycontextinput.md)
* [SecBufferDesc](../interfaces/_lib_sspi_d_.secbufferdesc.md)
* [SecPkgInfo](../interfaces/_lib_sspi_d_.secpkginfo.md)
* [SecurityContext](../interfaces/_lib_sspi_d_.securitycontext.md)
* [ServerSecurityContext](../interfaces/_lib_sspi_d_.serversecuritycontext.md)
* [SidObject](../interfaces/_lib_sspi_d_.sidobject.md)
* [Sspi](../interfaces/_lib_sspi_d_.sspi.md)
* [UserCredential](../interfaces/_lib_sspi_d_.usercredential.md)

### Type aliases

* [InformationClass](_lib_sspi_d_.md#informationclass)
* [SecuritySupportProvider](_lib_sspi_d_.md#securitysupportprovider)
* [SidPointer](_lib_sspi_d_.md#sidpointer)
* [Token](_lib_sspi_d_.md#token)

## Type aliases

###  InformationClass

Ƭ **InformationClass**: *"TokenGroups"*

*Defined in [lib/sspi.d.ts:72](https://github.com/jlguenego/node-expose-sspi/blob/9a7ed80/lib/sspi.d.ts#L72)*

___

###  SecuritySupportProvider

Ƭ **SecuritySupportProvider**: *"NTLM" | "Kerberos" | "Negotiate"*

*Defined in [lib/sspi.d.ts:11](https://github.com/jlguenego/node-expose-sspi/blob/9a7ed80/lib/sspi.d.ts#L11)*

___

###  SidPointer

Ƭ **SidPointer**: *string*

*Defined in [lib/sspi.d.ts:70](https://github.com/jlguenego/node-expose-sspi/blob/9a7ed80/lib/sspi.d.ts#L70)*

A pointer to an Sid (to be freed).

___

###  Token

Ƭ **Token**: *string*

*Defined in [lib/sspi.d.ts:63](https://github.com/jlguenego/node-expose-sspi/blob/9a7ed80/lib/sspi.d.ts#L63)*

A Token is a pointer to some user information.
