#pragma once
#include "CoreMinimal.h"
#include "TUTGameMode.h"
#include "JumperGameMode.generated.h"

class AJumperCourse;
class UAkAudioEvent;
class ABattalionPlayerState;

UCLASS(Blueprintable, NonTransient)
class PROMOD_API AJumperGameMode : public ATUTGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJumperCourse* CurrentCourse;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SplitTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PersonalBestSplitTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RaceStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RaceCompletedEvent;
    
public:
    AJumperGameMode();
    UFUNCTION(BlueprintCallable)
    void StopSplitTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopCourseTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkipCheckpoint();
    
    UFUNCTION(BlueprintCallable)
    void ResetSplitTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetCourseTimer();
    
    UFUNCTION(BlueprintCallable)
    void RecordSplit(bool IsFirstCheckpoint);
    
    UFUNCTION(BlueprintCallable)
    void InitSplitTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InitCourseTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetSplitTimes() const;
    
    UFUNCTION(BlueprintCallable)
    UAkAudioEvent* GetSoundFromStars(int32 Stars);
    
    UFUNCTION(BlueprintCallable)
    float GetCourseTimeSeconds();
    
    UFUNCTION(BlueprintCallable)
    void CourseCompleted(ABattalionPlayerState* Player, int32 Respawns);
    
};

