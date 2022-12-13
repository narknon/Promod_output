#pragma once
#include "CoreMinimal.h"
#include "MapEditorTransformSnapSettings.h"
#include "GameFramework/PlayerController.h"
#include "TransformModeUpdatedDelegate.h"
#include "EMapEditorTransformMode.h"
#include "MapEditorBuildFinishedDelegate.h"
#include "EMapEditorTransformSpace.h"
#include "TransformSpaceUpdatedDelegate.h"
#include "UObject/NoExportTypes.h"
#include "MapEditorObjectData.h"
#include "MapEditorController.generated.h"

class UDataTable;
class UPlayer;
class AMapEditorPawn;
class AMapEditorObject;

UCLASS(Blueprintable)
class PROMOD_API AMapEditorController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MapEditorObjectsDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapEditorTransformMode, FMapEditorTransformSnapSettings> TransformSnapSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapEditorTransformMode TransformMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapEditorTransformSpace TransformSpace;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransformModeUpdated OnTransformModeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransformSpaceUpdated OnTransformSpaceUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapEditorBuildFinished OnBuildFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* OriginalControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayer* OriginalPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapEditorPawn* MapEditorPawn;
    
public:
    AMapEditorController();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleEditMode();
    
    UFUNCTION(BlueprintCallable)
    void SetTransformSpace(EMapEditorTransformSpace Space);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformSnappingEnabled(EMapEditorTransformMode Mode, bool bEnabled, float Grid);
    
    UFUNCTION(BlueprintCallable)
    void SetTransformMode(EMapEditorTransformMode NewTransformMode);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectToSpawn(const FMapEditorObjectData& ObjectData);
    
    UFUNCTION(BlueprintCallable)
    void SaveLevel();
    
    UFUNCTION(BlueprintCallable)
    void RegisterObjectTransformEvent(AMapEditorObject* Object, const FTransform& PrevTransform, const FTransform& NewTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void NameToDisplayString(const FString& InDisplayName, const bool bIsBool, FString& OutString);
    
    UFUNCTION(BlueprintCallable)
    void LoadLevel();
    
    UFUNCTION(BlueprintCallable)
    void GroundSelectedObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMapEditorTransformSpace GetTransformSpace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMapEditorTransformMode GetTransformMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearObjectToSpawn();
    
    UFUNCTION(BlueprintCallable)
    void BuildLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMapEditorTransformSnapSettings BP_GetTransformSnapSettings(EMapEditorTransformMode Mode) const;
    
};

