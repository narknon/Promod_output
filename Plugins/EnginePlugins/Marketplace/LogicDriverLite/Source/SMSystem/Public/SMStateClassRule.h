#pragma once
#include "CoreMinimal.h"
#include "SMNodeClassRule.h"
#include "SMStateClassRule.generated.h"

class USMStateInstance_Base;

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMStateClassRule : public FSMNodeClassRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USMStateInstance_Base> StateClass;
    
    FSMStateClassRule();
};

