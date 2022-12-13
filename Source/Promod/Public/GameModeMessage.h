#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "GameModeMessage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGameModeMessage : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility MessageVisibility;
    
    UGameModeMessage();
    UFUNCTION(BlueprintCallable)
    void UpdateMessage(const FString& NewMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PopupMessage();
    
};

