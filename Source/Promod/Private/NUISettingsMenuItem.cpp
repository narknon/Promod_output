#include "NUISettingsMenuItem.h"

class UNUISettingsMenu;


FString UNUISettingsMenuItem::SetValue_Implementation(const FString& NewValue) {
    return TEXT("");
}

ESettingType UNUISettingsMenuItem::SetType_Implementation(ESettingType NewType) {
    return ESettingType::EST_LEFTRIGHT;
}

void UNUISettingsMenuItem::SetSlider(float Min, float Max, int32 decimaalPlaces, float step) {
}

int32 UNUISettingsMenuItem::SetOptions_Implementation(const TArray<FText>& displayValues, const TArray<FString>& Values) {
    return 0;
}

void UNUISettingsMenuItem::SetName(const FText& NewValue) {
}

void UNUISettingsMenuItem::SetMenuRef(UNUISettingsMenu* InSettingsMenu) {
}


void UNUISettingsMenuItem::SetKey(const FString& NewValue) {
}

void UNUISettingsMenuItem::SetIsSecret(bool secret) {
}

bool UNUISettingsMenuItem::SetDisabled_Implementation(bool NewDisabled) {
    return false;
}

void UNUISettingsMenuItem::OnOptionChanged() {
}



void UNUISettingsMenuItem::HideSecretSetting(bool Hide) {
}

FString UNUISettingsMenuItem::GetSettingValue() {
    return TEXT("");
}


UNUISettingsMenuItem::UNUISettingsMenuItem() : UUserWidget(FObjectInitializer::Get()) {
    this->SettingsMenu = NULL;
    this->Type = ESettingType::EST_LEFTRIGHT;
    this->SliderMin = 0.00f;
    this->SliderMax = 0.00f;
    this->DecimalPlaces = 0;
    this->SliderStep = 0.00f;
    this->Disabled = false;
    this->SecretSetting = false;
    this->MainSettingMenuPtr = NULL;
}

