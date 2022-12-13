#pragma once
#include "CoreMinimal.h"
#include "ThirdPersonAnimInstance.h"
#include "BotThirdPersonAnimInstance.generated.h"

class APromodBot;

UCLASS(Blueprintable, NonTransient)
class UBotThirdPersonAnimInstance : public UThirdPersonAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APromodBot* BotCharacter;
    
    UBotThirdPersonAnimInstance();
};

