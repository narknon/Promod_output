#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "CloudScriptUnregisterFunctionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FCloudScriptUnregisterFunctionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FunctionName;
    
    FCloudScriptUnregisterFunctionRequest();
};

