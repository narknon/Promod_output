#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "MultiplayerDeleteCertificateRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FMultiplayerDeleteCertificateRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    FMultiplayerDeleteCertificateRequest();
};

