#pragma once
#include "CoreMinimal.h"
#include "VOVoice.h"
#include "VOCategory.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FVOCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVOVoice> Voices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    PROMOD_API FVOCategory();
};

