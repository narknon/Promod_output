#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalHQAttacker.generated.h"

class AHQGameMode;

UCLASS(Blueprintable)
class UMedalHQAttacker : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHQGameMode* HQGameMode;
    
    UMedalHQAttacker();
};

