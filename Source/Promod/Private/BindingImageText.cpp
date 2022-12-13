#include "BindingImageText.h"

UBindingImageText::UBindingImageText() : UUserWidget(FObjectInitializer::Get()) {
    this->MaxStates = 1;
    this->CurrentState = 0;
    this->States.AddDefaulted(1);
}

