#pragma once
#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "SMBlueprint.generated.h"

UCLASS(Blueprintable)
class SMSYSTEM_API USMBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssetVersion;
    
    USMBlueprint();
};

