// Name: Oyedeji Robert Oladayo
// File: a02q01.cpp

#include <iostream>

int main()
{
    int w, h, f, IQ;
    
    std::cout << "Enter w: ";
    std::cin >> w;
    std::cout << "Enter h: ";
    std::cin >> h;
    std::cout << "Enter f: ";
    std::cin >> f;
    
    IQ = 3 * w / h + (3 + f) / 42;

    std::cout << "IQ: " << IQ << std::endl;
    return 0;
}
 
