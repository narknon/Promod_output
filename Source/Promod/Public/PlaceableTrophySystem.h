#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "PlaceableTrophySystemDematerializationData.h"
#include "UObject/NoExportTypes.h"
#include "PlaceableTrophySystem.generated.h"

class UMaterialInstanceDynamic;
class UTimelineComponent;
class UCurveFloat;
class UMeshComponent;
class APromodPlayerController;

UCLASS(Blueprintable)
class PROMOD_API APlaceableTrophySystem : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDematerialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* DematerializeTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> TrophyMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* DematerializationMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DematerializeTimelineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DematerializeTimelineCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlaceableTrophySystemDematerializationData, meta=(AllowPrivateAccess=true))
    FPlaceableTrophySystemDematerializationData PlaceableTrophySystemDematerializationData;
    
public:
    APlaceableTrophySystem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlaceableTrophySystemDematerializationData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDematerializing() const;
    
    UFUNCTION(BlueprintCallable)
    void FireHitMarker(APromodPlayerController* InstigatorPC, const FHitResult& HitResult, const bool bKilled);
    
    UFUNCTION(BlueprintCallable)
    void DematerializeUpdate(float BlendIn);
    
    UFUNCTION(BlueprintCallable)
    void DematerializeEnd();
    
    UFUNCTION(BlueprintCallable)
    void Dematerialize(const FName LastHitBoneName, const FVector& LastHitLocationOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_DisableCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_CreateTrophySystemMIDs();
    
};

