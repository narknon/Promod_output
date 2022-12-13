#include "BattalionMarket.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class ABattalionWeapon;
class AWartidePlayerState;

FString ABattalionMarket::GetWeaponNameFromClass(UClass* Weapon) {
    return TEXT("");
}

FSlateBrush ABattalionMarket::GetWeaponImageFromName(const FString& WeaponName) {
    return FSlateBrush{};
}

FSlateBrush ABattalionMarket::GetWeaponImageFromClass(TSubclassOf<ABattalionWeapon> WeaponClass) {
    return FSlateBrush{};
}

UClass* ABattalionMarket::GetWeaponClassFromName(const FString& WeaponName) {
    return NULL;
}

FMarketAvailableWeapon ABattalionMarket::GetMarketWeaponFromName(const FString& WeaponName) {
    return FMarketAvailableWeapon{};
}

int32 ABattalionMarket::GetDefaultSecondaryIndexForNation(ENationType Nation) {
    return 0;
}

FString ABattalionMarket::GetDefaultSecondaryForNation(ENationType Nation) {
    return TEXT("");
}

FString ABattalionMarket::GetDefaultPrimaryForNation(ENationType Nation) {
    return TEXT("");
}

int32 ABattalionMarket::GetCost(const FString& WeaponName) {
    return 0;
}

TArray<FMarketAvailableWeapon> ABattalionMarket::GetAvailableWeaponsForNation(ENationType Nation) {
    return TArray<FMarketAvailableWeapon>();
}

FString ABattalionMarket::GeRandomWeaponNameForNation(ENationType Nation) {
    return TEXT("");
}

bool ABattalionMarket::CanAfford(const FString& WeaponName, int32 Tokens) {
    return false;
}

bool ABattalionMarket::AllowedToBuy(const FString& WeaponName, AWartidePlayerState* PS) {
    return false;
}

void ABattalionMarket::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionMarket, Market);
}

ABattalionMarket::ABattalionMarket() {
}

