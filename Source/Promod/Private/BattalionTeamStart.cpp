#include "BattalionTeamStart.h"

ABattalionTeamStart::ABattalionTeamStart() : APlayerStart(FObjectInitializer::Get()) {
    this->SpawnTeam = 0;
    this->bNotForPlayers = false;
    this->bNotForBots = false;
    this->bTeamDeathmatch = true;
}

