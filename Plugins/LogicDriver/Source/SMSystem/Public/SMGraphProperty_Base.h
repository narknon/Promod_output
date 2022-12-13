#pragma once
#include "CoreMinimal.h"
#include "SMGraphProperty_Base_Runtime.h"
#include "EdGraph/EdGraphPin.h"
#include "Engine/MemberReference.h"
#include "UObject/NoExportTypes.h"
#include "SMGraphProperty_Base.generated.h"

USTRUCT(BlueprintType)
struct SMSYSTEM_API FSMGraphProperty_Base : public FSMGraphProperty_Base_Runtime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FEdGraphPinType VariableType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMemberReference MemberReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid GuidUnmodified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TemplateGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GuidIndex;
    
public:
    FSMGraphProperty_Base();
};

