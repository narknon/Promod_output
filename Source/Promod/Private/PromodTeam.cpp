#include "PromodTeam.h"
#include "Net/UnrealNetwork.h"

int32 UPromodTeam::GetclassInUse(EClassName ClassName) {
    return 0;
}

void UPromodTeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPromodTeam, LiveClassUsage);
}

UPromodTeam::UPromodTeam() {
}

