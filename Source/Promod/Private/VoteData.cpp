#include "VoteData.h"

FVoteData::FVoteData() {
    this->VoteTime = 0.00f;
    this->VotesReq = 0;
    this->SelfCalledVote = false;
    this->PlayerToKick = NULL;
}

