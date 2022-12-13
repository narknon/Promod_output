#pragma once
#include "CoreMinimal.h"
#include "MapEditorObjectData.h"
#include "GameFramework/Actor.h"
#include "MapEditorObjectPreview.generated.h"

class UChildActorComponent;

UCLASS(Blueprintable)
class PROMOD_API AMapEditorObjectPreview : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapEditorObjectData PreviewObject;
    
public:
    AMapEditorObjectPreview();
};

