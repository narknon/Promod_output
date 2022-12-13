#include "TDMPlayerController.h"

class ATDMPlayerState;

void ATDMPlayerController::Server_ResetWeaponPrompt_Implementation() {
}
bool ATDMPlayerController::Server_ResetWeaponPrompt_Validate() {
    return true;
}

void ATDMPlayerController::Server_BuyWeapon_Implementation(const FString& WeaponName) {
}
bool ATDMPlayerController::Server_BuyWeapon_Validate(const FString& WeaponName) {
    return true;
}

void ATDMPlayerController::Server_BuySpecialGrenade_Implementation() {
}
bool ATDMPlayerController::Server_BuySpecialGrenade_Validate() {
    return true;
}

void ATDMPlayerController::Server_BuyGrenade_Implementation() {
}
bool ATDMPlayerController::Server_BuyGrenade_Validate() {
    return true;
}

void ATDMPlayerController::PlayModeSpecificVoiceInstructions() {
}

void ATDMPlayerController::Client_PlayerBoughtWeapon_Implementation(ATDMPlayerState* BuyingPlayer, const FString& WeaponName) {
}

ATDMPlayerController::ATDMPlayerController() {
}

