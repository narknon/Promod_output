#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SMStateInstance_Base.h"
#include "SMStateInstance.generated.h"

class USMStateInstance;

UCLASS(Blueprintable)
class SMSYSTEM_API USMStateInstance : public USMStateInstance_Base {
    GENERATED_BODY()
public:
    USMStateInstance();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateShutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStateStackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateInstance_Base* GetStateInStackByClass(TSubclassOf<USMStateInstance> StateClass, bool bIncludeChildren) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateInstance_Base* GetStateInStack(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USMStateInstance_Base* GetStackOwnerInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllStateStackInstances(TArray<USMStateInstance_Base*>& StateStackInstances) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllStatesInStackOfClass(TSubclassOf<USMStateInstance> StateClass, TArray<USMStateInstance_Base*>& StateStackInstances, bool bIncludeChildren) const;
    
};

