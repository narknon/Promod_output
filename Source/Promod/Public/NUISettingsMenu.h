#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ESettingSection.h"
#include "NUIScreen.h"
#include "Combo.h"
#include "InputCoreTypes.h"
#include "NUISettingsMenu.generated.h"

class UNUISettingsMenuItem;
class UNUISettingsMenuHeader;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNUISettingsMenu : public UNUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoulderFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoulderDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSelectedControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNUISettingsMenuItem*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNUISettingsMenuHeader*> Headers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNUISettingsMenuItem*> AudioItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNUISettingsMenuItem*> HudItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNUISettingsMenuItem*> BindingItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxComboSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxComboDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxComboDelayBetweenKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombo> Combos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FText> BindMapNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCombo> BindCombos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ChangedSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUISettingsMenuHeader> HeaderWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUISettingsMenuItem> ItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUISettingsMenuItem> ControllerLayoutItemWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUISettingsMenuItem> KeyBindWidgetClass;
    
public:
    UNUISettingsMenu();
    UFUNCTION(BlueprintCallable)
    void UserSelectedTab(int32 Tab);
    
    UFUNCTION(BlueprintCallable)
    void UpdateKeyBindsArray(const FCombo& Combo);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSecretSettings();
    
    UFUNCTION(BlueprintCallable)
    void SetToDefaults();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectedTab(int32 Tab);
    
    UFUNCTION(BlueprintCallable)
    void SaveInputToConfig(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void Revert();
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromBindsArray(const FName& BindsName, const int32& Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleasedResetKey();
    
    UFUNCTION(BlueprintCallable)
    void PreviewAudioSetting(const FString& Key, const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedRightShoulder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedResetKey();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedLeftShoulder();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PressedGamepadFaceLeft();
    
    UFUNCTION(BlueprintCallable)
    void PauseMenuGoBack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOptionChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnComboCalled(const FCombo& Combo, const float& ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    void LoadAndSetInputValuesFromConfig(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlatformXBOX();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlatformPC();
    
    UFUNCTION(BlueprintCallable)
    bool IsMainMenu();
    
    UFUNCTION(BlueprintCallable)
    FName GetValueNameFromComboName(const FName& ComboName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldComboIgnoreConflicts(const FName& ComboName);
    
    UFUNCTION(BlueprintCallable)
    FString GetSettingValue(const FName& SettingName);
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetPreviousNotSecretWidget(const TArray<UWidget*>& WidgetArray, int32 currentIndex);
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetNextNotSecretWidget(const TArray<UWidget*>& WidgetArray, int32 currentIndex);
    
    UFUNCTION(BlueprintCallable)
    bool FindBindByKey(const FKey& Key, FCombo& OutBind);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoInit(int32 LocalSelectedTab);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ControlsSwapRight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ControlsSwapLeft();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowDiscardChangesPrompt();
    
    UFUNCTION(BlueprintCallable)
    void Apply();
    
    UFUNCTION(BlueprintCallable)
    void AddToBindsArray(const FCombo& Combo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddItemToSection(ESettingSection Section, UNUISettingsMenuItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddHeaderToSection(ESettingSection Section, UNUISettingsMenuHeader* Item);
    
};

