#include "ReplayDataActor.h"
#include "Net/UnrealNetwork.h"

void AReplayDataActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReplayDataActor, CurrentControlRotations);
}

AReplayDataActor::AReplayDataActor() {
}

