#include "MapBombSiteWidget.h"

UMapBombSiteWidget::UMapBombSiteWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LinkedSite = NULL;
    this->CachedMaterial = NULL;
    this->Beacon = NULL;
    this->BeaconScaleX = 0.00f;
    this->BeaconScaleY = 0.00f;
    this->ImageBackground = NULL;
    this->ImageSiteText = NULL;
    this->RotationAngle = 0.00f;
    this->CanvasPanelSlot = NULL;
    this->bInActiveArray = false;
}

