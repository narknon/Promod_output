#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BattalionPlayerController_Menu.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class ABattalionPlayerController_Menu : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopContinuousSoundsEvent;
    
    ABattalionPlayerController_Menu();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SafeStopAllContinuousAudio();
    
};

