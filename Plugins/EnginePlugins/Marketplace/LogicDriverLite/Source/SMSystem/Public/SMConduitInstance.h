#pragma once
#include "CoreMinimal.h"
#include "SMStateInstance_Base.h"
#include "SMConduitInstance.generated.h"

UCLASS(Blueprintable)
class SMSYSTEM_API USMConduitInstance : public USMStateInstance_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvalWithTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEvaluate;
    
    USMConduitInstance();
    UFUNCTION(BlueprintCallable)
    void SetCanEvaluate(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConduitShutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConduitInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConduitEntered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanEvaluate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanEnterTransition() const;
    
};

