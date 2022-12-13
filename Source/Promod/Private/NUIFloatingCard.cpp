#include "NUIFloatingCard.h"

bool UNUIFloatingCard::SetDefaultDropZone(const FString& Name) {
    return false;
}

void UNUIFloatingCard::DropCard() {
}

void UNUIFloatingCard::AddDropZone(const FString& Name, FVector2D Position, float Radius) {
}

void UNUIFloatingCard::AddDefaultDropZone(const FString& Name, FVector2D Position, float Radius) {
}

UNUIFloatingCard::UNUIFloatingCard() {
    this->Owner = NULL;
    this->bCardHeld = false;
}

