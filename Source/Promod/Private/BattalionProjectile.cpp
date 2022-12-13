#include "BattalionProjectile.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"

void ABattalionProjectile::OnRep_Exploded() {
}

void ABattalionProjectile::OnImpact(const FHitResult& HitResult) {
}

void ABattalionProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionProjectile, bExploded);
}

ABattalionProjectile::ABattalionProjectile() {
    this->MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
    this->ExplosionTemplate = NULL;
    this->bExploded = false;
}

