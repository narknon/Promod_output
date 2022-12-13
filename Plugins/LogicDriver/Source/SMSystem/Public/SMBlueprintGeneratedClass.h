#pragma once
#include "CoreMinimal.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "UObject/NoExportTypes.h"
#include "SMBlueprintGeneratedClass.generated.h"

UCLASS(Blueprintable)
class SMSYSTEM_API USMBlueprintGeneratedClass : public UBlueprintGeneratedClass {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RootGuid;
    
public:
    USMBlueprintGeneratedClass();
};

