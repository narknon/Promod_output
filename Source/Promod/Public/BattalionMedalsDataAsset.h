#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BattalionMedalEntity.h"
#include "EBattalionMedalRarity.h"
#include "BattalionMedalsDataAsset.generated.h"

UCLASS(Blueprintable)
class UBattalionMedalsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattalionMedalEntity> Medals;
    
    UBattalionMedalsDataAsset();
    UFUNCTION(BlueprintCallable)
    FText GetRarityDisplayText(EBattalionMedalRarity Rarity);
    
    UFUNCTION(BlueprintCallable)
    FBattalionMedalEntity GetMedalData(const FString& MedalUUID);
    
};

