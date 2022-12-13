#include "BattalionWeapon_Instant.h"
#include "Net/UnrealNetwork.h"

class UBattalionDamageType;

void ABattalionWeapon_Instant::ServerNotifyMiss_Implementation(FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread) {
}
bool ABattalionWeapon_Instant::ServerNotifyMiss_Validate(FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread) {
    return true;
}

void ABattalionWeapon_Instant::ServerNotifyHitsAndMisses_Implementation(const TArray<FBuckshotHitInfo>& Hits, FVector_NetQuantizeNormal ShootDir) {
}
bool ABattalionWeapon_Instant::ServerNotifyHitsAndMisses_Validate(const TArray<FBuckshotHitInfo>& Hits, FVector_NetQuantizeNormal ShootDir) {
    return true;
}

void ABattalionWeapon_Instant::ServerNotifyHit_Implementation(const FHitResult& Impact, FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread) {
}
bool ABattalionWeapon_Instant::ServerNotifyHit_Validate(const FHitResult& Impact, FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread) {
    return true;
}

void ABattalionWeapon_Instant::OnRep_HitNotify() {
}

void ABattalionWeapon_Instant::LogHitRejected_Implementation(bool TraceClientRayCollidesWithPlayerOrNothing, bool ImpactInsideMassiveBox, bool ImpactInsideTightBox, bool ImpactIsTracableToBone) {
}

UBattalionDamageType* ABattalionWeapon_Instant::GetDamageType() {
    return NULL;
}

void ABattalionWeapon_Instant::DrawSphereMulticast_Implementation(FVector SphereLocation, FColor Color, float Size) {
}

void ABattalionWeapon_Instant::DrawBoxMulticast_Implementation(FVector BoxCenter, FVector BoxExtents, FColor Color) {
}

void ABattalionWeapon_Instant::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABattalionWeapon_Instant, HitNotify);
}

ABattalionWeapon_Instant::ABattalionWeapon_Instant() {
    this->bDeathAnimOverridden = false;
    this->ImpactTemplate = NULL;
    this->FailedImpactTemplate = NULL;
    this->ImpactBloodTemplate = NULL;
    this->ImpactBloodWoundTemplate = NULL;
    this->TrailFX = NULL;
    this->TracerFX = NULL;
    this->TracerFX1P = NULL;
    this->TracerFX1P_Chance = 1.00f;
    this->WeaponCategory = EWeaponArchetype::SMG;
}

