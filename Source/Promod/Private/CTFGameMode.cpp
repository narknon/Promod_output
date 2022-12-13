#include "CTFGameMode.h"

ACTFGameMode::ACTFGameMode() {
    this->DistanceToFlagTouch = 0.00f;
    this->DistanceToFlagZone = 0.00f;
    this->DropFlagDisablePickupCounter = 0.00f;
    this->FlagZoneSpawnWeighting = 0.00f;
    this->FlagZoneSpawnDistance = 0.00f;
    this->EnemyFlagAtZoneSpawnPointScalar = 0.00f;
    this->AllyFlagAtZoneSpawnPointScalar = 0.00f;
    this->EnemyFlagNotAtZoneSpawnPointScalar = 0.00f;
    this->AllyFlagNotAtZoneSpawnPointScalar = 0.00f;
    this->UseOvertime = false;
    this->FlagCheckTime = 0.00f;
    this->ExtraTimeSet = false;
    this->NumOvertimeRounds = 0;
    this->DroppedFlagResetTime = 30.00f;
    this->VerticalDistanceToFlagZone = 220.00f;
    this->CTFGameState = NULL;
    this->FlagClass = NULL;
    this->FlagZoneClass = NULL;
    this->EnemyFlagCapturedEvent = NULL;
    this->EnemyFlagReturnedEvent = NULL;
    this->EnemyFlagTakenEvent = NULL;
    this->FriendlyFlagCapturedEvent = NULL;
    this->FriendlyFlagReturnedEvent = NULL;
    this->FriendlyFlagTakenEvent = NULL;
    this->PersonalFlagPickupEvent = NULL;
    this->OnFloorTimer = 0.00f;
    this->FloorTimerActive = false;
}

