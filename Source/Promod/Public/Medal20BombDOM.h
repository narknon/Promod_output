#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal20BombDOM.generated.h"

class ADOMGameMode;

UCLASS(Blueprintable)
class UMedal20BombDOM : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADOMGameMode* DOMGameMode;
    
    UMedal20BombDOM();
};

