#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlightingPeriod.generated.h"

USTRUCT(BlueprintType)
struct FFlightingPeriod {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndTime;
    
    PROMOD_API FFlightingPeriod();
};

