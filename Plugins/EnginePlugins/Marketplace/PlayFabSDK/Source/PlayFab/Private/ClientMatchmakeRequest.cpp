#include "ClientMatchmakeRequest.h"

FClientMatchmakeRequest::FClientMatchmakeRequest() {
    this->Region = ERegion::pfenum_USCentral;
    this->StartNewIfNoneFound = false;
    this->TagFilter = NULL;
}

