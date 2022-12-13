#include "HUDGrenadeIcon.h"

void UHUDGrenadeIcon::SetLinkedCharacter() {
}

UHUDGrenadeIcon::UHUDGrenadeIcon() : UUserWidget(FObjectInitializer::Get()) {
    this->Marker = NULL;
    this->RotationAngle = 0.00f;
    this->Beacon = NULL;
    this->Scale = 0.00f;
}

