// Name: Oladayo Robert Oyedeji
// File: a09q06.cpp
//
// Description
// This program prints out an ASCII art.

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int y;
    int cons = 2 * n - 3;

    for (int i = 0; i < n; ++i)
    {
        
        for (int j = 0; j < i; ++j)
        {
            std::cout << ' ';
        }
        std::cout << '*';
        for (int j = cons - 2 * i; j >= 1 ; --j)
        {
            std::cout << ' ';
        }
        if (i != n - 1)
        {
            std::cout << '*' << std::endl;
        }
        else
        {
            std::cout << std::endl;
        }
    }
    
    return 0;
}
