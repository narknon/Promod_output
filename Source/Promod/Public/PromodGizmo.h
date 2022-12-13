#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GizmoSaveData.h"
#include "PromodGizmo.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;
class USkeletalMesh;
class UAkAudioEvent;

UCLASS(Blueprintable)
class PROMOD_API APromodGizmo : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GizmoMeshComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* GizmoMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* GizmoMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* UseGizmoAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SavedLocationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LoadLocationSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPreviousSavedLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGizmoSaveData> PreviousSaves;
    
    APromodGizmo();
    UFUNCTION(BlueprintCallable)
    void ResetCurrentSavedPositions();
    
    UFUNCTION(BlueprintCallable)
    bool CanUseGizmoLoadPosition();
    
};

