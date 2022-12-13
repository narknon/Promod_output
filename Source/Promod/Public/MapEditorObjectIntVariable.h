#pragma once
#include "CoreMinimal.h"
#include "MapEditorObjectIntVariable.generated.h"

USTRUCT(BlueprintType)
struct FMapEditorObjectIntVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VariableValue;
    
    PROMOD_API FMapEditorObjectIntVariable();
};

