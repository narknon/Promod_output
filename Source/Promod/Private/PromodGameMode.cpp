#include "PromodGameMode.h"

void APromodGameMode::UpdateWorldCollapseFX(FVector WorldCollapseCenter, float WorldCollapseRadius, bool Play) {
}

bool APromodGameMode::IsShootoutInProgress() {
    return false;
}

FInitializeLoadoutQueueItem APromodGameMode::DequeueLoadoutInitializationItem() {
    return FInitializeLoadoutQueueItem{};
}

APromodGameMode::APromodGameMode() {
    this->AssaultClassLimit = 99;
    this->BreacherClassLimit = 2;
    this->ReconClassLimit = 1;
    this->MinPlayersForReporting = 10;
    this->TimeToRegenQuickUtil = 60.00f;
    this->SpectateTeamAllowed = false;
    this->RoundEndingTickingTime = 10.00f;
    this->RoundEndingTickingTimePeriod = 1.00f;
    this->ChangeTeamCooldownTime = 60.00f;
    this->PromodGameState = NULL;
    this->bReportingEnabled = false;
    this->bForceEnableReporting = false;
    this->bTryHardMode = false;
    this->NumRegularRoundsPlayed = 0;
    this->TotalAbilitiesUsed = 0;
    this->NumMatchScoreReports = 0;
    this->TotalPlayerMatchScore = 0;
    this->InitialNumRounds = 0;
    this->DelayPeriodBetweenInitLoadouts = 0.10f;
    this->CleanClassSettings = NULL;
    this->ShootOutFirstRoundPlayed = false;
    this->GameEventRecorder = NULL;
    this->TimeSinceLastLoadoutInitialization = 0.00f;
}

