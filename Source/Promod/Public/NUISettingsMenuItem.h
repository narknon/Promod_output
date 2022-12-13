#pragma once
#include "CoreMinimal.h"
#include "ESettingType.h"
#include "Blueprint/UserWidget.h"
#include "InputCoreTypes.h"
#include "NUISettingsMenuItem.generated.h"

class UNUISettingsMenu;

UCLASS(Blueprintable, EditInlineNew)
class UNUISettingsMenuItem : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUISettingsMenu* SettingsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecimalPlaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SliderStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> DisplayOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KeyOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SecretSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUISettingsMenu* MainSettingMenuPtr;
    
    UNUISettingsMenuItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SliderChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString SetValue(const FString& NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESettingType SetType(ESettingType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetSlider(float Min, float Max, int32 decimaalPlaces, float step);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 SetOptions(const TArray<FText>& displayValues, const TArray<FString>& Values);
    
    UFUNCTION(BlueprintCallable)
    void SetName(const FText& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMenuRef(UNUISettingsMenu* InSettingsMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeys(const TArray<FKey>& keyArray);
    
    UFUNCTION(BlueprintCallable)
    void SetKey(const FString& NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSecret(bool secret);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetDisabled(bool NewDisabled);
    
    UFUNCTION(BlueprintCallable)
    void OnOptionChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNameChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeySet();
    
    UFUNCTION(BlueprintCallable)
    void HideSecretSetting(bool Hide);
    
    UFUNCTION(BlueprintCallable)
    FString GetSettingValue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddComboBoxOption(const FString& Option);
    
};

