#pragma once
#include "CoreMinimal.h"
#include "EBattalionColour.h"
#include "UObject/NoExportTypes.h"
#include "BattalionColourEntity.generated.h"

USTRUCT(BlueprintType)
struct FBattalionColourEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattalionColour ColourId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Colour;
    
    PROMOD_API FBattalionColourEntity();
};

