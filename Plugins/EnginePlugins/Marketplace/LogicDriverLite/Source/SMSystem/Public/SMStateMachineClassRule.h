#pragma once
#include "CoreMinimal.h"
#include "SMNodeClassRule.h"
#include "SMStateMachineClassRule.generated.h"

class USMStateMachineInstance;

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMStateMachineClassRule : public FSMNodeClassRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USMStateMachineInstance> StateMachineClass;
    
    FSMStateMachineClassRule();
};

