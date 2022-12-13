#include "NUISettingsMenu.h"

class UWidget;

void UNUISettingsMenu::UserSelectedTab(int32 Tab) {
}

void UNUISettingsMenu::UpdateKeyBindsArray(const FCombo& Combo) {
}

void UNUISettingsMenu::ToggleSecretSettings() {
}

void UNUISettingsMenu::SetToDefaults() {
}


void UNUISettingsMenu::SaveInputToConfig(const FString& Name) {
}

void UNUISettingsMenu::Revert() {
}

void UNUISettingsMenu::RemoveFromBindsArray(const FName& BindsName, const int32& Pos) {
}


void UNUISettingsMenu::PreviewAudioSetting(const FString& Key, const FString& Value) {
}





void UNUISettingsMenu::PauseMenuGoBack() {
}



void UNUISettingsMenu::LoadAndSetInputValuesFromConfig(const FString& Name) {
}

bool UNUISettingsMenu::IsPlatformXBOX() {
    return false;
}

bool UNUISettingsMenu::IsPlatformPC() {
    return false;
}

bool UNUISettingsMenu::IsMainMenu() {
    return false;
}

FName UNUISettingsMenu::GetValueNameFromComboName(const FName& ComboName) {
    return NAME_None;
}

bool UNUISettingsMenu::GetShouldComboIgnoreConflicts(const FName& ComboName) {
    return false;
}

FString UNUISettingsMenu::GetSettingValue(const FName& SettingName) {
    return TEXT("");
}

UWidget* UNUISettingsMenu::GetPreviousNotSecretWidget(const TArray<UWidget*>& WidgetArray, int32 currentIndex) {
    return NULL;
}

UWidget* UNUISettingsMenu::GetNextNotSecretWidget(const TArray<UWidget*>& WidgetArray, int32 currentIndex) {
    return NULL;
}

bool UNUISettingsMenu::FindBindByKey(const FKey& Key, FCombo& OutBind) {
    return false;
}

bool UNUISettingsMenu::DoInit_Implementation(int32 LocalSelectedTab) {
    return false;
}

void UNUISettingsMenu::ControlsSwapRight_Implementation() {
}

void UNUISettingsMenu::ControlsSwapLeft_Implementation() {
}

void UNUISettingsMenu::Client_ShowDiscardChangesPrompt_Implementation() {
}

void UNUISettingsMenu::Apply() {
}

void UNUISettingsMenu::AddToBindsArray(const FCombo& Combo) {
}



UNUISettingsMenu::UNUISettingsMenu() {
    this->ShoulderFirstDelay = 0.50f;
    this->ShoulderDelay = 0.25f;
    this->CurrentSelectedControl = 0;
    this->MaxComboSize = 8;
    this->MaxComboDelay = 5.00f;
    this->MaxComboDelayBetweenKeys = 0.00f;
    this->HeaderWidgetClass = NULL;
    this->ItemWidgetClass = NULL;
    this->ControllerLayoutItemWidgetClass = NULL;
    this->KeyBindWidgetClass = NULL;
}

