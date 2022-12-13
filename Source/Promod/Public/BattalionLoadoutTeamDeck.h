#pragma once
#include "CoreMinimal.h"
#include "BattalionLoadoutTeamDeck.generated.h"

USTRUCT(BlueprintType)
struct FBattalionLoadoutTeamDeck {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ClassNames;
    
    PROMOD_API FBattalionLoadoutTeamDeck();
};

