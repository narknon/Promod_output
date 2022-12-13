#include "ServerUpdateUserDataRequest.h"

FServerUpdateUserDataRequest::FServerUpdateUserDataRequest() {
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

