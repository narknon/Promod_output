#pragma once
#include "CoreMinimal.h"
#include "MedalBase.h"
#include "Medal20BombWartide.generated.h"

class AWartideGameMode;

UCLASS(Blueprintable)
class UMedal20BombWartide : public UMedalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWartideGameMode* WartideGameMode;
    
    UMedal20BombWartide();
};

