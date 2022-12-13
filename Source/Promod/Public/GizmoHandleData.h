#pragma once
#include "CoreMinimal.h"
#include "EMapEditorAxis.h"
#include "EMapEditorTransformMode.h"
#include "GizmoHandleData.generated.h"

USTRUCT(BlueprintType)
struct FGizmoHandleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapEditorAxis ConstraintAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapEditorTransformMode TransformMode;
    
    PROMOD_API FGizmoHandleData();
};

