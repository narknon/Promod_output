#include "WartideGameState.h"
#include "Net/UnrealNetwork.h"

void AWartideGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWartideGameState, TeamLedgers);
}

AWartideGameState::AWartideGameState() {
}

