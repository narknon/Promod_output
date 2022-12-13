#pragma once
#include "CoreMinimal.h"
#include "SMTransitionInfo.h"
#include "SMInfo_Base.h"
#include "SMStateInfo.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMStateInfo : public FSMInfo_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSMTransitionInfo> OutgoingTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEndState;
    
    FSMStateInfo();
};

