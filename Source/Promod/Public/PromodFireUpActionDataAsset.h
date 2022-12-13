#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFireUpActionType.h"
#include "FireUpActionData.h"
#include "PromodFireUpActionDataAsset.generated.h"

UCLASS(Blueprintable)
class PROMOD_API UPromodFireUpActionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFireUpActionType, FFireUpActionData> ActionData;
    
    UPromodFireUpActionDataAsset();
    UFUNCTION(BlueprintCallable)
    FFireUpActionData GetActionData(EFireUpActionType ActionType);
    
};

