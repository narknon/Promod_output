#include "InfectionGameState.h"
#include "Net/UnrealNetwork.h"

void AInfectionGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInfectionGameState, SurvivorTeamSize);
    DOREPLIFETIME(AInfectionGameState, InfectedAlive);
}

AInfectionGameState::AInfectionGameState() {
    this->SurvivorTeamSize = 0;
    this->InfectedAlive = 0;
}

