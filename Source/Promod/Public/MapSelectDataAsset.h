#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MapSelectList.h"
#include "MapSelectDataAsset.generated.h"

UCLASS(Blueprintable)
class UMapSelectDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapSelectList> Maps;
    
    UMapSelectDataAsset();
};

