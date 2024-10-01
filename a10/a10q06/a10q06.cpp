// Name: Oladayo Robert Oyedeji
// File: a10q06.cpp
//
// Description
// This program prints out an ASCII art

#include <iostream>

int main()
{
    int n, space;
    std::cin >> n;
    space = n * 3 - 1;
    for (int tri = 1;  tri <= n; tri++)
    {
        int stars = 1;
        for (int i = 3; i > 0; i--)
        {
            for (int j = 0; j < space; j++)
            {
                std::cout << ' ';
            }
            
            for (int j = 0; j < tri; j++)
            {
                for (int k = 1; k <= stars; k++)
                {
                    std::cout << '*';
                }
                for (int space2 = i * 2 - 1; space2 > 0; space2--)
                {
                    std::cout << ' ';
                }
                
            }
            stars +=2;
            space--;
            std::cout << std::endl;
        
        }
    }
    
    return 0;
}
