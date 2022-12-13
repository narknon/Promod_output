#pragma once
#include "CoreMinimal.h"
#include "AxisBindFilter.generated.h"

USTRUCT(BlueprintType)
struct FAxisBindFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PosNegVal;
    
    PROMOD_API FAxisBindFilter();
};

