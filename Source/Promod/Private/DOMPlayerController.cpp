#include "DOMPlayerController.h"
#include "Net/UnrealNetwork.h"

class ADOMMode_Zone;
class ADOMPlayerState;

void ADOMPlayerController::UpdateSpectatorHUDZone_Implementation(uint8 SpectatingID, ADOMMode_Zone* Zone) {
}

void ADOMPlayerController::UpdateHUDZone_Implementation(ADOMMode_Zone* Zone) {
}

void ADOMPlayerController::Stop_DOM_TickingEvent_Implementation() {
}

void ADOMPlayerController::Play_DOM_TickingEvent_Implementation(float CurrentProgress) {
}

void ADOMPlayerController::Client_UpdateZoneIcons_Implementation() {
}

void ADOMPlayerController::Client_StopCap_Implementation(ADOMMode_Zone* Zone) {
}

void ADOMPlayerController::Client_StartCap_Implementation(ADOMMode_Zone* Zone) {
}

void ADOMPlayerController::Client_ReportTeamLeftZone_Implementation(ADOMPlayerState* PS, ADOMMode_Zone* Zone) {
}

void ADOMPlayerController::Client_ReportTeamEnteredZone_Implementation(ADOMPlayerState* PS, ADOMMode_Zone* Zone) {
}

void ADOMPlayerController::Client_OnLostPoint_Implementation(const FString& Key) {
}

void ADOMPlayerController::Client_OnHoldingAllFlags_Implementation() {
}

void ADOMPlayerController::Client_OnCapturedPoint_Implementation(const FString& Key) {
}

void ADOMPlayerController::Client_OnBeingDominated_Implementation() {
}

void ADOMPlayerController::Client_ForceSetUseProgress_Implementation(float NewUseProgress) {
}

void ADOMPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADOMPlayerController, CurrentZone);
    DOREPLIFETIME(ADOMPlayerController, DiedInZone);
}

ADOMPlayerController::ADOMPlayerController() {
    this->CurrentZone = NULL;
    this->DiedInZone = NULL;
    this->StartTickingEvent = NULL;
    this->StopTickingEvent = NULL;
}

