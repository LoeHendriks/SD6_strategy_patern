#ifndef FIRSTCOMEALGORITHM_H
#define FIRSTCOMEALGORITHM_H
#include "IDiskScheduler.h"

class FirstComeAlgorithm : public IDiskScheduler
{
public:
    void Schedule(std::vector<uint32_t> processes);
};

#endif