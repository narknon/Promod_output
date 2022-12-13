#include "FFAPlayerController.h"

class AFFAPlayerState;

void AFFAPlayerController::Server_ResetWeaponPrompt_Implementation() {
}
bool AFFAPlayerController::Server_ResetWeaponPrompt_Validate() {
    return true;
}

void AFFAPlayerController::Server_BuyWeapon_Implementation(const FString& WeaponName, const ENationType TrenchGunNationType) {
}
bool AFFAPlayerController::Server_BuyWeapon_Validate(const FString& WeaponName, const ENationType TrenchGunNationType) {
    return true;
}

void AFFAPlayerController::Server_BuySpecialGrenade_Implementation() {
}
bool AFFAPlayerController::Server_BuySpecialGrenade_Validate() {
    return true;
}

void AFFAPlayerController::Server_BuyGrenade_Implementation() {
}
bool AFFAPlayerController::Server_BuyGrenade_Validate() {
    return true;
}

void AFFAPlayerController::PlayModeSpecificVoiceInstructions() {
}

void AFFAPlayerController::Client_WinningAndNearlyEndedEvent_Implementation() {
}

void AFFAPlayerController::Client_PlayerBoughtWeapon_Implementation(AFFAPlayerState* BuyingPlayer, const FString& WeaponName) {
}

AFFAPlayerController::AFFAPlayerController() {
}

