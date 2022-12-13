#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SMBlueprintUtils.generated.h"

class UObject;
class USMInstance;

UCLASS(Blueprintable)
class SMSYSTEM_API USMBlueprintUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USMBlueprintUtils();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USMInstance* CreateStateMachineInstanceFromTemplate(TSubclassOf<USMInstance> StateMachineClass, UObject* Context, USMInstance* Template);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USMInstance* CreateStateMachineInstance(TSubclassOf<USMInstance> StateMachineClass, UObject* Context);
    
};

