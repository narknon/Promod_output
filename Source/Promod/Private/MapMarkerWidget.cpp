#include "MapMarkerWidget.h"



UMapMarkerWidget::UMapMarkerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LinkedWorldMarker = NULL;
    this->CachedMaterial = NULL;
    this->Beacon = NULL;
    this->BeaconScaleX = 0.00f;
    this->BeaconScaleY = 0.00f;
    this->Zoom = 0.00f;
    this->MarkerVerticalBox = NULL;
    this->MarkerImage = NULL;
    this->MarkerBackground = NULL;
    this->RotationAngle = 0.00f;
    this->CanvasPanelSlot = NULL;
    this->ProgressMaterial = NULL;
    this->AllowColourChanges = true;
    this->bInActiveArray = false;
}

