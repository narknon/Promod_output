#include "BombPlayerState.h"
#include "Net/UnrealNetwork.h"

class ABattalionCharacter;

void ABombPlayerState::SetQuickPlanting_Implementation(bool NewPlanting) {
}

void ABombPlayerState::SetPlanting_Implementation(bool NewPlanting) {
}

void ABombPlayerState::SetPlanted_Implementation(bool NewPlanted) {
}

void ABombPlayerState::SetHasBomb(bool bHasBomb) {
}

void ABombPlayerState::SetDefusing_Implementation(bool NewDefusing) {
}

void ABombPlayerState::Server_SetBotPossessedPS_Implementation(ABattalionCharacter* BattChar) {
}

bool ABombPlayerState::GetHasBomb() {
    return false;
}

void ABombPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABombPlayerState, Planting);
    DOREPLIFETIME(ABombPlayerState, QuickPlanting);
    DOREPLIFETIME(ABombPlayerState, Planted);
    DOREPLIFETIME(ABombPlayerState, Defusing);
    DOREPLIFETIME(ABombPlayerState, Plants);
    DOREPLIFETIME(ABombPlayerState, Defuses);
    DOREPLIFETIME(ABombPlayerState, LastPurchasedWeapon);
    DOREPLIFETIME(ABombPlayerState, HasBomb);
}

ABombPlayerState::ABombPlayerState() {
    this->bKeepClassOnLoadoutReset = false;
    this->Planting = false;
    this->QuickPlanting = false;
    this->Planted = false;
    this->Defusing = false;
    this->Plants = 0;
    this->Defuses = 0;
    this->HasBomb = false;
}

