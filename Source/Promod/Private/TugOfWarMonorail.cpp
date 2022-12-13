#include "TugOfWarMonorail.h"
#include "Net/UnrealNetwork.h"

float ATugOfWarMonorail::GetCurrentDefenderReEnablePercentage() {
    return 0.0f;
}

float ATugOfWarMonorail::GetCurrentAttackerReEnablePercentage() {
    return 0.0f;
}

void ATugOfWarMonorail::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATugOfWarMonorail, SelectedPath_TugOfWar);
    DOREPLIFETIME(ATugOfWarMonorail, MonorailRotation);
    DOREPLIFETIME(ATugOfWarMonorail, MonorailMovementScale);
    DOREPLIFETIME(ATugOfWarMonorail, CurrentAttackerReEnableTimer);
    DOREPLIFETIME(ATugOfWarMonorail, CurrentDefenderSwapEnableTimer);
    DOREPLIFETIME(ATugOfWarMonorail, CurrentPayloadAllegiance);
}

ATugOfWarMonorail::ATugOfWarMonorail() {
    this->SelectedPath_TugOfWar = NULL;
    this->MonorailMovementScale = 1;
    this->CurrentAttackerReEnableTimer = 0.00f;
    this->CurrentDefenderSwapEnableTimer = 0.00f;
    this->CurrentPayloadAllegiance = -1;
}

