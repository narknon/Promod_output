#pragma once
#include "CoreMinimal.h"
#include "StackMember.generated.h"

USTRUCT(BlueprintType)
struct FStackMember {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkToDelete;
    
    PROMOD_API FStackMember();
};

