#pragma once
#include "CoreMinimal.h"
#include "EOnFireAwardType.h"
#include "UObject/Object.h"
#include "OnAwardRegisteredDelegate.h"
#include "OnScalingAwardStartDelegate.h"
#include "OnScalingAwardEndDelegate.h"
#include "OnAnyKillDelegate.h"
#include "OnScalingAwardValueDelegate.h"
#include "ResetAwardsDelegateDelegate.h"
#include "AwardManager.generated.h"

class UOnFireAwardsDataAsset;
class UAwardManager;
class APlayerController;

UCLASS(Blueprintable)
class UAwardManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAwardRegistered OnAwardRegisteredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScalingAwardStart OnScalingAwardStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScalingAwardEnd OnScalingAwardEndDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScalingAwardValue OnScalingAwardValueDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyKill OnAnyKillDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResetAwardsDelegate OnResetDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOnFireAwardsDataAsset* OnFireAwardsDataAsset;
    
public:
    UAwardManager();
    UFUNCTION(BlueprintCallable)
    void ResetAwards();
    
    UFUNCTION(BlueprintCallable)
    void RegisterScalingValue(EOnFireAwardType AwardType, float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScalingAwardStart(EOnFireAwardType AwardType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScalingAwardEnd(EOnFireAwardType AwardType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInstantAward(EOnFireAwardType AwardType);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyKill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UAwardManager* GetAwardManagerFromWorldContext(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UAwardManager* GetAwardManagerFromPlayerController(APlayerController* PlayerController);
    
};

