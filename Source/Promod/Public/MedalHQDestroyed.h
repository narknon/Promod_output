#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalHQDestroyed.generated.h"

class AHQGameMode;

UCLASS(Blueprintable)
class UMedalHQDestroyed : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHQGameMode* HQGameMode;
    
    UMedalHQDestroyed();
};

