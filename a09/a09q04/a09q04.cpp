// Name: Oladayo Robert Oyedeji
// File: a09q04.cpp
//
// Description
// This program prompts a user for an integer z and finds all
// postive integer solution to the equation, which do not repeat themselves.

#include <iostream>
#include <cmath>

int main()
{
    int z;
    std::cin >> z;

    for (int i = 0; i <= z; i++)
    {
        for (int j = i; j <= z; j++)
        {
            if (i * i * i + j * j * j == z)
            {
                std::cout << i << "," << j << ' ';
            }
        }
        
    }
    std::cout << std::endl;

    return 0;
}
    
