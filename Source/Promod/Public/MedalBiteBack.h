#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalBiteBack.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalBiteBack : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalBiteBack();
};

