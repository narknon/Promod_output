#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MapEditorObjectStringVariable.h"
#include "UObject/NoExportTypes.h"
#include "MapEditorObjectFloatVariable.h"
#include "MapEditorObjectBoolVariable.h"
#include "MapEditorObjectIntVariable.h"
#include "MapEditorObjectSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMapEditorObjectSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ObjectTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapEditorObjectBoolVariable> ObjectBoolVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapEditorObjectFloatVariable> ObjectFloatVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapEditorObjectIntVariable> ObjectIntVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapEditorObjectStringVariable> ObjectStringVariables;
    
    PROMOD_API FMapEditorObjectSaveData();
};

