#pragma once
#include "CoreMinimal.h"
#include "LastMinuteSaviorKillTracker.generated.h"

class ABattalionPlayerControllerGMBase;

USTRUCT(BlueprintType)
struct FLastMinuteSaviorKillTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Kills;
    
    PROMOD_API FLastMinuteSaviorKillTracker();
};

