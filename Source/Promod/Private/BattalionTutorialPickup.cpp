#include "BattalionTutorialPickup.h"
#include "Templates/SubclassOf.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"

class ABattalionWeapon;
class ABattalionCharacter;
class UBattalionDamageType;

void ABattalionTutorialPickup::SetWeapon(ABattalionWeapon* NewWeapon) {
}

void ABattalionTutorialPickup::RequestPickup(ABattalionCharacter* Other) {
}

UBattalionDamageType* ABattalionTutorialPickup::GetWeaponDamageType() {
    return NULL;
}

TSubclassOf<ABattalionWeapon> ABattalionTutorialPickup::GetWeaponClass() {
    return NULL;
}

ABattalionTutorialPickup::ABattalionTutorialPickup() {
    this->WeaponClass = NULL;
    this->Weapon = NULL;
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
}

