#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal30BombDOM.generated.h"

class ADOMGameMode;

UCLASS(Blueprintable)
class UMedal30BombDOM : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADOMGameMode* DOMGameMode;
    
    UMedal30BombDOM();
};

