#include "PromodActionPrompt.h"



void UPromodActionPrompt::ShowHidePrompt(EPromodActionPrompt ActionPrompt) {
}

UPromodActionPrompt::UPromodActionPrompt() : UUserWidget(FObjectInitializer::Get()) {
    this->PromptVisibility = ESlateVisibility::Visible;
    this->PromptShowing = false;
}

