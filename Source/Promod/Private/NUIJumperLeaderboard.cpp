#include "NUIJumperLeaderboard.h"

void UNUIJumperLeaderboard::OnLeaderboardInfoReceived() {
}

void UNUIJumperLeaderboard::GetMapModeNames() {
}


UNUIJumperLeaderboard::UNUIJumperLeaderboard() {
    this->MemberWidgetClass = NULL;
    this->LeaderboardRadius = 10;
    this->BoardRefreshTime = 5.00f;
    this->bRefreshCooldownReached = true;
    this->bUseFriendsLeaderboard = false;
    this->bUpdateNow = false;
    this->bMainMenu = true;
    this->bAutoUpdate = true;
}

