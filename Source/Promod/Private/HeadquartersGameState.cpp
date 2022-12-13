#include "HeadquartersGameState.h"
#include "Net/UnrealNetwork.h"

void AHeadquartersGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHeadquartersGameState, ObjectiveCaptureTimeout);
    DOREPLIFETIME(AHeadquartersGameState, ObjectiveResetTime);
    DOREPLIFETIME(AHeadquartersGameState, ObjectiveRespawnTime);
    DOREPLIFETIME(AHeadquartersGameState, ObjectiveUnlockTime);
    DOREPLIFETIME(AHeadquartersGameState, ObjectiveStateChangedTimeStamp);
    DOREPLIFETIME(AHeadquartersGameState, ObjectiveTimeRemaining);
    DOREPLIFETIME(AHeadquartersGameState, ObjectiveResetTimer);
    DOREPLIFETIME(AHeadquartersGameState, ObjectiveRespawnTimer);
    DOREPLIFETIME(AHeadquartersGameState, ObjectiveUnlockTimer);
    DOREPLIFETIME(AHeadquartersGameState, ObjectiveCurrentlyOwned);
    DOREPLIFETIME(AHeadquartersGameState, CurrentObjectiveState);
}

AHeadquartersGameState::AHeadquartersGameState() {
    this->ObjectiveCaptureTimeout = 0.00f;
    this->ObjectiveResetTime = 0.00f;
    this->ObjectiveRespawnTime = 0.00f;
    this->ObjectiveUnlockTime = 0.00f;
    this->ObjectiveStateChangedTimeStamp = 0.00f;
    this->ObjectiveTimeRemaining = 0.00f;
    this->ObjectiveResetTimer = 0.00f;
    this->ObjectiveRespawnTimer = 0.00f;
    this->ObjectiveUnlockTimer = 0.00f;
    this->ObjectiveCurrentlyOwned = false;
    this->CurrentObjectiveState = EObjectiveState::ENoState;
}

