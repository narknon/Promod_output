#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VOCategory.h"
#include "VODataAsset.generated.h"

UCLASS(Blueprintable)
class UVODataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVOCategory> Category;
    
    UVODataAsset();
};

