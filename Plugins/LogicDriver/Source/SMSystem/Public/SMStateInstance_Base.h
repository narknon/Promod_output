#pragma once
#include "CoreMinimal.h"
#include "SMNodeInstance.h"
#include "OnStateBeginSignatureDelegate.h"
#include "OnStateEndSignatureDelegate.h"
#include "OnStateUpdateSignatureDelegate.h"
#include "SMStateInfo.h"
#include "SMStateInstance_Base.generated.h"

class USMStateInstance_Base;
class USMTransitionInstance;

UCLASS(Abstract, Blueprintable)
class SMSYSTEM_API USMStateInstance_Base : public USMNodeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvalGraphsOnStart;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvalGraphsOnUpdate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvalGraphsOnEnd;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvalGraphsOnInitialize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvalGraphsOnRootStateMachineStart;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvalGraphsOnRootStateMachineStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableTickTransitionEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultToParallel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowParallelReentry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStayActiveOnStateChange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvalTransitionsOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludeFromAnyState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateBeginSignature OnStateBeginEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateUpdateSignature OnStateUpdateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateEndSignature OnStateEndEvent;
    
    USMStateInstance_Base();
    UFUNCTION(BlueprintCallable)
    bool SwitchToLinkedState(USMStateInstance_Base* NextStateInstance, bool bRequireTransitionToPass);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateUpdate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRootStateMachineStop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRootStateMachineStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMTransitionInstance* GetTransitionToTake() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMTransitionInstance* GetTransitionByIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetStateInfo(FSMStateInfo& State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOutgoingTransitions(TArray<USMTransitionInstance*>& Transitions, bool bExcludeAlwaysFalse) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateInstance_Base* GetNextStateByTransitionIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIncomingTransitions(TArray<USMTransitionInstance*>& Transitions, bool bExcludeAlwaysFalse) const;
    
    UFUNCTION(BlueprintCallable)
    void EvaluateTransitions();
    
};

