#include "MapPlayerWidget.h"

UMapPlayerWidget::UMapPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LinkedCharacter = NULL;
    this->CachedMaterial = NULL;
    this->Beacon = NULL;
    this->BeaconScaleX = 0.00f;
    this->BeaconScaleY = 0.00f;
    this->Image = NULL;
    this->PlayerName = NULL;
    this->SpectatingID = NULL;
    this->RotationAngle = 0.00f;
    this->CanvasPanelSlot = NULL;
    this->bInActiveArray = false;
}

