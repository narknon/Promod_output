#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerGetQueueStatisticsRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetQueueStatisticsRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QueueName;
    
    FMultiplayerGetQueueStatisticsRequest();
};

