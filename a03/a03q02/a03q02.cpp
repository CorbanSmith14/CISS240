// Name: Oyedeji Robert Oladayo
// File: a03q02.cpp

#include <iostream>

int main()
{
    int d4, d3, d2, d1, d0;
    std::cin >> d4 >> d3 >> d2 >> d1 >> d0;

    int x = (d4 * 10000) + (d3 * 1000) + (d2 * 100) + (d1 * 10) + d0;

    std::cout << x << std::endl;
    
    return 0;
}
 
