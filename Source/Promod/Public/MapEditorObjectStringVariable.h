#pragma once
#include "CoreMinimal.h"
#include "MapEditorObjectStringVariable.generated.h"

USTRUCT(BlueprintType)
struct FMapEditorObjectStringVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VariableValue;
    
    PROMOD_API FMapEditorObjectStringVariable();
};

