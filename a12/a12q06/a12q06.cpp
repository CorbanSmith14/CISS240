// Name: Oladayo Robert Oyedeji
// File: a12q06.cpp
//
// Description
//

#include <iostream>

int T(int n)
{
    if (n % 2 == 0)
    {
        return n / 2;
    }

    else
    {
        return 3 * n + 1;
    }
}

void print_3x_plus_1(int n)
{
    while (n != 1)
    {
        std::cout << n << ' ';
        n = T(n);
    }
    std::cout << n<< std::endl;
}

int main()
{
    int a, b;
    std::cin >> a >> b;

    for (int n = a; n <= b; ++n)
    {
        print_3x_plus_1(n);
    }
    
    return 0;
}
