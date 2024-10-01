// Name: Oladayo Robert Oyedeji
// File: a09q03.cpp
//
// Description
// This program prompts a user for the n and a, and prints all
// the solutions, and prints the number of solutions found.

#include <iostream>

int main()
{
    int n, a,
        count = 0;
    std::cin >> n >> a;

    for (int x = 0; x < n; x++)
    {
        if (x * x % n == a % n)
        {
            std::cout << x << ' ';
            count++;
        }
        
    }
    std::cout << std::endl;
    std::cout << count << std::endl;
    
    return 0;
}
