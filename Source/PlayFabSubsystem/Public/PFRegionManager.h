#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CalculatedRegionLatenciesDelegateDelegate.h"
#include "RegionLatency.h"
#include "PFRegionManager.generated.h"

class UPlayFabSubsystem;

UCLASS(Blueprintable, Within=PlayFabSubsystem)
class PLAYFABSUBSYSTEM_API UPFRegionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCalculatedRegionLatenciesDelegate OnCalculatedRegionLatencies;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayFabSubsystem* PlayFabSubsystem;
    
public:
    UPFRegionManager();
    UFUNCTION(BlueprintCallable)
    void StartTestingLatencies();
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnabled(bool IsEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoginCompleted(int32 ControllerId, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsTesting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReady() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasValidAndAcceptableLatencies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRegionLatency> GetRegionLatencies() const;
    
    UFUNCTION(BlueprintCallable)
    FRegionLatency GetBestRegion();
    
};

