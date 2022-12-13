#include "GrenadeMarker.h"

UGrenadeMarker::UGrenadeMarker() : UUserWidget(FObjectInitializer::Get()) {
    this->LinkedCharacter = NULL;
    this->BeaconScaleX = 0.00f;
    this->BeaconScaleY = 0.00f;
    this->Angle = 0.00f;
    this->Image = NULL;
    this->NadeImage = NULL;
    this->RotationAngle = 0.00f;
    this->CanvasPanelSlot = NULL;
}

