// Name: Oladyo Robert Oyedeji
// File: a09q05.cpp
//
// Description
// This program prompts the user for an integer variable n and
// prints solution to x^3 + y^3 = z for positive integers x, y, z where z runs from 1 to n;

#include <iostream>
#include <cmath>

int main()
{
    int n, count = 0;
    std::cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        
        bool solution_printed = false;
        
        for (int x = 1; x <= pow(i, 1.0 / 3.0); x++)
        {
            for (int y = x; y <= pow(i, 1.0 / 3.0); y++)
            {
                if (x * x * x + y * y * y == i)
                {
                    if (!solution_printed)
                    {
                        std::cout << i << ": " << x << ',' << y;
                        solution_printed = true;
                    }
                    else
                    {
                        std::cout<< ' ' << x << ',' << y;
                    }
                }
                
            }
            
        }
        if (solution_printed)
            std::cout << std::endl;
                
    }
    return 0;
}
