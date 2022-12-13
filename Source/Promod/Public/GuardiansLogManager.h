#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELogSubsystem.h"
#include "GuardiansLogManager.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Game)
class UGuardiansLogManager : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGuardiansLogManager();
    UFUNCTION(BlueprintCallable)
    void SetLoggingEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void LogOutput(const FString& LogMessage, ELogSubsystem Subsystem, AActor* OwningActor);
    
};

