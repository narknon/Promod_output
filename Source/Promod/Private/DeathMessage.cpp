#include "DeathMessage.h"

FDeathMessage::FDeathMessage() {
    this->bKillerIsOwner = false;
    this->bVictimIsOwner = false;
    this->bAssisterIsOwner = false;
    this->KillerTeamNum = 0;
    this->VictimTeamNum = 0;
    this->HideTime = 0.00f;
    this->Killer = NULL;
    this->Victim = NULL;
}

