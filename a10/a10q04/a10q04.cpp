// Name: Oladayo Robert Oyedeji
// File: a10q04.cpp
//
// Description
// This program prints out a perfect number

#include <iostream>

int main()
{
    int a, b;
    int count = 0;
    std::cin >> a >> b;

    
    for (int n = a; n <= b; n++)
    {
        int sum = 0;
        
        for (int i = 1; i < n; i++)
        {
            
            if (n % i == 0)
            {
                sum += i;
            }
            
        }
        if (sum == n)
        {
            if (count == 0)
            {
                std::cout << "perfect number(s): ";
            }
            count++;
            std::cout << n << " ";
        }
    }
    if (count != 0)
    {
        std::cout << std::endl;
    }
    std::cout << "number of perfect numbers found: " << count << std::endl;
    
    return 0;
}
