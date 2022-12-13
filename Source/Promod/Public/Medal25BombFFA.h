#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal25BombFFA.generated.h"

class AFFAGameMode;

UCLASS(Blueprintable)
class UMedal25BombFFA : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFFAGameMode* FFAGameMode;
    
    UMedal25BombFFA();
};

