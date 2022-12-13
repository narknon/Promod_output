#pragma once
#include "CoreMinimal.h"
#include "BattalionLoadoutCardTemplate.h"
#include "BattalionLoadoutDeckTemplate.h"
#include "BattalionLoadoutCardStack.generated.h"

USTRUCT(BlueprintType)
struct FBattalionLoadoutCardStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattalionLoadoutCardTemplate> Cards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattalionLoadoutDeckTemplate Deck;
    
    PROMOD_API FBattalionLoadoutCardStack();
};

