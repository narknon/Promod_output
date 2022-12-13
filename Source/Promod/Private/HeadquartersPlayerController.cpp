#include "HeadquartersPlayerController.h"
#include "Net/UnrealNetwork.h"

class AHeadquarters_Zone;

void AHeadquartersPlayerController::Stop_HQ_TickingEvent_Implementation() {
}

void AHeadquartersPlayerController::Play_HQ_TickingEvent_Implementation(float CurrentProgress) {
}

void AHeadquartersPlayerController::Client_StopCap_Implementation(AHeadquarters_Zone* Zone) {
}

void AHeadquartersPlayerController::Client_StartCap_Implementation(AHeadquarters_Zone* Zone) {
}

void AHeadquartersPlayerController::Client_SetEndgameState_Implementation(bool NewEndgameState) {
}

void AHeadquartersPlayerController::Client_DebugPrintScore_Implementation() {
}

void AHeadquartersPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AHeadquartersPlayerController, CurrentObjective);
}

AHeadquartersPlayerController::AHeadquartersPlayerController() {
    this->StartTickingEvent = NULL;
    this->StopTickingEvent = NULL;
    this->CurrentObjective = NULL;
}

