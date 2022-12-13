#pragma once
#include "CoreMinimal.h"
#include "FFAGameMode.h"
#include "OneInTheChamberGamemode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AOneInTheChamberGamemode : public AFFAGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialNumLives;
    
public:
    AOneInTheChamberGamemode();
};

