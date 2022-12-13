#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BattalionCharacterComponent.h"
#include "ENationType.h"
#include "CTFCharacterComponent.generated.h"

class AActor;
class UWorldMarkerComponent;
class UTexture2D;
class ACTFMode_Flag;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCTFCharacterComponent : public UBattalionCharacterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldMarkerComponent* WorldMarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WorldMarkerComponentIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACTFMode_Flag* AttachedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> FlagClass;
    
    UCTFCharacterComponent();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_ShowMarkerUI(int32 Team);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_RemoveFlag();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_HideMarkerUI();
    
    UFUNCTION(Client, Reliable)
    void Client_AttachFlag_Local(uint8 Team, ENationType FlagNation);
    
    UFUNCTION(NetMulticast, Reliable)
    void Client_AttachFlag(uint8 Team, ENationType FlagNation);
    
};

