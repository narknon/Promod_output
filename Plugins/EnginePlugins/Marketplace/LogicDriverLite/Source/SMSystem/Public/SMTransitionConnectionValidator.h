#pragma once
#include "CoreMinimal.h"
#include "SMConnectionValidator.h"
#include "SMNodeConnectionRule.h"
#include "SMTransitionConnectionValidator.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMTransitionConnectionValidator : public FSMConnectionValidator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSMNodeConnectionRule> AllowedConnections;
    
    FSMTransitionConnectionValidator();
};

