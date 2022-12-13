#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TDMHUD.h"
#include "CTFHUD.generated.h"

class UNUICTFFlagStates;
class UNUIFlagIcon;
class UBattalionDamageType;
class UNUICTFGameOverview;

UCLASS(Blueprintable, NonTransient)
class ACTFHUD : public ATDMHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIFlagIcon* FlagIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBattalionDamageType> FlagDmgTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattalionDamageType* FlagDmgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUICTFFlagStates* CTFFlagStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUICTFGameOverview* CTFGameOverview;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIFlagIcon> FlagIconClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUICTFFlagStates> CTFFlagStatesClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUICTFGameOverview> CTFGameOverviewClass;
    
public:
    ACTFHUD();
    UFUNCTION(BlueprintCallable)
    void StartEndgameState();
    
    UFUNCTION(BlueprintCallable)
    void FinishEndgameState();
    
};

