// Name: Oladayo Robert Oyedeji
// File: a12q04.cpp
//
// Description
//

#include <iostream>

bool is_leap_year(int year)
{
    return ((year % 4 == 0) && (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0)));
}

int days_in_month(int month, int year)
{
    int d;
    switch(month)
    {
        case 2:
            if (is_leap_year(year))
                d = 29;
            else
                d = 28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            d = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            d = 30;
            break;
        default:
            std::cout << "invaid month" << std::endl;
    }
    return d;
}

int main()
{
    int m, y;
    std::cin >> m >> y;
    std::cout << days_in_month(m, y) << std::endl;
    
    return 0;
}
