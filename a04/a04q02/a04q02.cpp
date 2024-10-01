// Name: Oyedeji Oladayo Robert
// File: a04q02.cpp
//
// Description
// Program prompts user for x0, x1, x2, x3, x4
// and prints the standard Deviation of the 5 elements

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int x0, x1, x2, x3, x4;
    double avg, sD;

    std::cin >> x0 >> x1 >> x2 >> x3 >> x4;
    avg = double(x0 + x1 + x2 + x3 + x4) / 5;
    sD = sqrt(((x0 - avg) * (x0 - avg) + (x1 - avg) * (x1 - avg) +
               (x2 - avg) * (x2 - avg) + (x3 - avg) * (x3 - avg) +
               (x4 - avg) * (x4 - avg)) / 5);

    std::cout << std::fixed << std::setprecision(5)
              << sD << std::endl;
    
    
    return 0;
}
