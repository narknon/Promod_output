#include "DOMGameMode.h"

ADOMGameMode::ADOMGameMode() {
    this->CaptureTime = 0.00f;
    this->CooldownTime = 0.00f;
    this->ScoreInterval = 0.00f;
    this->AllyZoneSpawnWeighting = 0.00f;
    this->AllyZoneSpawnDistance = 0.00f;
    this->AllyZoneSpawnExponent = 0.00f;
    this->EnemyZoneSpawnWeighting = 0.00f;
    this->EnemyZoneSpawnDistance = 0.00f;
    this->EnemyZoneSpawnExponent = 0.00f;
    this->CaptureScore = 0;
    this->DOMGameState = NULL;
    this->ZoneClass = NULL;
    this->EventControlAllObjectives = NULL;
    this->EventGettingDominated = NULL;
    this->EventLostA = NULL;
    this->EventLostB = NULL;
    this->EventLostC = NULL;
    this->EventTakenA = NULL;
    this->EventTakenB = NULL;
    this->EventTakenC = NULL;
    this->EventObjectiveTakenSuccess = NULL;
}

