#pragma once
#include "CoreMinimal.h"
#include "ENationType.h"
#include "BattalionLoadoutClaim.h"
#include "BattalionLoadoutDeckInstance.generated.h"

USTRUCT(BlueprintType)
struct FBattalionLoadoutDeckInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeckTemplateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENationType Nation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattalionLoadoutClaim> ConsumeClaims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattalionLoadoutClaim> LoadoutClaims;
    
    PROMOD_API FBattalionLoadoutDeckInstance();
};

