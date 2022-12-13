#include "HUDUseProgressWidget.h"

class UTexture2D;
class UImage;

UImage* UHUDUseProgressWidget::GetProgressImage_Implementation() {
    return NULL;
}

void UHUDUseProgressWidget::ForceSetTexture(UTexture2D* Texture) {
}

void UHUDUseProgressWidget::ForceSetProgress(float Progress) {
}

UHUDUseProgressWidget::UHUDUseProgressWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->UseProgress = 0.00f;
}

