#pragma once
#include "CoreMinimal.h"
#include "NUIBaseHUDElement.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NUIMiniMap.generated.h"

class ABattalionSmokeGrenade;
class UMapSmokeWidget;
class UWorldMarkerComponent;
class UMapMarkerWidget;
class ABeacon;
class UCanvasPanel;
class UMaterialInstanceDynamic;
class UFriendlyTemplate;
class UImage;
class ABattalionCharacter;
class ABattalionPlayerControllerGMBase;

UCLASS(Blueprintable, EditInlineNew)
class UNUIMiniMap : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattalionSmokeGrenade*> Smokes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapSmokeWidget*> SmokeWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWorldMarkerComponent*> WorldMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapMarkerWidget*> MarkerWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DesiredPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABeacon* Beacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ThisCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CachedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFriendlyTemplate*> FrenemyImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Zoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlayerIconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* PlayerIconBombOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PlayerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScaledPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NormalisedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniMapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniMapZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattalionCharacter*> Frenemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowSmokes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionPlayerControllerGMBase* OwnerPC;
    
public:
    UNUIMiniMap();
    UFUNCTION(BlueprintCallable)
    void SetTints();
    
    UFUNCTION(BlueprintCallable)
    void SetSmokeWidgetLinkedSmokes();
    
    UFUNCTION(BlueprintCallable)
    void SetSmokeVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMinimapZoom(float NewZoom, bool Spectator);
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerWidgetLinkedMarkers();
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SetFrenemyLinkedCharacters();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshFrenemyList();
    
    UFUNCTION(BlueprintCallable)
    void OnStopWeaponFire(ABattalionCharacter* FiringPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWeaponFire(ABattalionCharacter* FiringPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnSingleWeaponFire(ABattalionCharacter* FiringPawn);
    
    UFUNCTION(BlueprintCallable)
    void GetWorldMarkers();
    
    UFUNCTION(BlueprintCallable)
    void GetSmokes();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMapSmokeWidget* CreateSmokeWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFriendlyTemplate* CreateNewFrenemyImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMapMarkerWidget* CreateMarkerWidget();
    
};

