#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalArtilleryStrike.generated.h"

class ADOMGameMode;

UCLASS(Blueprintable)
class UMedalArtilleryStrike : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADOMGameMode* DOMGameMode;
    
    UMedalArtilleryStrike();
};

