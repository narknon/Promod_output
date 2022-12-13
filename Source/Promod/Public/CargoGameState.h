#pragma once
#include "CoreMinimal.h"
#include "PromodTDMGameState.h"
#include "OnCargoReplicatedDelegate.h"
#include "CargoGameState.generated.h"

class ATugOfWarMonorail;
class ACargoSafeZone;
class AMonorail;

UCLASS(Blueprintable)
class ACargoGameState : public APromodTDMGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 FirstTeamCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 FirstTeamPip;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CargoActor, meta=(AllowPrivateAccess=true))
    AMonorail* CargoActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ATugOfWarMonorail* TugOfWarActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<ACargoSafeZone*> SafeZones;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCargoReplicated OnCargoReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOvertime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMaxGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDoneFirstOvertimeCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDoneFirstShootoutOvertimeCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bUseTugOfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CargoVictoryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TugOfWarIdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TugOfWarTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TugOfWarTime_SuddenDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInSuddenDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TugOfWarSuddenDeathWinPercentage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bTickGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bTickRechargeGracePeriod;
    
public:
    ACargoGameState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TickRechargeGracePeriod(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TickGracePeriod(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartGracePeriodTimer();
    
    UFUNCTION(BlueprintCallable)
    void SetTickRechargeGracePeriod(const bool bInTickRechargeGracePeriod);
    
    UFUNCTION(BlueprintCallable)
    void SetTickGracePeriod(const bool bInTickGracePeriod);
    
    UFUNCTION(BlueprintCallable)
    void RechargeGracePeriodTimer(const bool bIgnoreMinimum);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CargoActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGracePeriodRecharging();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGracePeriodDecreasing();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstTeamCheckpointPip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFirstTeamCheckpoint();
    
};

