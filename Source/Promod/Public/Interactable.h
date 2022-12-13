#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EInteractionType.h"
#include "Interactable.generated.h"

class APromodCharacter;
class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UInteractable : public UInterface {
    GENERATED_BODY()
};

class IInteractable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStopUse(APromodCharacter* InteractingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartUse(APromodCharacter* InteractingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InteractionCompleted(APromodCharacter* InteractingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetUseContext(APromodCharacter* InteractingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetSubtitleText(APromodCharacter* InteractingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EInteractionType GetInteractionType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetInteractionTime(APromodCharacter* InteractingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckCanBeInteractedWith(APromodCharacter* InteractingCharacter, AActor* Interactable);
    
};

