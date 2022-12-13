#include "HUDUseProgressWidget.h"

class UImage;
class UTexture2D;

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

