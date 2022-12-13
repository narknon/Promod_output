#include "DOMGameState.h"
#include "Net/UnrealNetwork.h"

void ADOMGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADOMGameState, Zones);
    DOREPLIFETIME(ADOMGameState, CaptureTime);
}

ADOMGameState::ADOMGameState() {
    this->CaptureTime = 0.00f;
}

