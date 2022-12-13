#pragma once
#include "CoreMinimal.h"
#include "NUIBaseUIElement.h"
#include "UObject/NoExportTypes.h"
#include "NUIFullScreenMap.generated.h"

class ABattalionSmokeGrenade;
class UMapSmokeWidget;
class ABattalionCharacter;
class UWorldMarkerComponent;
class UMapMarkerWidget;
class ABeacon;
class UCanvasPanel;
class UMaterialInstanceDynamic;
class UMapPlayerWidget;

UCLASS(Blueprintable, EditInlineNew)
class UNUIFullScreenMap : public UNUIBaseUIElement {
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
    TArray<ABattalionCharacter*> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABeacon* Beacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ThisCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CachedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMapPlayerWidget*> PlayerImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScaledPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NormalisedPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MiniMapZoom;
    
    UNUIFullScreenMap();
    UFUNCTION(BlueprintCallable)
    void SetTints();
    
    UFUNCTION(BlueprintCallable)
    void SetSmokeWidgetLinkedSmokes();
    
    UFUNCTION(BlueprintCallable)
    void SetSmokeVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayersLinkedCharacters();
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerWidgetLinkedMarkers();
    
    UFUNCTION(BlueprintCallable)
    void SetMarkerVisibility();
    
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
    
    UFUNCTION(BlueprintCallable)
    void GetPlayers();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMapSmokeWidget* CreateSmokeWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMapPlayerWidget* CreateNewFrenemyImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMapMarkerWidget* CreateMarkerWidget();
    
};

