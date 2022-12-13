#pragma once
#include "CoreMinimal.h"
#include "TextImage.h"
#include "Blueprint/UserWidget.h"
#include "BindingImageText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBindingImageText : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextImage> States;
    
    UBindingImageText();
};

