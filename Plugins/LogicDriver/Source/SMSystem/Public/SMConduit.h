#pragma once
#include "CoreMinimal.h"
#include "SMState_Base.h"
#include "SMExposedFunctionHandler.h"
#include "SMConduit.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMConduit : public FSMState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanEnterTransition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanEvaluate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEvalWithTransitions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMExposedFunctionHandler ConduitEnteredGraphEvaluator;
    
    FSMConduit();
};

