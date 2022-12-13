#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LoadoutCard.h"
#include "NUIBaseUIElement.h"
#include "ENationType.h"
#include "NUISpectatorTeamLoadout.generated.h"

class UNUIBaseHUDElement;
class UNUILoadoutCard;
class ABattalionPlayerState;
class UNUIPlayerLoadout;

UCLASS(Blueprintable, EditInlineNew)
class UNUISpectatorTeamLoadout : public UNUIBaseUIElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENationType Nation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattalionPlayerState*> PlayerSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNUILoadoutCard*> AvailableClassWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNUILoadoutCard*> AvailableAccessoryWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNUIPlayerLoadout*> TeamMemberWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNUIBaseHUDElement* TeamIconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIBaseUIElement> ClassStackWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIBaseUIElement> AccessoryStackWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIBaseUIElement> PlayerStateLeftWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNUIBaseUIElement> PlayerStateRightWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UNUIBaseHUDElement>> TeamIconWidgetClasses;
    
public:
    UNUISpectatorTeamLoadout();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowLoadout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerUnequippedCard(int32 PlayerIndex, FLoadoutCard Card, int32 AccessorySlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLeftTeam(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerJoinedTeam(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerEquippedCard(int32 PlayerIndex, FLoadoutCard Card, int32 AccessorySlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownTimerCriticalTick();
    
};

