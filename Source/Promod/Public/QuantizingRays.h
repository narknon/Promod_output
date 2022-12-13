#pragma once
#include "CoreMinimal.h"
#include "DebugRay.h"
#include "QuantizingRays.generated.h"

USTRUCT(BlueprintType)
struct FQuantizingRays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugRay Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugRay Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugRay TOP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugRay BOTTOM;
    
    PROMOD_API FQuantizingRays();
};

