#pragma once
#include "CoreMinimal.h"
#include "AveragePingPayload.generated.h"

USTRUCT(BlueprintType)
struct FAveragePingPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AveragePing;
    
    PROMOD_API FAveragePingPayload();
};

