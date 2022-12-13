#pragma once
#include "CoreMinimal.h"
#include "MapStarTimes.generated.h"

USTRUCT(BlueprintType)
struct FMapStarTimes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StarTimeOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StarTimeTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StarTimeThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StarTimePro;
    
    PROMOD_API FMapStarTimes();
};

