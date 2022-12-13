#include "BattalionGrenade.h"
#include "Net/UnrealNetwork.h"
#include "AkComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

void ABattalionGrenade::SetMovementEnabled(bool bEnable) {
}

void ABattalionGrenade::OnGrenadeStop(const FHitResult& ImpactResult) {
}

void ABattalionGrenade::OnGrenadeBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

void ABattalionGrenade::HandleGrenadeRotation_Implementation(float DeltaTime) {
}

void ABattalionGrenade::FireHitMarker(const FHitResult& HitResult) {
}

void ABattalionGrenade::Explode() {
}



void ABattalionGrenade::AddInstigatorToIgnoredActors() const {
}

void ABattalionGrenade::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionGrenade, MyGrenadeType);
}

ABattalionGrenade::ABattalionGrenade() {
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh1P"));
    this->StaticMeshComponent = NULL;
    this->CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));
    this->MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComponent"));
    this->bCanCollideWithThrowingPlayer = false;
    this->FirstPersonMeshMaterial = NULL;
    this->ThrowerCollisionGracePeriod = 0.10f;
    this->bMovementEnabled = true;
    this->DetonationSound = NULL;
    this->DetonationFX = NULL;
    this->DirectImpactDamageType = NULL;
    this->DetonationDamageType = NULL;
    this->bUseProjectileMovement = true;
    this->bManualExplode = false;
    this->bShowGrenadeMarker = true;
    this->FuseTime = 3.40f;
    this->PseudoGravity = 1960.00f;
    this->PseudoZRestitution = 0.30f;
    this->PseudoXYRestitution = 0.40f;
    this->GrenadeSpinModifier = 0.50f;
    this->ClampSpeed = 0.00f;
    this->ThrowImpulse = 2800.00f;
    this->PawnVelocityModifier = 1.50f;
    this->PawnVelocityClamp = 1600.00f;
    this->MyGrenadeType = EGrenadeType::Frag;
    this->DamageFalloff = NULL;
    this->DefaultAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("DefaultAkComponent"));
    this->BounceSoundSoft = NULL;
    this->BounceSoundHard = NULL;
    this->StopBounce = NULL;
    this->GrenadeTickingSound = NULL;
    this->MinGrenadeVelAudio = 20.00f;
    this->HardGrenadeBounceTreshold = 350.00f;
    this->InstigatingController = NULL;
    this->InstigatingPlayerState = NULL;
    this->PrepareCameraSway = NULL;
    this->ThrowCameraSway = NULL;
    this->GrenadePrepTime = 0.50f;
    this->GrenadeThrowTime = 0.33f;
    this->GrenadeThrowAnimLength = 0.43f;
    this->GrenadeThrowVerticalOffset = 0.00f;
    this->GrenadeThrowForwardOffset = 20.00f;
    this->GrenadeThrowPitchOffset = 3.85f;
    this->bShowDebugDamageRange = false;
    this->PhysMat = NULL;
    this->SmokeDetonationDamageType = NULL;
    this->DecalMaterial = NULL;
    this->GrenadeDecalLifeTime = 5.00f;
    this->GrenadeObjectLifeSpan = 5.00f;
}

