#include "PromodInteractionEvent.h"

class UImage;
class UTexture2D;

void UPromodInteractionEvent::SetProgress(float Progress) {
}

void UPromodInteractionEvent::SetInteractTexture(UTexture2D* Texture) {
}

UImage* UPromodInteractionEvent::GetProgressEventImage_Implementation() {
    return NULL;
}

UPromodInteractionEvent::UPromodInteractionEvent() : UUserWidget(FObjectInitializer::Get()) {
}

