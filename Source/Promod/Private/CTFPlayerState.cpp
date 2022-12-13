#include "CTFPlayerState.h"
#include "Net/UnrealNetwork.h"

bool ACTFPlayerState::GetHasFlag() {
    return false;
}

void ACTFPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACTFPlayerState, CarryingFlagHomeZone);
    DOREPLIFETIME(ACTFPlayerState, CarryingFlagTeam);
    DOREPLIFETIME(ACTFPlayerState, CarryingFlagNation);
    DOREPLIFETIME(ACTFPlayerState, HasFlag);
    DOREPLIFETIME(ACTFPlayerState, FlagsCaptured);
    DOREPLIFETIME(ACTFPlayerState, FlagsReturned);
}

ACTFPlayerState::ACTFPlayerState() {
    this->CarryingFlagHomeZone = NULL;
    this->CarryingFlagTeam = 255;
    this->CarryingFlagNation = ENationType::Nation_Invalid;
    this->HasFlag = false;
    this->FlagsCaptured = 0;
    this->FlagsReturned = 0;
}

