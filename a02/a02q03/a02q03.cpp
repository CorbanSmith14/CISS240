// Name: Oyedeji Robert Oladayo
// File: a02q03.cpp

#include <iostream>

int main()
{
    int x, y, z, i, t, gold;
    std::cin >> x
             >> y
             >> z
             >> i
             >> t;
    gold = x + (y / (z + i)) * t * t * t;
    std::cout << gold << std::endl;
    
    return 0;
}
