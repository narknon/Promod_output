#include "NUIInputKeySelector.h"

void UNUIInputKeySelector::SetTextBlockVisibility(const ESlateVisibility InVisibility) {
}

void UNUIInputKeySelector::SetSelectedKey(const FInputChord& InSelectedKey) {
}

void UNUIInputKeySelector::SetNoKeySpecifiedText(FText InNoKeySpecifiedText) {
}

void UNUIInputKeySelector::SetKeySelectionText(FText InKeySelectionText) {
}

void UNUIInputKeySelector::SetEscapeKeys(const TArray<FKey>& InKeys) {
}

void UNUIInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys) {
}

void UNUIInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys) {
}

bool UNUIInputKeySelector::GetIsSelectingKey() const {
    return false;
}

UNUIInputKeySelector::UNUIInputKeySelector() {
    this->KeySelectionText = FText::FromString(TEXT("..."));
    this->NoKeySpecifiedText = FText::FromString(TEXT("Empty"));
    this->bAllowModifierKeys = true;
    this->bAllowGamepadKeys = false;
    this->EscapeKeys.AddDefaulted(1);
}

