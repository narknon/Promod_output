#pragma once
#include "CoreMinimal.h"
#include "BattalionSubCardTemplate.h"
#include "Styling/SlateBrush.h"
#include "BattalionLoadoutCardTemplate.generated.h"

USTRUCT(BlueprintType)
struct FBattalionLoadoutCardTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattalionSubCardTemplate> NationCards;
    
    PROMOD_API FBattalionLoadoutCardTemplate();
};

