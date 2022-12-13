#include "FriendlyTemplate.h"

class ABattalionCharacter;

void UFriendlyTemplate::SetLinkedCharacter(ABattalionCharacter* Char) {
}

UFriendlyTemplate::UFriendlyTemplate() : UUserWidget(FObjectInitializer::Get()) {
    this->LinkedCharacter = NULL;
    this->CachedMaterial = NULL;
    this->CachedMaterialBombCarrier = NULL;
    this->Beacon = NULL;
    this->BeaconScaleX = 0.00f;
    this->BeaconScaleY = 0.00f;
    this->Image = NULL;
    this->SpecIDImage = NULL;
    this->BombImage = NULL;
    this->RotationAngle = 0.00f;
    this->Zoom = 0.00f;
    this->CanvasPanelSlot = NULL;
    this->MiniMapScale = 0.00f;
    this->MiniMapZoom = 0.00f;
    this->RotateMap = false;
    this->FiredThisFrame = false;
    this->SingleShot = false;
    this->bInActiveArray = false;
    this->FadeTimer = 0.00f;
}

