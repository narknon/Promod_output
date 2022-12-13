#include "BattalionGrenadePickup.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"

void ABattalionGrenadePickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionGrenadePickup, PickedUpBy);
}

ABattalionGrenadePickup::ABattalionGrenadePickup() {
    this->DisplayMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootMesh"));
    this->PickedUpBy = NULL;
    this->WeaponFireTag = TEXT("Pickup");
    this->PickupSound = NULL;
    this->DestroyAfterTime = false;
    this->GrenadeType = EGrenadeType::Frag;
    this->SphereCollision = NULL;
}

