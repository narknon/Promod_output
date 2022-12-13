#include "Beacon.h"

ABeacon::ABeacon() {
    this->ScaleX = 0.00f;
    this->ScaleY = 0.00f;
    this->MapTexture = NULL;
    this->MapBackgroundTexture = NULL;
    this->FriendlyTexture = NULL;
    this->EnemyTexture = NULL;
    this->SpectatorTexture = NULL;
    this->MapBoundsPlane = NULL;
}

