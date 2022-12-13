#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalLastStand.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalLastStand : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalLastStand();
};

