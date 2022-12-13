#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal20BombFFA.generated.h"

class AFFAGameMode;

UCLASS(Blueprintable)
class UMedal20BombFFA : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFFAGameMode* FFAGameMode;
    
    UMedal20BombFFA();
};

