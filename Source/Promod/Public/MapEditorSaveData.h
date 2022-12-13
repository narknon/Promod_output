#pragma once
#include "CoreMinimal.h"
#include "PromodSaveData.h"
#include "MapEditorObjectSaveData.h"
#include "MapEditorSaveData.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UMapEditorSaveData : public UPromodSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapEditorObjectSaveData> ObjectSaveData;
    
    UMapEditorSaveData();
};

