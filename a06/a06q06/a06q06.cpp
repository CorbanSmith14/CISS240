// Name: Oyedeji Oladayo Robert
// File: a06q06.cpp
//
// Description
// This program prompts the user for two numbers and
// prints the addition of the numbers
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

int main()
{
    int x, y;
    std::cin >> x >> y;

    if (x % 10 + y % 10 >= 10)
    {
        std::cout << "  " << (x % 10 + y % 10) / 10 << ' ' << std::endl;
    }
    std::cout << "  " << x / 10 << " " << x % 10 << '\n'
              << "+ " << y / 10 << " " << y % 10 << '\n'
              << "-----\n";
             
    if (x + y >= 100)
        std::cout << (x + y) / 100 << " "
                  << (x + y) / 10 % 10 << " " << (x + y) % 10 << std::endl;
    else
        std::cout << "  "<< (x + y) / 10 << " " << (x + y) % 10 << std::endl;
    
    std::cout << "-----\n";
    
   return 0;
   
}
