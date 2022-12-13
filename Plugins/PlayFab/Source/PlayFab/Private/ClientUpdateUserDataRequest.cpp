#include "ClientUpdateUserDataRequest.h"

FClientUpdateUserDataRequest::FClientUpdateUserDataRequest() {
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

