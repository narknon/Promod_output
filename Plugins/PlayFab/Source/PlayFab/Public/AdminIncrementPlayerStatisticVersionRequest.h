#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminIncrementPlayerStatisticVersionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminIncrementPlayerStatisticVersionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticName;
    
    FAdminIncrementPlayerStatisticVersionRequest();
};

