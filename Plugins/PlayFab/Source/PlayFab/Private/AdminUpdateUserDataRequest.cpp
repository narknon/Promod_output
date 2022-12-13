#include "AdminUpdateUserDataRequest.h"

FAdminUpdateUserDataRequest::FAdminUpdateUserDataRequest() {
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

