#include "ServerUpdateSharedGroupDataRequest.h"

FServerUpdateSharedGroupDataRequest::FServerUpdateSharedGroupDataRequest() {
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

