// Name: Oyedeji Robert Oladayo
// File: a02q04.cpp

#include <iostream>

int main()
{
    int x;
    std::cin >> x;
    std::cout << x / 10000 << ' '
              << (x / 1000) % 10 << ' '
              << (x / 100) % 10 << ' '
              << (x / 10) % 10 << ' '
              << (x % 10) << std::endl;
    return 0;
}
