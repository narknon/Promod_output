#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InputCoreTypes.h"
#include "ENUIScreen.h"
#include "Engine/EngineBaseTypes.h"
#include "NUIScreen.generated.h"

class UNUIScreen;
class UPromodGamePadSettingsDataAsset;
class UBattalionGameInstance;
class UBattalionSettings;
class UBattalionOnline;
class UWidget;
class UNUIHeader;

UCLASS(Blueprintable, EditInlineNew)
class UNUIScreen : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEntering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAnalogValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedToNavigate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExiting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldBeRemovedFromViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIScreen* PreviousScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPromodGamePadSettingsDataAsset* GamePadSettingsDataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionGameInstance* BattInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionSettings* BattSettings;
    
public:
    UNUIScreen();
    UFUNCTION(BlueprintCallable)
    void StartExit(bool Forward);
    
    UFUNCTION(BlueprintCallable)
    void StartEnter(bool Forward);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshVisibility();
    
    UFUNCTION(BlueprintCallable)
    void OnExited();
    
    UFUNCTION(BlueprintCallable)
    void OnEntered();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputEnabled() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasLostControllerFocus() const;
    
    UFUNCTION(BlueprintCallable)
    void GoTo(ENUIScreen screen, bool Forward);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GoBack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetZOrder();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UWidget* GetScreenDefaultWidget() const;
    
    UFUNCTION(BlueprintCallable)
    UBattalionOnline* GetOnline();
    
    UFUNCTION(BlueprintCallable)
    UNUIHeader* GetHeader();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExitFinished();
    
    UFUNCTION(BlueprintCallable)
    void EnterFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateConfirmExitPrompt();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeRemovedFromViewport();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartExit(bool Forward);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartEnter(bool Forward);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnInput(FKey Key, TEnumAsByte<EInputEvent> EventType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnExited();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEntered();
    
};

