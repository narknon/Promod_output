#include "DOMPlayerState.h"
#include "Net/UnrealNetwork.h"

void ADOMPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADOMPlayerState, Capturing);
    DOREPLIFETIME(ADOMPlayerState, ZoneCaptures);
    DOREPLIFETIME(ADOMPlayerState, ZoneNeutralizations);
    DOREPLIFETIME(ADOMPlayerState, DefensiveZoneKills);
    DOREPLIFETIME(ADOMPlayerState, OffensiveZoneKills);
}

ADOMPlayerState::ADOMPlayerState() {
    this->Capturing = false;
    this->ZoneCaptures = 0;
    this->ZoneNeutralizations = 0;
    this->DefensiveZoneKills = 0;
    this->OffensiveZoneKills = 0;
}

