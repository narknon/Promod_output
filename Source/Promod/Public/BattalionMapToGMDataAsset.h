#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MapList.h"
#include "BattalionMapToGMDataAsset.generated.h"

UCLASS(Blueprintable)
class UBattalionMapToGMDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapList> Maps;
    
    UBattalionMapToGMDataAsset();
};

