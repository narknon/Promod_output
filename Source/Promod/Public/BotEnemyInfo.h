#pragma once
#include "CoreMinimal.h"
#include "BotEnemyInfo.generated.h"

class ABattalionPlayerControllerGMBase;

USTRUCT(BlueprintType)
struct FBotEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* EnemyPC;
    
    PROMOD_API FBotEnemyInfo();
};

