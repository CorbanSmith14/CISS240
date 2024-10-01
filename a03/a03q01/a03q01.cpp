// Name: Oyedeji Robert Oladayo
// File: a03q01.cpp

#include <iostream>

int main()
{
    int num, rm, sm, rm_2;
    std::cin >> num;

    rm = num % 9;
    sm = (num / 1000) + ((num / 100) % 10) + ((num / 10) % 10) + (num % 10);
    rm_2 = sm % 9;

    std::cout << rm << ' ' << sm << ' ' << rm_2 << std::endl;
    
    return 0;
}
