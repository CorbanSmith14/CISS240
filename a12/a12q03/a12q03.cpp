// Name: Oladayo Robert Oyedeji
// File: a12q03.cpp
//
// Description
//

#include <iostream>

bool is_leap_year(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0)));
}

int main()
{
    int y;
    std::cin >> y;
    std::cout << is_leap_year(y) << std::endl;
    return 0;
}
