#pragma once
#include "CoreMinimal.h"
#include "SMStateInstance_Base.h"
#include "SMStateMachineInstance.generated.h"

UCLASS(Blueprintable)
class SMSYSTEM_API USMStateMachineInstance : public USMStateInstance_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForEndState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReuseCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReuseIfNotEndState;
    
    USMStateMachineInstance();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateShutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateMachineCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndStateReached();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEntryStates(TArray<USMStateInstance_Base*>& EntryStates) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllStateInstances(TArray<USMStateInstance_Base*>& StateInstances) const;
    
};

