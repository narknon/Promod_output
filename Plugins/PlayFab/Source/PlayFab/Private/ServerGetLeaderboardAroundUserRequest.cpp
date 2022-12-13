#include "ServerGetLeaderboardAroundUserRequest.h"

FServerGetLeaderboardAroundUserRequest::FServerGetLeaderboardAroundUserRequest() {
    this->MaxResultsCount = 0;
    this->ProfileConstraints = NULL;
    this->UseSpecificVersion = false;
    this->Version = 0;
}

