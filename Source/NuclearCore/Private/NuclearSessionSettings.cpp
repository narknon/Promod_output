#include "NuclearSessionSettings.h"

FNuclearSessionSettings::FNuclearSessionSettings() {
    this->Type = ENuclearSessionType::Lobby;
    this->MaxPlayers = 0;
    this->bIsPublic = false;
}

