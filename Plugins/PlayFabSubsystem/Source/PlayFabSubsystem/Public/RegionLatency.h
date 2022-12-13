#pragma once
#include "CoreMinimal.h"
#include "RegionLatency.generated.h"

USTRUCT(BlueprintType)
struct FRegionLatency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Latencies;
    
    PLAYFABSUBSYSTEM_API FRegionLatency();
};

