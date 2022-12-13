#include "NUIButton.h"

void UNUIButton::UnhoveredHandler() {
}

void UNUIButton::SetStyle(ENUIButtonStyle Style, bool bForce) {
}

void UNUIButton::ReleasedHandler() {
}

void UNUIButton::PressedHandler() {
}

void UNUIButton::HoveredHandler() {
}

void UNUIButton::ClickedHandler() {
}

UNUIButton::UNUIButton() : UUserWidget(FObjectInitializer::Get()) {
    this->Button = NULL;
    this->ButtonText = NULL;
    this->ButtonBackground = NULL;
    this->ActiveStyle = ENUIButtonStyle::None;
    this->bAllowSFX = true;
}

