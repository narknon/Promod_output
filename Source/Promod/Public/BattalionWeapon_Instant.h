#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionWeapon.h"
#include "DeathAnim.h"
#include "InstantHitInfo.h"
#include "EWeaponArchetype.h"
#include "Engine/NetSerialization.h"
#include "BuckshotHitInfo.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BattalionWeapon_Instant.generated.h"

class ABattalionBloodEffect;
class ABattalionImpactEffect;
class UParticleSystem;
class UParticleSystemComponent;
class UBattalionDamageType;

UCLASS(Abstract, Blueprintable)
class ABattalionWeapon_Instant : public ABattalionWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeathAnim KilledCharacterDeathAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeathAnimOverridden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HitNotify, meta=(AllowPrivateAccess=true))
    FInstantHitInfo HitNotify;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionImpactEffect> ImpactTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionImpactEffect> FailedImpactTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionBloodEffect> ImpactBloodTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABattalionBloodEffect> ImpactBloodWoundTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TrailFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TracerFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TracerFX1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TracerFX1P_Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrailTargetParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> TracerTickUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponArchetype WeaponCategory;
    
public:
    ABattalionWeapon_Instant();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerNotifyMiss(FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyHitsAndMisses(const TArray<FBuckshotHitInfo>& Hits, FVector_NetQuantizeNormal ShootDir);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyHit(const FHitResult& Impact, FVector_NetQuantizeNormal ShootDir, int32 RandomSeed, float ReticleSpread);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HitNotify();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void LogHitRejected(bool TraceClientRayCollidesWithPlayerOrNothing, bool ImpactInsideMassiveBox, bool ImpactInsideTightBox, bool ImpactIsTracableToBone);
    
public:
    UFUNCTION(BlueprintCallable)
    UBattalionDamageType* GetDamageType();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DrawSphereMulticast(FVector SphereLocation, FColor Color, float Size);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DrawBoxMulticast(FVector BoxCenter, FVector BoxExtents, FColor Color);
    
};

