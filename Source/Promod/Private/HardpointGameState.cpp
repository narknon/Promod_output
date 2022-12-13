#include "HardpointGameState.h"
#include "Net/UnrealNetwork.h"

void AHardpointGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHardpointGameState, CurrentZoneTimeRemaining);
    DOREPLIFETIME(AHardpointGameState, CurrentHardpointState);
    DOREPLIFETIME(AHardpointGameState, CurrentZoneAllegiance);
}

AHardpointGameState::AHardpointGameState() {
    this->CurrentZoneTimeRemaining = 0.00f;
    this->CurrentHardpointState = EHardpointState::NEUTRAL;
    this->CurrentZoneAllegiance = 0;
}

