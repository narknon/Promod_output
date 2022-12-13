#include "DebugReticle.h"

UDebugReticle::UDebugReticle() : UUserWidget(FObjectInitializer::Get()) {
    this->FiberDistance = 0.00f;
    this->FiberLength = 0.00f;
    this->DotVisibility = ESlateVisibility::Visible;
    this->FiberVisibility = ESlateVisibility::Visible;
}

