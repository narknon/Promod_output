#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_HasLoSTo.generated.h"

UCLASS(Blueprintable)
class UBTDecorator_HasLoSTo : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector EnemyKey;
    
public:
    UBTDecorator_HasLoSTo();
};

