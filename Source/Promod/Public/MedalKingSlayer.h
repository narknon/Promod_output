#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "MedalKingSlayer.generated.h"

class AFFAGameMode;

UCLASS(Blueprintable)
class UMedalKingSlayer : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFFAGameMode* FFAGameMode;
    
    UMedalKingSlayer();
};

