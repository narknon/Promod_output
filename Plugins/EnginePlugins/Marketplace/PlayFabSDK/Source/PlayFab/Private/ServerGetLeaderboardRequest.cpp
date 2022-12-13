#include "ServerGetLeaderboardRequest.h"

FServerGetLeaderboardRequest::FServerGetLeaderboardRequest() {
    this->MaxResultsCount = 0;
    this->ProfileConstraints = NULL;
    this->StartPosition = 0;
    this->UseSpecificVersion = false;
    this->Version = 0;
}

