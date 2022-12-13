#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PromodInteractionEvent.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UPromodInteractionEvent : public UUserWidget {
    GENERATED_BODY()
public:
    UPromodInteractionEvent();
    UFUNCTION(BlueprintCallable)
    void SetProgress(float Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetInteractTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UImage* GetProgressEventImage();
    
};

