#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "CloudScriptRegisterHttpFunctionRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FCloudScriptRegisterHttpFunctionRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FunctionUrl;
    
    FCloudScriptRegisterHttpFunctionRequest();
};

