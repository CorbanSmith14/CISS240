// Name: Oyedeji Oladayo RObert
// File: a06q01
//
// Description
// This program prompts a user for a year and prints whether
// its a leap year or not 

#include <iostream>
#include <cmath>

int main()
{
    int year;
    std::cin >> year;

    if (year % 4 == 0 && year % 100 != 0)
    {
        std::cout << "leap year" << std::endl;
    }
    else if (year % 400 == 0)
    {
        std::cout << "leap year " << std::endl;
    }
    else
    {
        std::cout << "not leap year" << std::endl;
    }

    return 0;
}
