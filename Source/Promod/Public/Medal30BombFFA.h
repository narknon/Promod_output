#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal30BombFFA.generated.h"

class AFFAGameMode;

UCLASS(Blueprintable)
class UMedal30BombFFA : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFFAGameMode* FFAGameMode;
    
    UMedal30BombFFA();
};

