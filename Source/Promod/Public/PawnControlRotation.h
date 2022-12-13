#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PawnControlRotation.generated.h"

class ABattalionCharacter;

USTRUCT(BlueprintType)
struct FPawnControlRotation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABattalionCharacter* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ControlRotation;
    
    PROMOD_API FPawnControlRotation();
};

