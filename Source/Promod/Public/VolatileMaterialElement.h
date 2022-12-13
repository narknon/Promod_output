#pragma once
#include "CoreMinimal.h"
#include "VolatileMaterialElement.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FVolatileMaterialElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialSwapPtr;
    
    UPROPERTY(EditAnywhere)
    uint8 ElementIndex;
    
    PROMOD_API FVolatileMaterialElement();
};

