// Name: Oladayo Robert Oyedeji
// File: a08q06.cpp
//
// Description
// This program prompts the user for an integer value and prints
// out the longest consecutive chain of that integer value.

#include <iostream>
#include <cmath>

int main()
{
    int x, y, a, b, count, d, n, max, num;
    std::cin >> x;
    y = x;
    n = 0;
    count = 1;
    max = 1;
    for (; y != 0;)
    {
        y /= 10;
        n++;
    }
    a = x / int (pow(10, n - 1));
    
    for (int i = n - 2; i >= 0; --i)
    {
        b = x / int (pow(10, i)) % 10;
        if (b == a + 1)
        {
            count++;            
        }
        else 
        {
            count = 1;
        }
        
        if (max < count)
        {
            max = count;
            num = b;
            
        }

        a = b;
    }
    
    num = num - max + 1;
    
    for (int i = num; i <= max + num - 1; i++)
    {
        if (max == 1)
        {
            std::cout << x / int (pow(10, n - 1));
        }
        else
        {
            std::cout << i;
        }
    }
    std::cout << std::endl;
    
    return 0;
}
