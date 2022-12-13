#pragma once
#include "CoreMinimal.h"
#include "PFRegionInfo.generated.h"

USTRUCT(BlueprintType)
struct PLAYFABSUBSYSTEM_API FPFRegionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Latency;
    
    FPFRegionInfo();
};

