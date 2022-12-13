#pragma once
#include "CoreMinimal.h"
#include "PendingRespawnInfo.generated.h"

class ABattalionPlayerControllerGMBase;

USTRUCT(BlueprintType)
struct FPendingRespawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* PC;
    
    PROMOD_API FPendingRespawnInfo();
};

