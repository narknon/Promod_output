#include "PromodHUD.h"

class UHUDMaster;

UHUDMaster* APromodHUD::GetMasterHudWidget() {
    return NULL;
}

APromodHUD::APromodHUD() {
    this->MasterHUDWidget = NULL;
}

