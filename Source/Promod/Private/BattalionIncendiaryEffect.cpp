#include "BattalionIncendiaryEffect.h"
#include "AkComponent.h"

void ABattalionIncendiaryEffect::SpawnFireEffects() {
}


ABattalionIncendiaryEffect::ABattalionIncendiaryEffect() {
    this->bFireFxLoaded = false;
    this->bFireFxSpawned = false;
    this->bExploded = false;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->TimeSinceExplosion = 0.00f;
    this->FireFX = NULL;
    this->NumRings = 3;
    this->BaseFireLocationsPerRing = 6;
    this->DistanceBetweenRings = 0.80f;
    this->MaxFireDistance = 140;
    this->FireTraceGravity = 0.02f;
    this->DamageCapsuleHalfHeight = 64.00f;
    this->DamageCapsuleRadius = 32.00f;
    this->IncendiaryLength = 11.00f;
    this->FireLoopEndSoundLength = 4.00f;
    this->FireDamageType = NULL;
    this->DamageRate = 0.20f;
    this->MaxFireDamage = 35.00f;
    this->TimeUntilMaxDamage = 3.00f;
    this->NumDamageRings = 3;
    this->BaseDamageTracesPerRing = 6;
    this->bDebugIncendiaryLocations = false;
    this->EmitterComponent = NULL;
    this->InstigatingController = NULL;
    this->InstigatingPawn = NULL;
}

