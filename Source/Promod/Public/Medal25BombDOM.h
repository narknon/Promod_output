#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal25BombDOM.generated.h"

class ADOMGameMode;

UCLASS(Blueprintable)
class UMedal25BombDOM : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADOMGameMode* DOMGameMode;
    
    UMedal25BombDOM();
};

