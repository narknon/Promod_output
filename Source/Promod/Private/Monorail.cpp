#include "Monorail.h"
#include "Net/UnrealNetwork.h"

void AMonorail::OnRepSelectedPath() {
}

void AMonorail::NetMulti_Reset_Implementation() {
}

bool AMonorail::IsTeamPresent(const int32 TeamNum) const {
    return false;
}

bool AMonorail::IsDisabled() const {
    return false;
}

int32 AMonorail::GetSpeedState() const {
    return 0;
}

float AMonorail::GetProgress() const {
    return 0.0f;
}

FText AMonorail::GetLocalPlayerInstruction() const {
    return FText::GetEmpty();
}

float AMonorail::GetFirstTeamScore() {
    return 0.0f;
}

float AMonorail::GetEnableProgress() const {
    return 0.0f;
}

float AMonorail::GetDisableProgress() const {
    return 0.0f;
}

float AMonorail::GetCurrentTime() const {
    return 0.0f;
}

ECargoContentionState AMonorail::GetContentionState() const {
    return ECargoContentionState::Unoccupied;
}

TArray<float> AMonorail::GetCheckpointsAsProgressValues() {
    return TArray<float>();
}

bool AMonorail::DefendersArePresent() const {
    return false;
}

bool AMonorail::AttackersArePresent() const {
    return false;
}

void AMonorail::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMonorail, CurrentTime);
    DOREPLIFETIME(AMonorail, CurrentCheckpointSplineKey);
    DOREPLIFETIME(AMonorail, CurrentCheckpoint);
    DOREPLIFETIME(AMonorail, CurrentTotalMonorailMultiplier);
    DOREPLIFETIME(AMonorail, bCargoInitialized);
    DOREPLIFETIME(AMonorail, bCargoDisabled);
    DOREPLIFETIME(AMonorail, CurrentDisableTimer);
    DOREPLIFETIME(AMonorail, CurrentEnableTimer);
    DOREPLIFETIME(AMonorail, CurrentInitializationTimer);
    DOREPLIFETIME(AMonorail, FirstTeamScore);
    DOREPLIFETIME(AMonorail, SelectedPath);
    DOREPLIFETIME(AMonorail, CrawlerState);
    DOREPLIFETIME(AMonorail, CargoMeshActor);
    DOREPLIFETIME(AMonorail, DecayTimer);
}

AMonorail::AMonorail() {
    this->CurrentTime = 0.00f;
    this->CurrentCheckpointSplineKey = 0.00f;
    this->CurrentCheckpoint = 0;
    this->CurrentTotalMonorailMultiplier = 0.00f;
    this->bCargoInitialized = false;
    this->bCargoDisabled = false;
    this->CurrentDisableTimer = 0.00f;
    this->CurrentEnableTimer = 0.00f;
    this->CurrentInitializationTimer = 0.00f;
    this->FirstTeamScore = 100.00f;
    this->SelectedPath = NULL;
    this->CrawlerState = ECrawlerState::EStationary;
    this->CargoMeshActor = NULL;
    this->TimeUntilReverse = 5.00f;
    this->DecayTimer = 0.00f;
    this->CargoGameMode = NULL;
    this->CargoGameState = NULL;
}

