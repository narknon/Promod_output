#pragma once
#include "CoreMinimal.h"
#include "SMExposedFunctionHandler.generated.h"

class UFunction;
class UObject;

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMExposedFunctionHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoundFunction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Function;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OwnerObject;
    
public:
    FSMExposedFunctionHandler();
};

