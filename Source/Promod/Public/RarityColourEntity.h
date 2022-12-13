#pragma once
#include "CoreMinimal.h"
#include "ESkinRarity.h"
#include "UObject/NoExportTypes.h"
#include "RarityColourEntity.generated.h"

USTRUCT(BlueprintType)
struct FRarityColourEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkinRarity Rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Colour;
    
    PROMOD_API FRarityColourEntity();
};

