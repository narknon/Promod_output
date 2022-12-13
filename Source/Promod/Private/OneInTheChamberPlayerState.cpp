#include "OneInTheChamberPlayerState.h"
#include "Net/UnrealNetwork.h"

void AOneInTheChamberPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOneInTheChamberPlayerState, NumLivesLeft);
}

AOneInTheChamberPlayerState::AOneInTheChamberPlayerState() {
    this->NumLivesLeft = 0;
}

