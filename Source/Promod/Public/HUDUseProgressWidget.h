#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDUseProgressWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UHUDUseProgressWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseProgress;
    
    UHUDUseProgressWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UImage* GetProgressImage();
    
    UFUNCTION(BlueprintCallable)
    void ForceSetTexture(UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetProgress(float Progress);
    
};

