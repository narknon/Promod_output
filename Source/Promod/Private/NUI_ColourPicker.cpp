#include "NUI_ColourPicker.h"

void UNUI_ColourPicker::SetColour(FLinearColor NewColour, bool SkipAnimation) {
}

FLinearColor UNUI_ColourPicker::GetColour() {
    return FLinearColor{};
}

UNUI_ColourPicker::UNUI_ColourPicker() : UUserWidget(FObjectInitializer::Get()) {
    this->bSkipAnimationOnConstruction = false;
}

