#include "GrenadeFollowActor.h"
#include "Components/BoxComponent.h"

AGrenadeFollowActor::AGrenadeFollowActor() {
    this->RootBox = CreateDefaultSubobject<UBoxComponent>(TEXT("RootBoxComp"));
    this->LinkedGrenade = NULL;
    this->BeginDestroyTimer = false;
    this->DestroyTime = 5.00f;
    this->DestroyTimer = 0.00f;
}

