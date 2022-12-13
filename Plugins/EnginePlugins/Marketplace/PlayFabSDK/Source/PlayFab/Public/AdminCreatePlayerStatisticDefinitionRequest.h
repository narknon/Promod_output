#pragma once
#include "CoreMinimal.h"
#include "EStatisticResetIntervalOption.h"
#include "EStatisticAggregationMethod.h"
#include "PlayFabRequestCommon.h"
#include "AdminCreatePlayerStatisticDefinitionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminCreatePlayerStatisticDefinitionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatisticAggregationMethod AggregationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatisticResetIntervalOption VersionChangeInterval;
    
    FAdminCreatePlayerStatisticDefinitionRequest();
};

