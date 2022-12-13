#pragma once
#include "CoreMinimal.h"
#include "PromodPlayerController.h"
#include "BlitzPlayerController.generated.h"

UCLASS(Blueprintable)
class ABlitzPlayerController : public APromodPlayerController {
    GENERATED_BODY()
public:
    ABlitzPlayerController();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateGameOverviewScore(int32 TeamIndex, int32 NewScore);
    
};

