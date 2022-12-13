#include "WartidePlayerController.h"
#include "Templates/SubclassOf.h"

class AWartidePlayerState;
class ABattalionWeapon;

void AWartidePlayerController::Server_BuyWeaponWithMarketIndex_Implementation(int32 marketIndex) {
}
bool AWartidePlayerController::Server_BuyWeaponWithMarketIndex_Validate(int32 marketIndex) {
    return true;
}

void AWartidePlayerController::Server_BuyWeapon_Implementation(const FString& WeaponName) {
}
bool AWartidePlayerController::Server_BuyWeapon_Validate(const FString& WeaponName) {
    return true;
}

void AWartidePlayerController::PlayModeSpecificVoiceInstructions() {
}

bool AWartidePlayerController::IsSwapSides() {
    return false;
}

void AWartidePlayerController::Client_PlayerShadowInventoryChanged_Implementation(AWartidePlayerState* PS, const TArray<TSubclassOf<ABattalionWeapon>>& Inventory, int32 NumGrenades, int32 NumSpecialGrenades) {
}

void AWartidePlayerController::Client_PlayerBoughtWeapon_Implementation(AWartidePlayerState* BuyingPlayer, const FString& WeaponName) {
}

void AWartidePlayerController::Client_PlayerBoughtSpecialGrenade_Implementation(AWartidePlayerState* BuyingPlayer) {
}

void AWartidePlayerController::Client_PlayerBoughtGrenade_Implementation(AWartidePlayerState* BuyingPlayer) {
}

void AWartidePlayerController::Client_PlayerBoughtClass_Implementation(AWartidePlayerState* BuyingPlayer, const FString& ClassTemplateName) {
}

AWartidePlayerController::AWartidePlayerController() {
    this->BuyGrenadeSound = NULL;
    this->BuySpecialGrenadeSound = NULL;
    this->BuyWeaponSound = NULL;
    this->DonateSound = NULL;
    this->RequestDonateSound = NULL;
    this->RecievedDonationSound = NULL;
    this->ShowBombActionPlant = false;
    this->ShowBombActionDefuse = false;
    this->AlreadyPlayedVoiceInstructions = false;
}

