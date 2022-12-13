#pragma once
#include "CoreMinimal.h"
#include "SMConnectionValidator.h"
#include "SMStateClassRule.h"
#include "SMStateMachineNodePlacementValidator.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMStateMachineNodePlacementValidator : public FSMConnectionValidator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSMStateClassRule> AllowedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowParents;
    
    FSMStateMachineNodePlacementValidator();
};

