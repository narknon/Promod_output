#include "BombGameMode.h"

bool ABombGameMode::IsInOvertime() const {
    return false;
}

float ABombGameMode::GetFuseTime() {
    return 0.0f;
}

ABombGameMode::ABombGameMode() {
    this->UseDecideTeamRound = false;
    this->DecideTeamRoundIsKnifeOnly = false;
    this->DecideRoundTime = 0;
    this->RoundTimeBackup = 0;
    this->bUseOvertime = false;
    this->NumOvertimeRounds = 2;
    this->RoundsToWinUntilStopBackfill = 2;
    this->PlantTime = 0.00f;
    this->QuickPlantTime = 3.00f;
    this->DefuseTime = 0.00f;
    this->FuseTime = 0.00f;
    this->DistanceToPlant = 0.00f;
    this->DistanceToDefuse = 0.00f;
    this->DistanceToPickupBomb = 0.00f;
    this->DefuseEndsRound = false;
    this->AttackingTeam = 0;
    this->EndOnMatchPointWin = false;
    this->NumOvertimeLoops = 1;
    this->OvertimeSwapSidesRound = 1;
    this->RoundWinningTeam = -1;
    this->GameBombObject = NULL;
    this->BombDropInteract = NULL;
    this->BombPickupInteract = NULL;
    this->KnifeVoteHappened = false;
    this->bIsInShootout = false;
    this->PlantingBombEvent = NULL;
    this->DefusingBombEvent = NULL;
    this->BombExplosionEvent = NULL;
    this->PickedUpBombEvent = NULL;
    this->DroppedBombEvent = NULL;
    this->KnifeRoundVOEvent = NULL;
    this->bEnteredOvertime = false;
    this->bEnteredShootout = false;
}

