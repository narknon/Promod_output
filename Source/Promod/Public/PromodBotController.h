#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "PromodBotController.generated.h"

class UPromodBotSMInstance;

UCLASS(Blueprintable)
class PROMOD_API APromodBotController : public AAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodBotSMInstance* StateMachineInstance;
    
public:
    APromodBotController();
    UFUNCTION(BlueprintCallable)
    void StopBehaviour();
    
    UFUNCTION(BlueprintCallable)
    void StartBehaviour();
    
    UFUNCTION(BlueprintCallable)
    UPromodBotSMInstance* GetStateMachineInstance();
    
};

