#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "JumperCourse.generated.h"

class USplineComponent;
class APromodCharacter;
class UStaticMesh;
class UAkAudioEvent;

UCLASS(Blueprintable)
class PROMOD_API AJumperCourse : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Gate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibleCheckpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRotationDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CheckpointCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TickTockMusicPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TickTockMusicStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RaceCompletedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RaceCompletedEvent1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RaceCompletedEvent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RaceCompletedEvent3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RaceCompletedEventPro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfStopsFromEndTickTock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MapNamesToOverrideGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CheckpointRotations;
    
    AJumperCourse();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHitCheckpointAppearance(int32 CheckpointIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnAllCheckpoints();
    
    UFUNCTION(BlueprintCallable)
    void SetCheckpoint(APromodCharacter* PromodChar, int32 CheckpointIdx);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayer(APromodCharacter* CharacterToReset);
    
    UFUNCTION(BlueprintCallable)
    void RefreshData();
    
    UFUNCTION(BlueprintCallable)
    void RefreshCourse();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetCheckpointSize(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool CanPassCheckpoint(int32 CheckpointIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CourseCompleted();
    
};

