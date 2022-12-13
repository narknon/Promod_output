#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NationDataEntity.h"
#include "ENationType.h"
#include "BattalionNationDataAsset.generated.h"

UCLASS(Blueprintable)
class UBattalionNationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNationDataEntity> Nations;
    
    UBattalionNationDataAsset();
    UFUNCTION(BlueprintCallable)
    FNationDataEntity GetNationData(ENationType Nation);
    
    UFUNCTION(BlueprintCallable)
    FString GetHexColour(ENationType Nation);
    
};

