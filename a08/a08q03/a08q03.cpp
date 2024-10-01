// Name: Oladayo Robert Oyedeji
// File: a08q03.cpp
//
// Description
// The program accepts 6 integers a, b, c, d, e, f and lists the 
// integers from e to f (inclusive) which are roots of the polynomial

#include <iostream>

int main()
{
    int a, b, c, d, e, f;

    std::cin >> a >> b >> c >> d >> e >> f;

    for (int i = e; i <= f; i++)
    {
        int x = a * i * i * i + b * i * i + c * i + d;

        if (x == 0)
        {
            std::cout << i << ' ';
        }
    }
    std::cout << std::endl;
    
    return 0;
}
