#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BotPOI.generated.h"

UCLASS(Blueprintable)
class ABotPOI : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttackersPOI;
    
    ABotPOI();
};

