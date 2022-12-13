#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CoinEntity.h"
#include "CoinDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class UCoinDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCoinEntity> Coins;
    
    UCoinDataAsset();
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetCompletionsCoinForSeason(int32 season);
    
    UFUNCTION(BlueprintCallable)
    FCoinEntity GetCoinFromIDOnly(const FString& ID);
    
};

