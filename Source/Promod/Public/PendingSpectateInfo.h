#pragma once
#include "CoreMinimal.h"
#include "PendingSpectateInfo.generated.h"

class ABattalionPlayerControllerGMBase;

USTRUCT(BlueprintType)
struct FPendingSpectateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* PC;
    
    PROMOD_API FPendingSpectateInfo();
};

