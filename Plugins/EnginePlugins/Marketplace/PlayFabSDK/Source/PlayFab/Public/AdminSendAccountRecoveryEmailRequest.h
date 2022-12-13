#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "AdminSendAccountRecoveryEmailRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FAdminSendAccountRecoveryEmailRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Email;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmailTemplateId;
    
    FAdminSendAccountRecoveryEmailRequest();
};

