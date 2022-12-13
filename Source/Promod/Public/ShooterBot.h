#pragma once
#include "CoreMinimal.h"
#include "PromodCharacter.h"
#include "ShooterBot.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class AShooterBot : public APromodCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BotBehavior;
    
    AShooterBot();
};

