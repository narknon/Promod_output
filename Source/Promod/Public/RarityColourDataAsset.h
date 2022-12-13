#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RarityColourEntity.h"
#include "ESkinRarity.h"
#include "RarityColourDataAsset.generated.h"

UCLASS(Blueprintable)
class URarityColourDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRarityColourEntity> RarityColours;
    
    URarityColourDataAsset();
    UFUNCTION(BlueprintCallable)
    FRarityColourEntity GetRarityColour(ESkinRarity Rarity);
    
    UFUNCTION(BlueprintCallable)
    FString GetHexColour(ESkinRarity Rarity);
    
};

