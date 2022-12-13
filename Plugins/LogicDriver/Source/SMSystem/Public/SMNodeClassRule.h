#pragma once
#include "CoreMinimal.h"
#include "SMNodeClassRule.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMNodeClassRule {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeChildren;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNOT;
    
    FSMNodeClassRule();
};

