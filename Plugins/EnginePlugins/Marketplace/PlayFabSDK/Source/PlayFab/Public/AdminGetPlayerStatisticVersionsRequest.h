#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminGetPlayerStatisticVersionsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminGetPlayerStatisticVersionsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatisticName;
    
    FAdminGetPlayerStatisticVersionsRequest();
};

