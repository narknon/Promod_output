#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GamepadDetection.generated.h"

UCLASS(Blueprintable)
class UGamepadDetection : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGamepadDetection();
    UFUNCTION(BlueprintCallable)
    static bool IsGamePadConnected();
    
};

