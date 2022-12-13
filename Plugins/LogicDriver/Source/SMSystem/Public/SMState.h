#pragma once
#include "CoreMinimal.h"
#include "SMState_Base.h"
#include "SMExposedFunctionHandler.h"
#include "SMState.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMState : public FSMState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMExposedFunctionHandler UpdateStateGraphEvaluator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMExposedFunctionHandler EndStateGraphEvaluator;
    
    FSMState();
};

