#include "InfectionPlayerState.h"
#include "Net/UnrealNetwork.h"

void AInfectionPlayerState::Server_TriggerInfectedAttackAudio_Implementation(const FVector& Location) {
}
bool AInfectionPlayerState::Server_TriggerInfectedAttackAudio_Validate(const FVector& Location) {
    return true;
}

void AInfectionPlayerState::Server_PlayAttack_Implementation() {
}
bool AInfectionPlayerState::Server_PlayAttack_Validate() {
    return true;
}

void AInfectionPlayerState::Client_PlayAttack_Implementation() {
}

void AInfectionPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInfectionPlayerState, bIsPlayerInfected);
}

AInfectionPlayerState::AInfectionPlayerState() {
    this->bIsPlayerInfected = false;
    this->bCanRegenHealth = false;
}

