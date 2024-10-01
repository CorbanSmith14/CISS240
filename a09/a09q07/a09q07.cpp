// Name: Oladayo Robert Oyedeji
// File: a09q07.cpp
//
// Description
// This program prints out a pesky ASCII art problem

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int x = 1;
    int f = 0;
    int count = 0;
    int l;

    if (n > 1)
    {
    
        l = n / 3 + 1;
    }
    else
        l = n - 1;
    
    for (int i = n - 1; i >= f; i--)
    {
        
        if (count == 3)
        {
            
            x -= 4;
            i += 2;
            count = 0;
            n -= 2;
            f +=2;
            l += 2;
        }
        
        for (int j = l; j > 0; j--)
        {
            std::cout << ' '; 
        }
        for (int j = 0; j < x; j++)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
        x += 2;
        count++;
        l--;
    }
    
    return 0;
}
