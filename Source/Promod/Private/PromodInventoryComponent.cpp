#include "PromodInventoryComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class APromodCharacter;
class ABattalionWeapon;
class UWeaponSlot;

void UPromodInventoryComponent::UnEquipAllWeapons() {
}

void UPromodInventoryComponent::SetOwningCharacter(APromodCharacter* Character) {
}

void UPromodInventoryComponent::SetDesiredSlotType(const ESlotType Val) {
}

void UPromodInventoryComponent::Server_ChangeWeapon_Implementation(UWeaponSlot* PreviousSlot, UWeaponSlot* NextSlot) {
}
bool UPromodInventoryComponent::Server_ChangeWeapon_Validate(UWeaponSlot* PreviousSlot, UWeaponSlot* NextSlot) {
    return true;
}

void UPromodInventoryComponent::RemoveAllWeapons() {
}

void UPromodInventoryComponent::Multicast_EquipSlot_Implementation(ESlotType PassedSlotType, bool AllowReEquipOfSameSlot, bool QuickEquip) {
}

void UPromodInventoryComponent::InitializeSpecialSlot(ABattalionWeapon* InWeapon) {
}

void UPromodInventoryComponent::InitializeLoadout(const FLoadoutInitializer& LoadoutInitializer) {
}

UWeaponSlot* UPromodInventoryComponent::GetSlotByType(ESlotType SlotType) const {
    return NULL;
}

APromodCharacter* UPromodInventoryComponent::GetOwningCharacter() const {
    return NULL;
}

ESlotType UPromodInventoryComponent::GetLastSlotType() const {
    return ESlotType::Primary;
}

ESlotType UPromodInventoryComponent::GetDesiredSlotType() const {
    return ESlotType::Primary;
}

ESlotType UPromodInventoryComponent::GetCurrentlyEquippedSlotType() const {
    return ESlotType::Primary;
}

UWeaponSlot* UPromodInventoryComponent::GetCurrentlyEquippedSlot() const {
    return NULL;
}

ABattalionWeapon* UPromodInventoryComponent::FindWeaponClass(TSubclassOf<ABattalionWeapon> WeaponClass, ESlotType& SlotWeaponFoundIn) const {
    return NULL;
}

ABattalionWeapon* UPromodInventoryComponent::FindWeaponArchetype(EWeaponArchetype WeaponArchetype, ESlotType& SlotWeaponFoundIn) const {
    return NULL;
}

bool UPromodInventoryComponent::EquipSlot(ESlotType PassedSlotType, bool AllowReEquipOfSameSlot, bool QuickEquip) {
    return false;
}

void UPromodInventoryComponent::EquipNextOrPrevSlot(bool SwitchNext) {
}

void UPromodInventoryComponent::DropWeapon(ESlotType SlotType, int32 Type, bool bShouldDematerialize, const FName LastHitBoneName, const FVector& LastHitLocationOffset) {
}

bool UPromodInventoryComponent::CanEquipSlot(ESlotType PassedSlotType) {
    return false;
}

void UPromodInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPromodInventoryComponent, ActiveSlotType);
    DOREPLIFETIME(UPromodInventoryComponent, PreviousSlotType);
    DOREPLIFETIME(UPromodInventoryComponent, DesiredSlotType);
    DOREPLIFETIME(UPromodInventoryComponent, PrimarySlot);
    DOREPLIFETIME(UPromodInventoryComponent, SecondarySlot);
    DOREPLIFETIME(UPromodInventoryComponent, MeleeSlot);
    DOREPLIFETIME(UPromodInventoryComponent, SpecialSlot);
    DOREPLIFETIME(UPromodInventoryComponent, OwningCharacter);
}

UPromodInventoryComponent::UPromodInventoryComponent() {
    this->SlotSelectionOrder.AddDefaulted(3);
    this->ActiveSlotType = ESlotType::Primary;
    this->PreviousSlotType = ESlotType::Primary;
    this->DesiredSlotType = ESlotType::Primary;
    this->PrimarySlot = NULL;
    this->SecondarySlot = NULL;
    this->MeleeSlot = NULL;
    this->SpecialSlot = NULL;
    this->OwningCharacter = NULL;
    this->BattalionSettings = NULL;
    this->MinimumTimeAllowedBetweenEquips = 0.05f;
    this->LastEquipTime = 0.00f;
}

