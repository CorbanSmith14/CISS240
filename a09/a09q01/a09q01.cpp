// Name: Oladayo Robert Oyedeji
// File: a09q01.cpp
//
// Description
// This program prompts a user for 4 integer values a, b, c, d and
// prints a table of c-powers to d-powers for intergers from a to b.

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int a, b, c, d, e, f;

    std::cin >> a >> b >> c >> d;

    std::cout << "      ";

    for (int i = c; i <= d; i++)
    {
        std::cout << std::setw(15) << i;
    }
    std::cout << std::endl;

    std::cout << "      ";
    for (int i = c; i <= d; i++)
    {
        std::cout << "---------------";
    }
    std::cout << std::endl;
    
    for (int i = a; i <= b; i++)
    {
        std::cout << std::setw(5) << i << '|';
        for (int j = c; j <= d; j++)
        {

            std::cout << std::fixed
                      << std::setw(15) << int (pow(i, j));
        }
        std::cout << std::endl;
    }
}
