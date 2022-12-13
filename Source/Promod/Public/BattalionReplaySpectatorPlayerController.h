#pragma once
#include "CoreMinimal.h"
#include "BattalionPlayerControllerGMBase.h"
#include "Camera/PlayerCameraManager.h"
#include "BattalionReplaySpectatorPlayerController.generated.h"

class ABattalionSpectatorPawn;
class ABattalionCharacter;
class AReplayDataActor;

UCLASS(Blueprintable)
class ABattalionReplaySpectatorPlayerController : public ABattalionPlayerControllerGMBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionSpectatorPawn* SpecPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingReplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* CurrentSpecPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AReplayDataActor* ReplayDataActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams VTTransitionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUIHidden;
    
    ABattalionReplaySpectatorPlayerController();
    UFUNCTION(BlueprintCallable)
    void ToggleReplayUI();
    
};

