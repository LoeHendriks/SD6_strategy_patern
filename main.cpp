#include <iostream>
#include "Product/OS.h"
#include "Product/FirstComeAlgorithm.h"
#include "Product/ShortestSeekAlgorithm.h"
#include "Product/ScanAlgorithm.h"

bool running = true;
std::vector<uint32_t> dataList {40, 12, 22, 66, 67, 33, 80, 75, 85, 65, 8};


int main()
{
    
    while(running)
    {
        uint32_t var = 0;

        std::cout << "|-------------------------------------|" << std::endl;
        std::cout << "|Disk Scheduler                       |" << std::endl;
        std::cout << "|SD6 Loe Hendriks & Stefan Vogelaar   |" << std::endl;
        std::cout << "|Menu                                 |" << std::endl;
        std::cout << "|(1) First Come First Server          |" << std::endl;
        std::cout << "|(2) Shortest Seek Time First         |" << std::endl;
        std::cout << "|(3) SCAN                             |" << std::endl;
        std::cout << "|(4) Insert number to data set        |" << std::endl;
        std::cout << "|(5) Show data set                    |" << std::endl;
        std::cout << "|(6) Quit                             |" << std::endl;
        std::cout << "|-------------------------------------|" << std::endl;



        std::cin >> var;
        

        switch(var)
        {
            case 1:
            {
                OperatingSystem os(new FirstComeAlgorithm, dataList);
                os.StartScheduling();
                break;
            } 
            case 2:
            {
                OperatingSystem os(new ShortestSeekAlgorithm, dataList);
                os.StartScheduling();
                break;
            }
            case 3:
            {
                OperatingSystem os(new ScanAlgorithm, dataList);
                os.StartScheduling();
                break;
            }
            case 4:
            {
                std::cout << "Please insert an integer from 0 to 100" << std::endl;
                uint32_t nr;
                std::cin >> nr;
                dataList.push_back(nr);
                break;
            }
            case 5:
            {
                std::cout << "Current data set:" << std::endl;
                for(auto i : dataList)
                {
                    std::cout << i << ", ";
                }
                std::cout << std::endl;
                break;
            }
            case 6:
            {
                running = false;
            }
            default:
                std::cout << "Error: Unknown Option" << std::endl;
                break;
        };
    }
    
}