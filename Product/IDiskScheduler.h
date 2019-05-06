#ifndef IDISKSCHEDULER
#define IDISKSCHEDULER

#include <vector>

class IDiskScheduler{
public:
    IDiskScheduler() {};
    virtual ~IDiskScheduler(){};
    virtual void Schedule(std::vector<uint32_t> processes) = 0;
};

#endif