#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalHQCaptured.generated.h"

class AHQGameMode;

UCLASS(Blueprintable)
class UMedalHQCaptured : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHQGameMode* HQGameMode;
    
    UMedalHQCaptured();
};

