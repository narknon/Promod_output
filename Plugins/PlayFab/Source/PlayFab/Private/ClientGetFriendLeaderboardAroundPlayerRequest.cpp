#include "ClientGetFriendLeaderboardAroundPlayerRequest.h"

FClientGetFriendLeaderboardAroundPlayerRequest::FClientGetFriendLeaderboardAroundPlayerRequest() {
    this->IncludeFacebookFriends = false;
    this->IncludeSteamFriends = false;
    this->MaxResultsCount = 0;
    this->ProfileConstraints = NULL;
    this->UseSpecificVersion = false;
    this->Version = 0;
}

