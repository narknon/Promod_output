#pragma once
#include "CoreMinimal.h"
#include "JumperCourse.h"
#include "KillRunCheckpointData.h"
#include "Engine/EngineTypes.h"
#include "KillRunCourse.generated.h"

class AActor;
class UAkAudioEvent;
class APromodBot;
class AController;

UCLASS(Blueprintable)
class PROMOD_API AKillRunCourse : public AJumperCourse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKillRunCheckpointData> CheckpointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CollateralSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedLvl1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedLvl2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedLvl3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedLvl4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* KillConfirmedLvl5;
    
    AKillRunCourse();
    UFUNCTION(BlueprintCallable)
    void OnBotKilled(APromodBot* DeadBot, float KillingDamage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    UAkAudioEvent* GetKCLvl(int32 botsRemaingVal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CourseCompletedBP();
    
};

