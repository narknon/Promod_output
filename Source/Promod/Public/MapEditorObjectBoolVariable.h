#pragma once
#include "CoreMinimal.h"
#include "MapEditorObjectBoolVariable.generated.h"

USTRUCT(BlueprintType)
struct FMapEditorObjectBoolVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VariableValue;
    
    PROMOD_API FMapEditorObjectBoolVariable();
};

