#include "ServerGetFriendsListRequest.h"

FServerGetFriendsListRequest::FServerGetFriendsListRequest() {
    this->IncludeFacebookFriends = false;
    this->IncludeSteamFriends = false;
    this->ProfileConstraints = NULL;
}

