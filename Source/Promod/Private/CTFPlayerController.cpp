#include "CTFPlayerController.h"

class APawn;
class ABattalionPlayerState;

void ACTFPlayerController::Server_TakeFlagFromBot_Implementation(APawn* PotentionBot) {
}
bool ACTFPlayerController::Server_TakeFlagFromBot_Validate(APawn* PotentionBot) {
    return true;
}

void ACTFPlayerController::Server_OnFallenOutOfMap_Implementation() {
}
bool ACTFPlayerController::Server_OnFallenOutOfMap_Validate() {
    return true;
}

void ACTFPlayerController::Server_OnDropFlag_Implementation() {
}
bool ACTFPlayerController::Server_OnDropFlag_Validate() {
    return true;
}

void ACTFPlayerController::Client_UpdateFlagVisibility_Implementation() {
}

void ACTFPlayerController::Client_SetEndgameState_Implementation(bool EndGameState) {
}

void ACTFPlayerController::Client_FlagEvent_Implementation(int32 FlagTeamNum, const FString& EventMessage, ABattalionPlayerState* InstigatorState) {
}

ACTFPlayerController::ACTFPlayerController() {
    this->ShowActionTakeFlag = false;
}

