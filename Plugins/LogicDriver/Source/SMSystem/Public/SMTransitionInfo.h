#pragma once
#include "CoreMinimal.h"
#include "SMInfo_Base.h"
#include "UObject/NoExportTypes.h"
#include "SMTransitionInfo.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMTransitionInfo : public FSMInfo_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid FromStateGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ToStateGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FSMTransitionInfo();
};

