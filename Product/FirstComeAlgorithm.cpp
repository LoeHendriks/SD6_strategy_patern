 #include <iostream>
 #include "FirstComeAlgorithm.h"
 
 void FirstComeAlgorithm::Schedule(std::vector<uint32_t> processes)
 {
     std::cout << "First Come First Served" << std::endl;
     for(auto i : processes)
     {
         std::cout << i << ", ";
     }
     std::cout << std::endl;
 }