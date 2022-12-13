#pragma once
#include "CoreMinimal.h"
#include "SMConnectionValidator.h"
#include "SMStateClassRule.h"
#include "SMStateMachineClassRule.h"
#include "SMStateConnectionValidator.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMStateConnectionValidator : public FSMConnectionValidator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSMStateClassRule> AllowedInboundStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSMStateClassRule> AllowedOutboundStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSMStateMachineClassRule> AllowedInStateMachines;
    
    FSMStateConnectionValidator();
};

