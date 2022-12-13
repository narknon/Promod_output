#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BattalionGrenade.h"
#include "BattalionSmokeGrenade.generated.h"

class AActor;
class UAkComponent;
class UAkAudioEvent;
class UPrimitiveComponent;
class UBoxComponent;
class UPostProcessComponent;

UCLASS(Blueprintable)
class ABattalionSmokeGrenade : public ABattalionGrenade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SmokeLoopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SmokeLoopEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmokeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmokeSoundLengthAddition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SmokePostProcessBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* SmokeBoxBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* SmokePostProcess;
    
    ABattalionSmokeGrenade();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnFX();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void EndOverlapSmoke(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void BeginOverlapSmoke(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

