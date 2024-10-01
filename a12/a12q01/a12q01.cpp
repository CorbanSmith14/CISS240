// Name: Oladayo Robert Oyedeji
// File: a12q01.cpp
//
// Description
// This program prints whether a number is prime or not.

#include <iostream>
#include <cmath>

bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int x = 2; x <= sqrt(n); x++)
    {
        if (n % x == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int i;
    std::cin >> i;

    std::cout << i << (isprime(i) ? " is prime" : " is not prime")
              << std::endl;
    
    return 0;
}
