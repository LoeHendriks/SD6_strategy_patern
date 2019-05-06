#include <iostream>
#include <bits/stdc++.h>
#include "ScanAlgorithm.h"



const int N=100005;



void ScanAlgorithm::Schedule(std::vector<uint32_t> processes)
{
    std::cout << "Scan" << std::endl;
    uint32_t head;
    uint32_t direction;
    uint32_t done[N];

    uint32_t movement;
    uint32_t best;
    int32_t index; 
    uint32_t complete;
    uint32_t n = processes.size();


    movement = 0;
    complete = 0;
    while(complete < n)
    {
        index = -1;
        if(direction == 0) best = INT_MIN;
        if(direction == 1) best = INT_MAX;

        for(int32_t i=0; i<n; i++)
        {
            if(!done[i])
            {
                if(direction == 0 && processes[i] > best && processes[i] < head)
                {
                    index = i;
                    best = processes[i];
                }
                if(direction == 1 && processes[i] < best && processes[i] > head)
                {
                    index = i;
                    best = processes[i];
                }
            }
        }

        if(index >= 0)
        {
            complete++;
            done[index] = true;
            movement += abs(head - best);
            head = processes[index];
            std::cout << head << ", ";

        }
        else
        {
            direction = 1 - direction;
        }

    }
    std::cout << std::endl;
}