#pragma once
#include "CoreMinimal.h"
#include "AceTracker.generated.h"

class ABattalionPlayerControllerGMBase;

USTRUCT(BlueprintType)
struct FAceTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Kills;
    
    PROMOD_API FAceTracker();
};

