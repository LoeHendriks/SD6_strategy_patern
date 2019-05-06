#ifndef SCANALGORITHM_H
#define SCANALGORITHM_H
#include "IDiskScheduler.h"

class ScanAlgorithm : public IDiskScheduler
{
public:
    void Schedule(std::vector<uint32_t> processes);
};

#endif