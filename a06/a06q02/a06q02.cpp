// Name: Oyedeji Oladayo Robert
// File: a06q02.cpp
//
// Description
// The program prompts the user for an input and gets
// the year month and day and prints if it is valid or not

#include <iostream>
#include <cmath>

int main ()
{
    int year, month, day, input;
    std::cin >> input;

    year = input / 10000;
    month = input / 100 % 100;
    day = input % 100;
    
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        if (month == 2)
        {
            if (day <= 29)
            {
                std::cout << "correct";
            }
            else
            {
                std::cout << "incorrect";
            }
        }
        else if (month % 2 == 1 && month <= 7 || month % 2 == 0 && month > 7)
        {
            if (day == 31)
            {
                std::cout << "correct";
            }
            else
            {
                std::cout << "incorrect";
            }
        }
        else
        {
            if (day == 30)
            {
                std::cout << "correct";
            }
            else
            {
                std::cout << "incorrect";
            }
        } 
        
    }
    else 
    {
        if (month == 2)
        {
            if (day < 29)
            {
                std::cout << "correct";
            }
            else
            {
                std::cout << "incorrect";
            }
        }
        else if (month % 2 == 1 && month <= 7 || month % 2 == 0 && month > 7)
        {
            if (day <= 31)
            {
                std::cout << "correct";
            }
            else
            {
                std::cout << "incorrect";
            }
        }
        else
        {
            if (day <= 30)
            {
                std::cout << "correct";
            }
            else
            {
                std::cout << "incorrect";
            }
        }
    }
    std::cout << std::endl;
    
    return 0;
}
