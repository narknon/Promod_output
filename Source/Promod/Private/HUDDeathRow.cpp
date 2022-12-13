#include "HUDDeathRow.h"

void UHUDDeathRow::SetRow(FDeathMessage NewDeathMessage) {
}

UHUDDeathRow::UHUDDeathRow() : UUserWidget(FObjectInitializer::Get()) {
    this->Killer = NULL;
    this->Killed = NULL;
    this->GunImageMat = NULL;
    this->WallbangImageMat = NULL;
    this->HeadshotImageMat = NULL;
    this->FallDamageImageMat = NULL;
    this->SuicideImageMat = NULL;
    this->NullImageMat = NULL;
    this->GunImage = NULL;
    this->WallbangImage = NULL;
    this->HeadshotImage = NULL;
}

