#include "WartidePlayerState.h"
#include "Net/UnrealNetwork.h"

void AWartidePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWartidePlayerState, bWeaponCarriedOver);
    DOREPLIFETIME(AWartidePlayerState, PrimaryWeapon);
    DOREPLIFETIME(AWartidePlayerState, SecondaryWeapon);
    DOREPLIFETIME(AWartidePlayerState, NumPrimaryGrenades);
    DOREPLIFETIME(AWartidePlayerState, NumSecondaryGrenades);
}

AWartidePlayerState::AWartidePlayerState() {
    this->bWeaponCarriedOver = false;
    this->PrimaryWeapon = EWeaponType::AK74u;
    this->SecondaryWeapon = EWeaponType::AK74u;
    this->NumPrimaryGrenades = 0;
    this->NumSecondaryGrenades = 0;
}

