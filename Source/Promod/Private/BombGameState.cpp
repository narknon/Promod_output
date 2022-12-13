#include "BombGameState.h"
#include "Net/UnrealNetwork.h"

class ABombMode_Bomb;

void ABombGameState::SetBombPlanted_Implementation(bool BombPlanted) {
}

void ABombGameState::OnRep_bBombPlanted() {
}

ABombMode_Bomb* ABombGameState::GetCurrentBomb() {
    return NULL;
}

int32 ABombGameState::GetAttackingTeam() {
    return 0;
}

void ABombGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABombGameState, Bombs);
    DOREPLIFETIME(ABombGameState, BombZones);
    DOREPLIFETIME(ABombGameState, PlantTime);
    DOREPLIFETIME(ABombGameState, QuickPlantTime);
    DOREPLIFETIME(ABombGameState, DefuseTime);
    DOREPLIFETIME(ABombGameState, BombDetonated);
    DOREPLIFETIME(ABombGameState, BombDefused);
    DOREPLIFETIME(ABombGameState, DecideTeamRoundActive);
    DOREPLIFETIME(ABombGameState, DecideTeamRoundComplete);
    DOREPLIFETIME(ABombGameState, DecideTeamVoteInProgress);
    DOREPLIFETIME(ABombGameState, DecideTeamRoundWinner);
    DOREPLIFETIME(ABombGameState, DecideTeamVoteResult);
    DOREPLIFETIME(ABombGameState, UseDecideTeamRound);
    DOREPLIFETIME(ABombGameState, DecideTeamRoundIsKnifeOnly);
    DOREPLIFETIME(ABombGameState, OvertimeCounter);
    DOREPLIFETIME(ABombGameState, BombInteractionProgress);
    DOREPLIFETIME(ABombGameState, BombInteractionTimeStamp);
    DOREPLIFETIME(ABombGameState, BombInteractionPlayer);
    DOREPLIFETIME(ABombGameState, ShootoutRoundTime);
    DOREPLIFETIME(ABombGameState, ShootoutSetupTime);
    DOREPLIFETIME(ABombGameState, ShootoutTransitionTime);
    DOREPLIFETIME(ABombGameState, ShootoutPostRoundTime);
    DOREPLIFETIME(ABombGameState, OverviewAndShootoutTitleScreenTimes);
    DOREPLIFETIME(ABombGameState, bBombPlanted);
    DOREPLIFETIME(ABombGameState, BombSpawns);
    DOREPLIFETIME(ABombGameState, AttackingNation);
    DOREPLIFETIME(ABombGameState, AttackingTeam);
}

ABombGameState::ABombGameState() {
    this->PlantTime = 0.00f;
    this->QuickPlantTime = 0.00f;
    this->DefuseTime = 0.00f;
    this->BombDetonated = false;
    this->BombDefused = false;
    this->DecideTeamRoundActive = false;
    this->DecideTeamRoundComplete = false;
    this->DecideTeamVoteInProgress = false;
    this->DecideTeamRoundWinner = 0;
    this->UseDecideTeamRound = false;
    this->DecideTeamRoundIsKnifeOnly = false;
    this->OvertimeCounter = 0;
    this->BombInteractionProgress = 0.00f;
    this->BombInteractionTimeStamp = 0.00f;
    this->BombInteractionPlayer = NULL;
    this->ShootoutRoundTime = 30.00f;
    this->ShootoutSetupTime = 5.00f;
    this->ShootoutTransitionTime = 5.00f;
    this->ShootoutPostRoundTime = 2.00f;
    this->OverviewAndShootoutTitleScreenTimes = 5.00f;
    this->bBombPlanted = false;
    this->AttackingNation = ENationType::Nation_FRIENDLY;
    this->AttackingTeam = 0;
}

