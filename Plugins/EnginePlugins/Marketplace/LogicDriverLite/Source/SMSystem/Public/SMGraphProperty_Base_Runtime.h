#pragma once
#include "CoreMinimal.h"
#include "SMExposedFunctionHandler.h"
#include "UObject/NoExportTypes.h"
#include "SMGraphProperty_Base_Runtime.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMGraphProperty_Base_Runtime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSMExposedFunctionHandler GraphEvaluator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid OwnerGuid;
    
public:
    FSMGraphProperty_Base_Runtime();
};

