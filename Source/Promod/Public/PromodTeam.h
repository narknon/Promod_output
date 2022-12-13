#pragma once
#include "CoreMinimal.h"
#include "BattalionTeam.h"
#include "LiveClassData.h"
#include "EClassName.h"
#include "PromodTeam.generated.h"

UCLASS(Blueprintable)
class UPromodTeam : public UBattalionTeam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FLiveClassData> LiveClassUsage;
    
    UPromodTeam();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    int32 GetclassInUse(EClassName ClassName);
    
};

