#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalLoneSurvivor.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalLoneSurvivor : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalLoneSurvivor();
};

