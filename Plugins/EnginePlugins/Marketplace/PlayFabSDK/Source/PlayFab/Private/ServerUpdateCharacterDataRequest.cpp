#include "ServerUpdateCharacterDataRequest.h"

FServerUpdateCharacterDataRequest::FServerUpdateCharacterDataRequest() {
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

