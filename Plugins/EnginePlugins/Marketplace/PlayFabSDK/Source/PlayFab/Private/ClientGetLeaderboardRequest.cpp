#include "ClientGetLeaderboardRequest.h"

FClientGetLeaderboardRequest::FClientGetLeaderboardRequest() {
    this->MaxResultsCount = 0;
    this->ProfileConstraints = NULL;
    this->StartPosition = 0;
    this->UseSpecificVersion = false;
    this->Version = 0;
}

