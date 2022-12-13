#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EOnFireAwardType.h"
#include "OnFireAwardData.h"
#include "OnFireAwardsDataAsset.generated.h"

UCLASS(Blueprintable)
class UOnFireAwardsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EOnFireAwardType, FOnFireAwardData> AwardData;
    
    UOnFireAwardsDataAsset();
    UFUNCTION(BlueprintCallable)
    FOnFireAwardData GetAwardData(EOnFireAwardType AwardType);
    
};

