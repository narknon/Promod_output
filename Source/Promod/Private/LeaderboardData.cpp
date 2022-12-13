#include "LeaderboardData.h"

FLeaderboardData::FLeaderboardData() {
    this->Ping = 0;
    this->Team = 0;
    this->ObjectiveTime = 0.00f;
    this->Kills = 0;
    this->Assists = 0;
    this->Deaths = 0;
    this->Score = 0;
    this->bIsAlive = false;
    this->PlayerState = NULL;
}

