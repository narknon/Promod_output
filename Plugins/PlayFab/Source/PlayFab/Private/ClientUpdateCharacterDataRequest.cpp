#include "ClientUpdateCharacterDataRequest.h"

FClientUpdateCharacterDataRequest::FClientUpdateCharacterDataRequest() {
    this->Data = NULL;
    this->Permission = EUserDataPermission::pfenum_Private;
}

