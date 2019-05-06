#ifndef OS_H
#define OS_H

#include <thread>
#include <vector>
#include "IDiskScheduler.h"


class OperatingSystem{

private:
    std::thread mOsThread;
    IDiskScheduler *mScheduler;
    std::vector<uint32_t> mProcList;


public:
    OperatingSystem(IDiskScheduler* s, std::vector<uint32_t> list);
    ~OperatingSystem();
    void StartScheduling();
    void InsertNumber(uint32_t nr);
};

#endif