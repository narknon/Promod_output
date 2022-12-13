#pragma once
#include "CoreMinimal.h"
#include "SMStateClassRule.h"
#include "SMStateMachineClassRule.h"
#include "SMNodeConnectionRule.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMNodeConnectionRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMStateClassRule FromState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMStateClassRule ToState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMStateMachineClassRule InStateMachine;
    
    FSMNodeConnectionRule();
};

