#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BattalionAudio.generated.h"

class UAkAudioEvent;
class UWorld;
class UAkComponent;
class AActor;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class UBattalionAudio : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> MusicPlayEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> MusicStopEvent;
    
    UBattalionAudio();
    UFUNCTION(BlueprintCallable)
    static void StopGlobalEvent();
    
    UFUNCTION(BlueprintCallable)
    static void SetRTPCOnAKComp(UAkComponent* akComp, const FString& rtpcName, float Val, int32 interpolTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetRTPCGlobalEvent(const FString& rtpcName, float Val, int32 interpolTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetMusicState(FName MusicState);
    
    UFUNCTION(BlueprintCallable)
    static bool PostGlobalEvent(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable)
    static void PostEventOnLocation(UAkAudioEvent* AkEvent, FVector Location, UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool PostEventOnComp(UAkComponent* Component, UAkAudioEvent* AkEvent, bool bStopWhenActorDestroyed);
    
    UFUNCTION(BlueprintCallable)
    static bool PostEventOnActor(AActor* Actor, UAkAudioEvent* AkEvent, bool bStopWhenActorDestroyed);
    
};

