#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalWaitForThisToBlowOver.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalWaitForThisToBlowOver : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalWaitForThisToBlowOver();
};

