#include "BotFollowActor.h"
#include "Components/BoxComponent.h"

ABotFollowActor::ABotFollowActor() {
    this->RootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("RootBoxComp"));
}

