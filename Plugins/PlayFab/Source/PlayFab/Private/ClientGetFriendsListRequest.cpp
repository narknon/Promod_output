#include "ClientGetFriendsListRequest.h"

FClientGetFriendsListRequest::FClientGetFriendsListRequest() {
    this->IncludeFacebookFriends = false;
    this->IncludeSteamFriends = false;
    this->ProfileConstraints = NULL;
}

