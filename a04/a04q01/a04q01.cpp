// Name: Oyedeji Oladayo Robert
// File: a04q01.cpp
//
// Description
// This program prompts a user for a, b, c and prints the solutions
// to the quadratic equation ax^2 + bx + c = 0. This program assumes
// that the polynomial ax^2 + bx + c has two real roots

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, b, c, d, x1, x2;

    std::cin >> a >> b >> c;

    d = sqrt(b * b - 4 * a * c);
    x1 = (-b - d) / (2 * a);
    x2 = (-b + d) / (2 * a);

    std::cout << std::fixed << std::setprecision(5)
              << x1 << ' ' << x2 << std::endl;
    
    return 0;
}
