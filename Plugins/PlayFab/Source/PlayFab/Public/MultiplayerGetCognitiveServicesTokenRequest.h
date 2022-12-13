#pragma once
#include "CoreMinimal.h"
#include "ECognitiveServicesType.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerGetCognitiveServicesTokenRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerGetCognitiveServicesTokenRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECognitiveServicesType CognitiveServicesType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    FMultiplayerGetCognitiveServicesTokenRequest();
};

