// Name: Oyedeji Oladayo Robert
// File: a06q04.cpp
//
// Description
// This program prompts user for the starting and ending coordinates
// of two lines and checks whether they are overlapping or not

#include <iostream>

int main()
{
    double a, b, c, d;

    std::cin >> a >> b >> c >> d;

    bool overlap = a <= d && c <= b;
 
    std::cout << overlap << std::endl;

    return 0;
}
