#include "NUIGenericPopup.h"

class APromodPlayerController;
class UAkAudioEvent;

void UNUIGenericPopup::SaveAccepted(bool accepted) {
}

void UNUIGenericPopup::PlaySoundOnPC(APromodPlayerController* PC, UAkAudioEvent* Sound) {
}

UNUIGenericPopup::UNUIGenericPopup() : UUserWidget(FObjectInitializer::Get()) {
    this->IsAccepted = false;
}

