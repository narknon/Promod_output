#pragma once
#include "CoreMinimal.h"
#include "NUIScreen.h"
#include "Components/InputComponent.h"
#include "NUICredits.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNUICredits : public UNUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollStartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollEndOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollAutoScrollSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDelayTilAutoScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollAcceleration;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EControllerAnalogStick::Type> ControlAnalogStick;
    
    UNUICredits();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOffset(float NewOffset);
    
};

