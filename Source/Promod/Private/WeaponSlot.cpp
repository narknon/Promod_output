#include "WeaponSlot.h"
#include "Net/UnrealNetwork.h"

class ABattalionWeapon;
class UPromodInventoryComponent;

void UWeaponSlot::OnRep_WeaponPtr(ABattalionWeapon* LastWeapon) {
}

void UWeaponSlot::Multicast_AddOrReplaceWeapon_Implementation(ABattalionWeapon* NewWeapon) {
}

bool UWeaponSlot::IsSlotCompatibleWithCategory(EWeaponArchetype Category) const {
    return false;
}

bool UWeaponSlot::IsEmpty() const {
    return false;
}

void UWeaponSlot::InitializeSlot(UPromodInventoryComponent* ParentInventory, ESlotType NewSlotType, ABattalionWeapon* InitialWeapon) {
}

ABattalionWeapon* UWeaponSlot::GetWeaponInSlot() const {
    return NULL;
}

EWeaponArchetype UWeaponSlot::GetSlotWeaponCategory() const {
    return EWeaponArchetype::SMG;
}

ESlotType UWeaponSlot::GetSlotType() const {
    return ESlotType::Primary;
}

UPromodInventoryComponent* UWeaponSlot::GetInventoryComponent() const {
    return NULL;
}

ABattalionWeapon* UWeaponSlot::AddOrReplaceWeapon(ABattalionWeapon* NewWeapon, bool bMulticast) {
    return NULL;
}

void UWeaponSlot::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponSlot, OwningInventory);
    DOREPLIFETIME(UWeaponSlot, WeaponPtr);
    DOREPLIFETIME(UWeaponSlot, SlotType);
}

UWeaponSlot::UWeaponSlot() {
    this->OwningInventory = NULL;
    this->WeaponPtr = NULL;
    this->SlotType = ESlotType::Primary;
}

