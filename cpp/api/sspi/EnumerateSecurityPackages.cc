#include "../../misc.h"

namespace myAddon {

Napi::Value e_EnumerateSecurityPackages(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();

  // Enumerates the SSPI packages.
  unsigned long cPackages;
  PSecPkgInfo pPackageInfo = NULL;
  SECURITY_STATUS secStatus =
      EnumerateSecurityPackages(&cPackages, &pPackageInfo);
  if (secStatus != SEC_E_OK) {
    throw Napi::Error::New(env,
                           "Cannot EnumerateSecurityPackages: secStatus = " +
                               plf::error_msg(secStatus));
  }

  Napi::Array result = JS::convert(env, cPackages, pPackageInfo);

  secStatus = FreeContextBuffer(pPackageInfo);
  if (secStatus != SEC_E_OK) {
    throw Napi::Error::New(env, "Cannot FreeContextBuffer: secStatus = " +
                                    plf::error_msg(secStatus));
  }

  return result;
}

}  // namespace myAddon
