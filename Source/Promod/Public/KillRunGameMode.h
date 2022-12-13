#pragma once
#include "CoreMinimal.h"
#include "TUTGameMode.h"
#include "KillRunGameMode.generated.h"

class AKillRunCourse;
class UAkAudioEvent;

UCLASS(Blueprintable, NonTransient)
class PROMOD_API AKillRunGameMode : public ATUTGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKillRunCourse* CurrentCourse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RaceStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RaceCompletedEvent;
    
public:
    AKillRunGameMode();
    UFUNCTION(BlueprintCallable, Exec)
    void StopCourseTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetCourseTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InitCourseTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetSplitTimes() const;
    
    UFUNCTION(BlueprintCallable)
    UAkAudioEvent* GetSoundFromStars(int32 Stars);
    
    UFUNCTION(BlueprintCallable)
    float GetCourseTimeSeconds();
    
};

