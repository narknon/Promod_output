#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "FireUpData.h"
#include "FireUpActionData.h"
#include "EFireUpActionType.h"
#include "PromodFireUpDataAsset.generated.h"

class AFireUpAction;

UCLASS(Blueprintable)
class PROMOD_API UPromodFireUpDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireUpData FireUpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFireUpAction> FireUpActionClass;
    
    UPromodFireUpDataAsset();
    UFUNCTION(BlueprintCallable)
    FFireUpActionData GetActionData(EFireUpActionType ActionType);
    
};

