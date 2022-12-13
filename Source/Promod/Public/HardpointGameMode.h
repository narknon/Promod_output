#pragma once
#include "CoreMinimal.h"
#include "PromodTDMGameMode.h"
#include "HardpointGameMode.generated.h"

class AHardpointZone;
class UAkComponent;
class APlayerController;
class UAkAudioEvent;
class AActor;
class AHardpointGameState;
class APromodPlayerState;

UCLASS(Blueprintable, NonTransient)
class AHardpointGameMode : public APromodTDMGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstHardpointWaitTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WinOnTeamEmptyShootout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardpointCycleTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewNextHardpointTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardpointScoreInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardpointScorePerTick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreShootoutTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOvertime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardpointOvertimeRoundTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardpointOvertimeScoreLimit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardpointMarkerTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsingCustomShootout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AHardpointZone*> HardpointZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHardpointZone* CurrentActiveZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHardpointZone* NextZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastRoundEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* DefaultAkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GameStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartGameInstructionsSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FirstPointSpawnedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PointMovingShortlySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PointUnlockedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CapturedByEnemySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CapturedByFriendlySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GameAlmostEndedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopGameAlmostEndedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PointContestedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnemyNearingVictorySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartRoundEndMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopRoundEndMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OvertimeAnnouncerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopSoundTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHardpointGameState* HardpointGameState;
    
public:
    AHardpointGameMode();
    UFUNCTION(BlueprintCallable)
    void ZoneContested(TArray<APromodPlayerState*> ContestingPlayers);
    
    UFUNCTION(BlueprintCallable)
    void ZoneCaptured(TArray<APromodPlayerState*> CapturingPlayers);
    
    UFUNCTION(BlueprintCallable)
    void ResetScoreTick();
    
    UFUNCTION(BlueprintCallable)
    void PlayMatchStartingSound(TArray<APlayerController*> Players);
    
    UFUNCTION(BlueprintCallable)
    void PlayGameStartSoundDelay(TArray<APlayerController*> Players);
    
    UFUNCTION(BlueprintCallable)
    void PlayGameInstructionsSoundDelay(TArray<APlayerController*> Players);
    
    UFUNCTION(BlueprintCallable)
    void PlayerExitedFriendlyZone(APromodPlayerState* ExitingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void PlayerEnteredFriendlyZone(APromodPlayerState* EnteringPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OrderActorsByDistance(AActor* PointOfInterest, TArray<AActor*> inArray, TArray<AActor*>& OutArray);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayStartGameInstructionsSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayPointUnlockedSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayPointMovingShortlySound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayPointContestedSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayMatchStartingSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayGameStartSound();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_PlayFirstPointSpawnedSound();
    
    UFUNCTION(BlueprintCallable)
    bool IsMatchInProgress();
    
    UFUNCTION(BlueprintCallable)
    AHardpointZone* GetNextZone();
    
    UFUNCTION(BlueprintCallable)
    AHardpointZone* GetActiveZone();
    
    UFUNCTION(BlueprintCallable)
    void ActivateNextZone();
    
};

