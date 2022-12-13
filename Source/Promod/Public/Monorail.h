#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECrawlerState.h"
#include "OnCheckpointReachedDelegate.h"
#include "OnCheckpointPassedDelegate.h"
#include "ECargoContentionState.h"
#include "Monorail.generated.h"

class ACargoGameMode;
class AMonorailPath;
class AMonorailCarriage;
class ACargoGameState;

UCLASS(Blueprintable)
class AMonorail : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentCheckpointSplineKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentTotalMonorailMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCargoInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCargoDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentDisableTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentEnableTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentInitializationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FirstTeamScore;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepSelectedPath, meta=(AllowPrivateAccess=true))
    AMonorailPath* SelectedPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ECrawlerState CrawlerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AMonorailCarriage* CargoMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilReverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DecayTimer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckpointReached OnCheckpointReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckpointPassed OnCheckpointPassed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACargoGameMode* CargoGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACargoGameState* CargoGameState;
    
public:
    AMonorail();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRepSelectedPath();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulti_Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeamPresent(const int32 TeamNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpeedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLocalPlayerInstruction() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFirstTeamScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnableProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDisableProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECargoContentionState GetContentionState() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetCheckpointsAsProgressValues();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DefendersArePresent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AttackersArePresent() const;
    
};

