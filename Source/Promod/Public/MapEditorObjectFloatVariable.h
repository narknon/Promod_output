#pragma once
#include "CoreMinimal.h"
#include "MapEditorObjectFloatVariable.generated.h"

USTRUCT(BlueprintType)
struct FMapEditorObjectFloatVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VariableValue;
    
    PROMOD_API FMapEditorObjectFloatVariable();
};

