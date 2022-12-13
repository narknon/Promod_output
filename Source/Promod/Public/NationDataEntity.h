#pragma once
#include "CoreMinimal.h"
#include "ENationType.h"
#include "UObject/NoExportTypes.h"
#include "NationDataEntity.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FNationDataEntity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENationType Nation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Colour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    PROMOD_API FNationDataEntity();
};

