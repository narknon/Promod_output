#pragma once
#include "CoreMinimal.h"
#include "InvincibleTracker.generated.h"

class ABattalionPlayerControllerGMBase;

USTRUCT(BlueprintType)
struct FInvincibleTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceivedMedalThisLife;
    
    PROMOD_API FInvincibleTracker();
};

