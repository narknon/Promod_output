#include "CachedNetStatData.h"

FCachedNetStatData::FCachedNetStatData() {
    this->NetStatDataTime = 0.00f;
    this->LostSentPackets = 0;
    this->LostRecievedPackets = 0;
    this->SentPackets = 0;
    this->RecievedPackets = 0;
}

