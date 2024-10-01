// Name: Oladayo Robert Oyedeji
// File: a09q02.cpp
//
// Description
// This program prompts a user for a month, year, and the day-of-week
// for the first day of the month and prints out a calendar month

#include <iostream>
#include <iomanip>

int main()
{
    int month, day, year, day_of_week;
    std::cin >> month >> year >> day_of_week;
    
    switch (month)
     {
        case 1:
            std::cout << "January ";
            day = 31;
            break;
        case 2:
            std::cout << "February ";
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            {
                day = 29;
            }
            else
            {
                day = 28;
            }
            break;
        case 3:
            std::cout << "March ";
            day = 31;
            break;
        case 4:
            std::cout << "April ";
            day = 30;
            break;
        case 5:
            std::cout << "May ";
            day = 31;
            break;
        case 6:
            std::cout << "June ";
            day = 30;
            break;
        case 7:
            std::cout << "July ";
            day = 31;
            break;
        case 8:
            std::cout << "August ";
            day = 31;
            break;
        case 9:
            std::cout << "September ";
            day = 30;
            break;
        case 10:
            std::cout << "October ";
            day = 31;
            break;
        case 11:
            std::cout << "November ";
            day = 30;
            break;
        case 12:
            std::cout << "December ";
            day = 31;
            break;
    }
    std::cout << year << '\n' << "--------------------\nSu Mo Tu We Th Fr Sa" << std::endl;

    for (int i = 0; i < day_of_week; i++)
    {
        std::cout << "   ";
    }
    for (int i = 1; i <= day; i++)
    {
        std::cout << std::setw(2) << i << ' ';
        if ((day_of_week + i) % 7 == 0 )
        {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;

    return 0;
}
