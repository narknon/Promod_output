#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalIAmLegend.generated.h"

class AInfectionGameMode;

UCLASS(Blueprintable)
class UMedalIAmLegend : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInfectionGameMode* INFGameMode;
    
    UMedalIAmLegend();
};

