#include "PlayerStateData.h"

FPlayerStateData::FPlayerStateData() {
    this->StartingXP = 0;
    this->StartingProScore = 0;
    this->NumKills = 0;
    this->NumAssists = 0;
    this->NumDeaths = 0;
    this->Score = 0.00f;
    this->Ping = 0;
    this->exactPing = 0.00f;
    this->PlayerId = 0;
    this->CTFFlagCaptures = 0;
    this->CTFFlagReturned = 0;
    this->DOMZoneCaptures = 0;
    this->DomZoneNeutralizations = 0;
}

