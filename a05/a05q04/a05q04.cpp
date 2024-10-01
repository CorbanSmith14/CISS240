// Name: Oyedeji Oladayo Robert
// File: a05q04.cpp
//
// Description
// This program prompts the user for 4 integers that represent time and set a
// boolean to true exactly when the time entereed is valid 

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int form, hrs, min, sec;

    std::cin >> form >> hrs >> min >> sec;
    
    bool valid = ((form == 1 && 0 <= hrs && hrs <= 23) || (form == 0 && 1 <= hrs && hrs <= 12)) && 0 <= min && min <= 60 && 0 <= sec && sec <= 60;

    std::cout << valid << std::endl;
    
    return 0;
}
