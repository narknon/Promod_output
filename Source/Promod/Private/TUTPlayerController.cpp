#include "TUTPlayerController.h"

class ABattalionWeapon;

void ATUTPlayerController::ToggleEditMode() {
}

void ATUTPlayerController::SetWeaponsKilledWith(const ABattalionWeapon* Primary, const ABattalionWeapon* Secondary, const ABattalionWeapon* Melee, const TArray<EGrenadeType>& LethalGrenades, const TArray<ESpecialGrenadeType>& SpecialGrenades) {
}

void ATUTPlayerController::SetHasDied(const bool bNewHasDied) {
}

void ATUTPlayerController::Server_LoadDefaultLoadout_Implementation(const FLoadoutData& defaultLoadout) {
}
bool ATUTPlayerController::Server_LoadDefaultLoadout_Validate(const FLoadoutData& defaultLoadout) {
    return true;
}

void ATUTPlayerController::Server_BuyWeapon_Implementation(const FString& WeaponName, const ESlotType DestinationSlot, const ENationType TrenchGunNationType) {
}
bool ATUTPlayerController::Server_BuyWeapon_Validate(const FString& WeaponName, const ESlotType DestinationSlot, const ENationType TrenchGunNationType) {
    return true;
}

void ATUTPlayerController::Server_BuySpecialGrenade_Implementation() {
}
bool ATUTPlayerController::Server_BuySpecialGrenade_Validate() {
    return true;
}

void ATUTPlayerController::Server_BuyGrenade_Implementation() {
}
bool ATUTPlayerController::Server_BuyGrenade_Validate() {
    return true;
}

TArray<ESpecialGrenadeType> ATUTPlayerController::GetSpecialGrenadesKilledWith() const {
    return TArray<ESpecialGrenadeType>();
}

ABattalionWeapon* ATUTPlayerController::GetSecondaryKilledWith() const {
    return NULL;
}

ABattalionWeapon* ATUTPlayerController::GetPrimaryKilledWith() const {
    return NULL;
}

ABattalionWeapon* ATUTPlayerController::GetMeleeKilledWith() const {
    return NULL;
}

bool ATUTPlayerController::GetHasDied() const {
    return false;
}

TArray<EGrenadeType> ATUTPlayerController::GetGrenadesKilledWith() const {
    return TArray<EGrenadeType>();
}

ATUTPlayerController::ATUTPlayerController() {
    this->bHasDied = false;
    this->PrimaryKilledWith = NULL;
    this->SecondaryKilledWith = NULL;
    this->MeleeKilledWith = NULL;
}

