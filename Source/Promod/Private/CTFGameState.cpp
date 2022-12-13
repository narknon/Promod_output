#include "CTFGameState.h"
#include "Net/UnrealNetwork.h"

void ACTFGameState::Multi_SetTimeToCapFlag_Implementation(int32 NewTimeToCapFlag) {
}

void ACTFGameState::Multi_SetOvertimeCounter_Implementation(int32 NewOvertimeCounter) {
}

void ACTFGameState::ForceUpdateOvertimeInfo_Implementation(int32 ServerOvertimeCounter, int32 ServerTimeToCapFlag) {
}

void ACTFGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACTFGameState, TeamFlagZones);
    DOREPLIFETIME(ACTFGameState, TeamFlags);
    DOREPLIFETIME(ACTFGameState, FlagCarriers);
}

ACTFGameState::ACTFGameState() {
    this->OvertimeCounter = 0;
    this->TimeToCapFlag = 0;
}

