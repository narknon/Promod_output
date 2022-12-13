#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalAnotherNotch.generated.h"

class AFFAGameMode;

UCLASS(Blueprintable)
class UMedalAnotherNotch : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFFAGameMode* FFAGameMode;
    
    UMedalAnotherNotch();
};

