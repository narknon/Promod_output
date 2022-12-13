#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/HUD.h"
#include "MapEditorHUD.generated.h"

class UMapEditorWidget;

UCLASS(Blueprintable, NonTransient)
class PROMOD_API AMapEditorHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapEditorWidget* MapEditorWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMapEditorWidget> MapEditorWidgetClass;
    
public:
    AMapEditorHUD();
};

