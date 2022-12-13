#include "NUIInteract.h"

class APlayerState;
class ABattalionPlayerControllerGMBase;
class UTexture2D;
class UImage;


void UNUIInteract::ShowHudElement(ABattalionPlayerControllerGMBase* Controller) {
}

void UNUIInteract::SetProgress(float Progress) {
}

void UNUIInteract::SetInteractTexture(UTexture2D* Texture) {
}

void UNUIInteract::OnSpectatingCharacterChanged(APlayerState* PC) {
}

void UNUIInteract::HideHudElement(ABattalionPlayerControllerGMBase* Controller) {
}

UImage* UNUIInteract::GetProgressImage_Implementation() {
    return NULL;
}

UNUIInteract::UNUIInteract() {
    this->SpectatingPlayerState = NULL;
}

