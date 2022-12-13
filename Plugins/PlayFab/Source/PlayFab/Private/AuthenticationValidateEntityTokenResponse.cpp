#include "AuthenticationValidateEntityTokenResponse.h"

FAuthenticationValidateEntityTokenResponse::FAuthenticationValidateEntityTokenResponse() {
    this->Entity = NULL;
    this->IdentityProvider = ELoginIdentityProvider::pfenum_Unknown;
    this->Lineage = NULL;
}

