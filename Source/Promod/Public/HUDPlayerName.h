#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "UObject/NoExportTypes.h"
#include "HUDPlayerName.generated.h"

class APawn;
class UCanvasPanel;
class UTextBlock;
class ABattalionCharacter;
class UCurveFloat;
class UBattalionDamageType;

UCLASS(Blueprintable, EditInlineNew)
class UHUDPlayerName : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NameToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility CrossPlayGlobeVisiblity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* SpectatorCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* LinkedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceScalarCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DistanceQualityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnemy;
    
    UHUDPlayerName();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetToSpectatorUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetToPlayerUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetToBuyPhaseUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHealth(float NewHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGunImage(const UBattalionDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColour(bool bIsEnemy);
    
    UFUNCTION(BlueprintCallable)
    void ManualTick(float InDeltaTime, ABattalionCharacter* Owner, APawn* Spectator);
    
};

