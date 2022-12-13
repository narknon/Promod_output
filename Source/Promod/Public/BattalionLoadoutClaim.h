#pragma once
#include "CoreMinimal.h"
#include "EBattalionLoadoutClaimType.h"
#include "BattalionLoadoutClaim.generated.h"

class APlayerState;

USTRUCT(BlueprintType)
struct FBattalionLoadoutClaim {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattalionLoadoutClaimType ClaimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CardTemplateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    PROMOD_API FBattalionLoadoutClaim();
};

