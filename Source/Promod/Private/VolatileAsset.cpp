#include "VolatileAsset.h"
#include "Net/UnrealNetwork.h"
#include "Camera/CameraShakeSourceComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AkComponent.h"

void AVolatileAsset::NetMulti_Reset_Implementation() {
}

void AVolatileAsset::NetMulti_ActivateStage_Implementation(uint8 StageIdx) {
}

float AVolatileAsset::GetHealthPercentage() const {
    return 0.0f;
}

void AVolatileAsset::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVolatileAsset, CurrentHealth);
    DOREPLIFETIME(AVolatileAsset, IsDead);
}

AVolatileAsset::AVolatileAsset() {
    this->MeshComponentPtr = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
    this->CameraShakeComponentPtr = CreateDefaultSubobject<UCameraShakeSourceComponent>(TEXT("Camera Shake Comp"));
    this->ExplosionSequencePtr = NULL;
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("Audio Comp"));
    this->BaseHealth = 100.00f;
    this->DecayRatePtr = NULL;
    this->BaseDamage = 0.00f;
    this->MinimumDamage = 13.00f;
    this->DamageInnerRadius = 300.00f;
    this->DamageOuterRadius = 1000.00f;
    this->DamageFalloff = 1.00f;
    this->DamageType = NULL;
    this->DisplayDamageDebug = false;
    this->CurrentHealth = 0.00f;
    this->IsDead = false;
    this->ActiveParticleSystem = NULL;
    this->LastDamageEventInstigator = NULL;
}

