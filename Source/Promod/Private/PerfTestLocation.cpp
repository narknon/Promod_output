#include "PerfTestLocation.h"
#include "Net/UnrealNetwork.h"

void APerfTestLocation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APerfTestLocation, LocationName);
}

APerfTestLocation::APerfTestLocation() : APlayerStart(FObjectInitializer::Get()) {
}

