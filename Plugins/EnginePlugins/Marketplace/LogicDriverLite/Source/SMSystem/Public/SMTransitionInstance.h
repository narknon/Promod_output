#pragma once
#include "CoreMinimal.h"
#include "SMNodeInstance.h"
#include "OnTransitionEnteredSignatureDelegate.h"
#include "SMTransitionInfo.h"
#include "SMTransitionInstance.generated.h"

class USMStateInstance_Base;

UCLASS(Blueprintable)
class SMSYSTEM_API USMTransitionInstance : public USMNodeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PriorityOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunParallel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvalIfNextStateActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEvaluate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEvaluateFromEvent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEvalWithStartState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransitionEnteredSignature OnTransitionEnteredEvent;
    
    USMTransitionInstance();
    UFUNCTION(BlueprintCallable)
    void SetCanEvaluate(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTransitionShutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTransitionInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTransitionEntered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTransitionInfo(FSMTransitionInfo& Transition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateInstance_Base* GetPreviousStateInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateInstance_Base* GetNextStateInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanEvaluate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanEnterTransition() const;
    
};

