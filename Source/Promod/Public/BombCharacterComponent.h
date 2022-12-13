#pragma once
#include "CoreMinimal.h"
#include "BattalionCharacterComponent.h"
#include "SpecialAnim.h"
#include "BombCharacterComponent.generated.h"

class USkeletalMesh;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBombCharacterComponent : public UBattalionCharacterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Bomb1PSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* Bomb3PSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* Bomb1PSkeletalMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* Bomb3PSkeletalMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpecialAnim PlantingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpecialAnim QuickPlantingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSpecialAnim DefusingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> Mesh1PMaterials;
    
    UBombCharacterComponent();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StopQuickPlantingAnimation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StopPlantingAnimation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StopDefusingAnimation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_PlayQuickPlantingAnimation(float PlantTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_PlayPlantingAnimation(float PlantTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_PlayDefusingAnimation(float DefuseTime);
    
};

