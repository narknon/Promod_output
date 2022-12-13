#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NUIBaseHUDElement.h"
#include "LineData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NUIMapPlacement.generated.h"

class ABattalionCharacter;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UNUIMapPlacement : public UNUIBaseHUDElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLeftMouseDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRightMouseDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CurrentColour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentColourNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentLineIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLineData> Lines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ExampleLineStartPointImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ExampleLineStartPoint;
    
    UNUIMapPlacement();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleMapDrawColour();
    
    UFUNCTION(BlueprintCallable)
    void RightMouseButtonUp();
    
    UFUNCTION(BlueprintCallable)
    void RightMouseButtonDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveLastMapDraw();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopWeaponFire(ABattalionCharacter* FiringPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartWeaponFire(ABattalionCharacter* FiringPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSingleWeaponFire(ABattalionCharacter* FiringPawn);
    
    UFUNCTION(BlueprintCallable)
    static void MapDrawLines(UPARAM(Ref) FPaintContext& Context, const TArray<FVector2D>& Points, FLinearColor Tint, int32 Thickness, bool bAntiAlias);
    
    UFUNCTION(BlueprintCallable)
    static void MapDrawLine(UPARAM(Ref) FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, int32 Thickness, bool bAntiAlias);
    
    UFUNCTION(BlueprintCallable)
    void LeftMouseButtonUp();
    
    UFUNCTION(BlueprintCallable)
    void LeftMouseButtonDown();
    
    UFUNCTION(BlueprintCallable)
    void GetExampleLineStartPoint();
    
    UFUNCTION(BlueprintCallable)
    void ClearMap();
    
};

