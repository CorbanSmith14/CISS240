// Name: Oladayo Robert Oyedeji
// File: a12q05.cpp
//
// Description
//

#include <iostream>
#include <iomanip>

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

void print_calendar_month(int month, int year, int day_of_first)
{
   switch (month)
     {
        case 1:
            std::cout << "January ";
            break;
        case 2:
            std::cout << "February ";
            break;
        case 3:
            std::cout << "March ";
            break;
        case 4:
            std::cout << "April ";
            break;
        case 5:
            std::cout << "May ";
            break;
        case 6:
            std::cout << "June ";
            break;
        case 7:
            std::cout << "July ";
            break;
        case 8:
            std::cout << "August ";
            break;
        case 9:
            std::cout << "September ";
            break;
        case 10:
            std::cout << "October ";
            break;
        case 11:
            std::cout << "November ";
            break;
        case 12:
            std::cout << "December ";
            break;
    }
    std::cout << year << '\n' << "--------------------\nSu Mo Tu We Th Fr Sa" << std::endl;

    for (int i = 0; i < day_of_first; i++)
    {
        std::cout << "   ";
    }
    for (int i = 1; i <= days_in_month(month, year); i++)
    {
        std::cout << std::setw(2) << i << ' ';
        if ((day_of_first + i) % 7 == 0 )
        {
            std::cout << std::endl;
        }
    }
    if ((day_of_first + days_in_month(month, year)) % 7 != 0)
    {
        std::cout << std::endl;
    }
}

int main()
{
    int month, year, day_of_first;
    std::cin >> month >> year >> day_of_first;

    print_calendar_month(month, year, day_of_first);
    
    return 0;
}
