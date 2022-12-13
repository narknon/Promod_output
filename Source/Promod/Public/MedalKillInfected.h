#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalKillInfected.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalKillInfected : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalKillInfected();
};

