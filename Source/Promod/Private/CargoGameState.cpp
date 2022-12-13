#include "CargoGameState.h"
#include "Net/UnrealNetwork.h"

void ACargoGameState::TickRechargeGracePeriod(const float DeltaTime) {
}

void ACargoGameState::TickGracePeriod(const float DeltaTime) {
}

void ACargoGameState::StartGracePeriodTimer() {
}

void ACargoGameState::SetTickRechargeGracePeriod(const bool bInTickRechargeGracePeriod) {
}

void ACargoGameState::SetTickGracePeriod(const bool bInTickGracePeriod) {
}

void ACargoGameState::RechargeGracePeriodTimer(const bool bIgnoreMinimum) {
}

void ACargoGameState::OnRep_CargoActor() {
}

bool ACargoGameState::IsGracePeriodRecharging() {
    return false;
}

bool ACargoGameState::IsGracePeriodDecreasing() {
    return false;
}

int32 ACargoGameState::GetFirstTeamCheckpointPip() {
    return 0;
}

int32 ACargoGameState::GetFirstTeamCheckpoint() {
    return 0;
}

void ACargoGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACargoGameState, FirstTeamCheckpoint);
    DOREPLIFETIME(ACargoGameState, FirstTeamPip);
    DOREPLIFETIME(ACargoGameState, CargoActor);
    DOREPLIFETIME(ACargoGameState, TugOfWarActor);
    DOREPLIFETIME(ACargoGameState, SafeZones);
    DOREPLIFETIME(ACargoGameState, CurrentGracePeriod);
    DOREPLIFETIME(ACargoGameState, CurrentCheckpoint);
    DOREPLIFETIME(ACargoGameState, bUseTugOfWar);
    DOREPLIFETIME(ACargoGameState, CargoVictoryTime);
    DOREPLIFETIME(ACargoGameState, TugOfWarIdleTime);
    DOREPLIFETIME(ACargoGameState, TugOfWarTime);
    DOREPLIFETIME(ACargoGameState, TugOfWarTime_SuddenDeath);
    DOREPLIFETIME(ACargoGameState, bIsInSuddenDeath);
    DOREPLIFETIME(ACargoGameState, TugOfWarSuddenDeathWinPercentage);
    DOREPLIFETIME(ACargoGameState, bTickGracePeriod);
    DOREPLIFETIME(ACargoGameState, bTickRechargeGracePeriod);
}

ACargoGameState::ACargoGameState() {
    this->FirstTeamCheckpoint = -1;
    this->FirstTeamPip = -1;
    this->CargoActor = NULL;
    this->TugOfWarActor = NULL;
    this->bAllowOvertime = true;
    this->TotalGracePeriod = 0.00f;
    this->MinimumGracePeriod = 0.00f;
    this->CurrentMaxGracePeriod = 0.00f;
    this->CurrentGracePeriod = 0.00f;
    this->bHasDoneFirstOvertimeCheck = false;
    this->bHasDoneFirstShootoutOvertimeCheck = false;
    this->CurrentCheckpoint = 0;
    this->bUseTugOfWar = false;
    this->CargoVictoryTime = 15.00f;
    this->TugOfWarIdleTime = 5.00f;
    this->TugOfWarTime = 240.00f;
    this->TugOfWarTime_SuddenDeath = 60.00f;
    this->bIsInSuddenDeath = false;
    this->TugOfWarSuddenDeathWinPercentage = 0.05f;
    this->bTickGracePeriod = false;
    this->bTickRechargeGracePeriod = false;
}

