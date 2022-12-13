#include "MapSmokeWidget.h"




UMapSmokeWidget::UMapSmokeWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LinkedSmoke = NULL;
    this->CachedMaterial = NULL;
    this->Beacon = NULL;
    this->BeaconScaleX = 0.00f;
    this->BeaconScaleY = 0.00f;
    this->Zoom = 0.00f;
    this->MarkerVerticalBox = NULL;
    this->SmokeImage = NULL;
    this->SmokeImage2 = NULL;
    this->SmokeImage3 = NULL;
    this->RotationAngle = 0.00f;
    this->CanvasPanelSlot = NULL;
    this->ProgressMaterial = NULL;
    this->bInActiveArray = false;
}

