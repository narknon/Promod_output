#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalHQSecured.generated.h"

class AHQGameMode;

UCLASS(Blueprintable)
class UMedalHQSecured : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHQGameMode* HQGameMode;
    
    UMedalHQSecured();
};

