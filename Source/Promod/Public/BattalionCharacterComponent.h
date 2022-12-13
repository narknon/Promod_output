#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BattalionCharacterComponent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBattalionCharacterComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PauseMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResumeMusicEvent;
    
public:
    UBattalionCharacterComponent();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopMusic();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ResumeMusic();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PauseMusic();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_BeginMusic(const FName& MusicState);
    
};

