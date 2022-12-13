#pragma once
#include "CoreMinimal.h"
#include "BombGameMode.h"
#include "WartideGameMode.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, NonTransient)
class AWartideGameMode : public ABombGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WartideStartAlliesEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WartideStartAxisEvent;
    
    AWartideGameMode();
};

