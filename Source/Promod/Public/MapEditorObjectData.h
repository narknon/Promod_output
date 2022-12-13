#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Styling/SlateBrush.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "MapEditorObjectData.generated.h"

class AMapEditorObject;

USTRUCT(BlueprintType)
struct FMapEditorObjectData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMapEditorObject> ObjectClass;
    
    PROMOD_API FMapEditorObjectData();
};

