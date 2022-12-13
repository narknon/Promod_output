#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalDefender.generated.h"

class ADOMGameMode;

UCLASS(Blueprintable)
class UMedalDefender : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADOMGameMode* DOMGameMode;
    
    UMedalDefender();
};

