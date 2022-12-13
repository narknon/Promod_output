#include "BlitzGameState.h"
#include "Net/UnrealNetwork.h"

class ABombPlayerController;
class APromodCharacter;
class ABombMode_Bomb;

void ABlitzGameState::UpdateRound_Implementation(int32 InCurrentStageID) {
}

void ABlitzGameState::UpdateBombStatus() {
}

void ABlitzGameState::UpdateBombPossession_Implementation(ABombPlayerController* Player, APromodCharacter* Character, int32 TeamNum) {
}

void ABlitzGameState::SetBombPlantedBy(bool bIsPlanted, int32 TeamThatPlanted) {
}

void ABlitzGameState::SetBombPickedUpBy(ABombPlayerController* Player, int32 TeamThatPickedUp) {
}

void ABlitzGameState::NotifyBombExploded_Implementation(ABombMode_Bomb* Bomb) {
}

void ABlitzGameState::InitializeGameRoles_Implementation() {
}

void ABlitzGameState::ClearGameRoles_Implementation() {
}

void ABlitzGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABlitzGameState, RemainingFuseTime);
    DOREPLIFETIME(ABlitzGameState, TeamWithBombPossesion);
}

ABlitzGameState::ABlitzGameState() {
    this->BombCarrier = NULL;
    this->BombCarrierController = NULL;
    this->BombCarrierTracker = NULL;
    this->RemainingFuseTime = 0.00f;
    this->TeamWithBombPossesion = -1;
    this->bCanRespawn = false;
    this->CurrentTeamRole = ETeamRole::None;
}

