#include "NUISettingsMenuHeader.h"


void UNUISettingsMenuHeader::HideSecretSetting(bool Hide) {
}

UNUISettingsMenuHeader::UNUISettingsMenuHeader() : UUserWidget(FObjectInitializer::Get()) {
    this->SecretSetting = false;
}

