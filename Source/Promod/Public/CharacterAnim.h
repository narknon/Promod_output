#pragma once
#include "CoreMinimal.h"
#include "CharacterAnim.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FCharacterAnim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Pawn1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Pawn3P;
    
    PROMOD_API FCharacterAnim();
};

