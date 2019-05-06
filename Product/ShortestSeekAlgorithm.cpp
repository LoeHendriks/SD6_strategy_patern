#include <iostream>
#include "ShortestSeekAlgorithm.h"
#include <bits/stdc++.h>

//  #define INT_MAX 100


void ShortestSeekAlgorithm::Schedule(std::vector<uint32_t> processes)
{
    std::cout << "Shortest Seek" << std::endl;
    uint32_t head = processes[0];
    uint32_t movement;
    uint32_t shortest;
    uint32_t index;
    uint32_t n = processes.size();

    movement = 0;
    for(uint32_t i=0; i<n; i++)
    {
        index = 0;
        shortest = INT_MAX;

        for(uint32_t k=0; k<n; k++)
        {
            if(abs(head - processes[k]) < shortest && !mDone[k])
            {
                index = k;
                shortest = abs(head - processes[k]);
            }
        }

        mDone[index] = true;
        movement += shortest;
        head = processes[index];
        std::cout << head  << ", ";
    }
    std::cout << std::endl;

}