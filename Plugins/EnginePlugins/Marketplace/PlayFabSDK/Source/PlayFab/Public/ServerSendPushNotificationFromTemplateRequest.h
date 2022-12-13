#pragma once
#include "CoreMinimal.h"
#include "PlayFabRequestCommon.h"
#include "ServerSendPushNotificationFromTemplateRequest.generated.h"

USTRUCT(BlueprintType)
struct PLAYFAB_API FServerSendPushNotificationFromTemplateRequest : public FPlayFabRequestCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PushNotificationTemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Recipient;
    
    FServerSendPushNotificationFromTemplateRequest();
};

