#include "OS.h"
#include <iostream>

OperatingSystem::OperatingSystem(IDiskScheduler* s, std::vector<uint32_t> list)
{
    mScheduler = s;
    mProcList = list;
}

OperatingSystem::~OperatingSystem()
{
}

void OperatingSystem::StartScheduling()
{
    std::thread s (&IDiskScheduler::Schedule, mScheduler,  mProcList);
    s.join();

}

void OperatingSystem::InsertNumber(uint32_t nr)
{
     mProcList.push_back(nr);
}
