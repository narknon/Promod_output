#include "PingActor.h"
#include "Net/UnrealNetwork.h"
#include "WorldMarkerComponent.h"

void APingActor::OnRep_PingableData() {
}

void APingActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APingActor, PingableData);
}

APingActor::APingActor() {
    this->WorldMarkerComponent = CreateDefaultSubobject<UWorldMarkerComponent>(TEXT("WorldMarker"));
}

