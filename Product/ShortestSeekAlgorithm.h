#ifndef SHORTESTSEEKALGORITHM_H
#define SHORTESTSEEKALGORITHM_H
#include "IDiskScheduler.h"
const int N = 20;

class ShortestSeekAlgorithm : public IDiskScheduler
{
public:
    void Schedule(std::vector<uint32_t> processes);
private:
    uint32_t mDone[N];

};

#endif