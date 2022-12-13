#include "MapBombWidget.h"

UMapBombWidget::UMapBombWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LinkedCharacter = NULL;
    this->LinkedBomb = NULL;
    this->CachedMaterial = NULL;
    this->Beacon = NULL;
    this->BeaconScaleX = 0.00f;
    this->BeaconScaleY = 0.00f;
    this->Image = NULL;
    this->RotationAngle = 0.00f;
    this->CanvasPanelSlot = NULL;
    this->bInActiveArray = false;
}

