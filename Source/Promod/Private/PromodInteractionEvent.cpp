#include "PromodInteractionEvent.h"

class UTexture2D;
class UImage;

void UPromodInteractionEvent::SetProgress(float Progress) {
}

void UPromodInteractionEvent::SetInteractTexture(UTexture2D* Texture) {
}

UImage* UPromodInteractionEvent::GetProgressEventImage_Implementation() {
    return NULL;
}

UPromodInteractionEvent::UPromodInteractionEvent() : UUserWidget(FObjectInitializer::Get()) {
}

