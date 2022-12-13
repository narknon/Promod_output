#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BattalionColourEntity.h"
#include "EBattalionColour.h"
#include "BattalionColoursDataAsset.generated.h"

UCLASS(Blueprintable)
class UBattalionColoursDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattalionColourEntity> Colours;
    
    UBattalionColoursDataAsset();
    UFUNCTION(BlueprintCallable)
    FString GetHexColour(EBattalionColour ColourId);
    
    UFUNCTION(BlueprintCallable)
    FBattalionColourEntity GetColourData(EBattalionColour ColourId);
    
};

