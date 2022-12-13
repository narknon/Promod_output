#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SnapshotDartDematerializationData.h"
#include "UObject/NoExportTypes.h"
#include "SnapshotGrenade.generated.h"

class UAkAudioEvent;
class USphereComponent;
class UProjectileMovementComponent;
class UStaticMeshComponent;
class UAkComponent;
class UMaterialInstanceDynamic;
class UTimelineComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class PROMOD_API ASnapshotGrenade : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* DefaultAkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BleepSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DetonateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayerDetected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* DematerializeTimeline;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> WeaponMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DematerializeTimelineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DematerializeTimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DartDematerializationData, meta=(AllowPrivateAccess=true))
    FSnapshotDartDematerializationData DartDematerializationData;
    
public:
    ASnapshotGrenade();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DartDematerializationData();
    
    UFUNCTION(BlueprintCallable)
    void DematerializeUpdate(float BlendIn);
    
    UFUNCTION(BlueprintCallable)
    void DematerializeEnd();
    
    UFUNCTION(BlueprintCallable)
    void Dematerialize(const FName LastHitBoneName, const FVector& LastHitLocationOffset);
    
};

