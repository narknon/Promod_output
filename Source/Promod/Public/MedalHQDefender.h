#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalHQDefender.generated.h"

class AHQGameMode;

UCLASS(Blueprintable)
class UMedalHQDefender : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHQGameMode* HQGameMode;
    
    UMedalHQDefender();
};

