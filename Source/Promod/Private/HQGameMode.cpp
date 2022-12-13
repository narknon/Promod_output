#include "HQGameMode.h"

AHQGameMode::AHQGameMode() {
    this->CaptureTime = 0.00f;
    this->CooldownTime = 0.00f;
    this->CaptureScore = 0;
    this->ScorePerSecond = 0;
    this->ObjectiveResetTime = 0.00f;
    this->ObjectiveRespawnTime = 0.00f;
    this->ObjectiveUnlockTime = 0.00f;
    this->ObjectiveCaptureTimeout = 0.00f;
    this->ExtraTimeSet = false;
    this->ZoneClass = NULL;
    this->ObjectiveCapturedEventFriendly = NULL;
    this->ObjectiveCapturedEventEnemy = NULL;
    this->ObjectiveDestroyedEvent = NULL;
    this->FriendlyCapturedHQEvent = NULL;
    this->EnemyCapturedHQEvent = NULL;
    this->FriendlyDestroyedHQEvent = NULL;
    this->EnemyDestroyedHQEvent = NULL;
    this->FriendlySecuredHQEvent = NULL;
    this->EnemySecuredHQEvent = NULL;
    this->HQUnlockedEvent = NULL;
    this->HQLocatedEvent = NULL;
    this->DebugLogTimer = 0.00f;
    this->DebugLogInterval = 15.00f;
    this->DebuggingEndRound = false;
}

