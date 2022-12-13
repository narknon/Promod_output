#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalWorldWarZ.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalWorldWarZ : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalWorldWarZ();
};

