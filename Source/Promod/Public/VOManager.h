#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VOCategoryImportance.h"
#include "VOManager.generated.h"

class UVODataAsset;

UCLASS(Blueprintable)
class UVOManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVODataAsset* VOData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoiceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVOCategoryImportance> CategoryImportance;
    
public:
    UVOManager();
};

