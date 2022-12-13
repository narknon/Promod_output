#pragma once
#include "CoreMinimal.h"
#include "BattalionLoadoutTeamDeck.h"
#include "BattalionLoadoutDeckTemplate.generated.h"

USTRUCT(BlueprintType)
struct FBattalionLoadoutDeckTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattalionLoadoutTeamDeck> TeamDecks;
    
    PROMOD_API FBattalionLoadoutDeckTemplate();
};

