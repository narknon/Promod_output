#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "BattalionLoadoutDeckTemplate.h"
#include "BattalionLoadoutCardStack.h"
#include "BattalionLoadoutWeaponInfo.h"
#include "Styling/SlateBrush.h"
#include "BattalionLoadoutSystem.generated.h"

UCLASS(Blueprintable, NotPlaceable, Config=Game)
class ABattalionLoadoutSystem : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBattalionLoadoutDeckTemplate> DeckTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FBattalionLoadoutCardStack CardTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FBattalionLoadoutWeaponInfo> WeaponInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultClassImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSlateBrush> ClassImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultAccessoryImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSlateBrush> AccessoryImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush EmptyAccessorySlotImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush UnavailableAccessorySlotImage;
    
    ABattalionLoadoutSystem();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

