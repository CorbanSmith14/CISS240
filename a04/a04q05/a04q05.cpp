// Name: Oyedeji Oladayo Robert
// File: a04q05.cpp
//
// Description
// This program prompts user for height, weight, thumbLength, skullRadius, classes,
// numFingers and prints the iq using the Sigmond Fried formula

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double height, weight, thumbLength, skullRadius, iq;
    int classes, numFingers;
    const double PI = 3.14159;

    std::cin >> height >> weight >> thumbLength >> skullRadius >> classes >> numFingers;

    iq = PI * skullRadius * skullRadius + (weight / (height + thumbLength)) * classes + double(5) / numFingers;

    std::cout << std::fixed << std::setprecision(2)
             << iq << std::endl;
    
    return 0;
}
