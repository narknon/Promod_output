#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalBlowout.generated.h"

class AWartideGameMode;

UCLASS(Blueprintable)
class UMedalBlowout : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UMedalBlowout();
};

