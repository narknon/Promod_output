#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "Fonts/SlateFontInfo.h"
#include "Framework/Commands/InputChord.h"
#include "Styling/SlateTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "NUIInputKeySelector.generated.h"

UCLASS(Blueprintable)
class UNUIInputKeySelector : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeySelected, FInputChord, SelectedKey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIsSelectingKeyChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputChord SelectedKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText KeySelectionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoKeySpecifiedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowModifierKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowGamepadKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> EscapeKeys;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeySelected OnKeySelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsSelectingKeyChanged OnIsSelectingKeyChanged;
    
    UNUIInputKeySelector();
    UFUNCTION(BlueprintCallable)
    void SetTextBlockVisibility(const ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedKey(const FInputChord& InSelectedKey);
    
    UFUNCTION(BlueprintCallable)
    void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);
    
    UFUNCTION(BlueprintCallable)
    void SetKeySelectionText(FText InKeySelectionText);
    
    UFUNCTION(BlueprintCallable)
    void SetEscapeKeys(const TArray<FKey>& InKeys);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowModifierKeys(bool bInAllowModifierKeys);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSelectingKey() const;
    
};

