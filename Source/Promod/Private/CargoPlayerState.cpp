#include "CargoPlayerState.h"
#include "Net/UnrealNetwork.h"

void ACargoPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACargoPlayerState, ObjectiveTime);
    DOREPLIFETIME(ACargoPlayerState, CurrentContestingTimer);
}

ACargoPlayerState::ACargoPlayerState() {
    this->ObjectiveTime = 0.00f;
    this->CurrentContestingTimer = 0.00f;
}

