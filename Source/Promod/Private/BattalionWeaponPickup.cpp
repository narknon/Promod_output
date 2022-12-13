#include "BattalionWeaponPickup.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"

class ABattalionCharacter;
class ABattalionWeapon;

void ABattalionWeaponPickup::ServerRequestPickup_Implementation(ABattalionCharacter* Other) {
}
bool ABattalionWeaponPickup::ServerRequestPickup_Validate(ABattalionCharacter* Other) {
    return true;
}

void ABattalionWeaponPickup::OnRep_Weapon(ABattalionWeapon* LastWeapon) {
}

TSubclassOf<ABattalionWeapon> ABattalionWeaponPickup::GetWeaponClass() {
    return NULL;
}

ABattalionWeapon* ABattalionWeaponPickup::GetWeapon() {
    return NULL;
}

void ABattalionWeaponPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionWeaponPickup, PickedUpBy);
    DOREPLIFETIME(ABattalionWeaponPickup, Weapon);
}

ABattalionWeaponPickup::ABattalionWeaponPickup() {
    this->PickedUpBy = NULL;
    this->DestroyAfterTime = false;
    this->WeaponClass = NULL;
    this->Weapon = NULL;
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapCollision"));
}

