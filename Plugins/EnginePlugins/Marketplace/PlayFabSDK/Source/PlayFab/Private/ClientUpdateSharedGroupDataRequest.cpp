#include "ClientUpdateSharedGroupDataRequest.h"

FClientUpdateSharedGroupDataRequest::FClientUpdateSharedGroupDataRequest() {
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

