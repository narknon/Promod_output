#include "KillMetaData.h"

FKillMetaData::FKillMetaData() {
    this->bHeadShot = false;
    this->bWallBang = false;
    this->bAirKill = false;
    this->bCollateralKill = false;
    this->bFellToDeath = false;
    this->bNoScope = false;
    this->bKillerOnFire = false;
    this->bKilledOnFire = false;
    this->bNaded = false;
    this->bBombed = false;
    this->bCarBombed = false;
    this->bKnifed = false;
    this->Damage = 0.00f;
    this->KillerTeamNum = 0;
    this->KilledTeamNum = 0;
    this->AssisterTeamNum = 0;
}

