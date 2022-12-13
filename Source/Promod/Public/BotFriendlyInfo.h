#pragma once
#include "CoreMinimal.h"
#include "BotFriendlyInfo.generated.h"

class ABattalionPlayerControllerGMBase;

USTRUCT(BlueprintType)
struct FBotFriendlyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* FriendlyPC;
    
    PROMOD_API FBotFriendlyInfo();
};

