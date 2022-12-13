#include "CTFMode_Flag.h"
#include "Net/UnrealNetwork.h"
#include "WorldMarkerComponent.h"

class ABattalionCharacter;

void ACTFMode_Flag::OnRep_AttachedCharacter(ABattalionCharacter* PreviousAttachedCharacter) {
}

void ACTFMode_Flag::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACTFMode_Flag, AtHome);
    DOREPLIFETIME(ACTFMode_Flag, AttachedToPlayer);
    DOREPLIFETIME(ACTFMode_Flag, TeamAllegiance);
    DOREPLIFETIME(ACTFMode_Flag, NationAllegiance);
    DOREPLIFETIME(ACTFMode_Flag, AttachedCharacter);
}

ACTFMode_Flag::ACTFMode_Flag() {
    this->HomeZone = NULL;
    this->AtHome = false;
    this->AttachedToPlayer = false;
    this->TeamAllegiance = 0;
    this->NationAllegiance = ENationType::Nation_FRIENDLY;
    this->WorldMarker = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("UIWorldMarker"));
    this->AttachedCharacter = NULL;
    this->FlagResetTimer = 0.00f;
}

