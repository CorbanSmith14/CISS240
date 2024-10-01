// Name: Oladayo Robert Oyedeji
// File: a10q05.cpp
//
// Description
// This program prompts a user for an integer and prints
// whether or not the number is a palindrome.

#include <iostream>
#include <cmath>

int main()
{
    int x, n, x2, y2;
    std::cin >> x;
    x2 = 0;
    n = 0;
    y2 = 0;
    int y = x;

    while(y != 0)
    {
        y /= 10;
        n++;
    }
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        y2 = x / int(pow(10, i)) % 10;
        x2 += y2 * int(pow(10, j));
        j++;
        
    }

    bool palindrome = (x - x2 == 0);
   
    std::cout << palindrome << std::endl;
    
    return 0;
}
