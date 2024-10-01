// Name: Oyedeji Oladayo Robert
// File: a04q03.cpp
//
// Discription
// This program prompts the user for a, b, c, d, e, f, c
// and assumes they are in the form (ax^2 + bx + c)(dx^2 + ex + f)
// and prints out their multiplication with the decimal point of n

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, b, c, d, e, f;
    int n;
    std::cin >> a >> b >> c >> d >> e >> f >> n;

    std::cout << std::fixed << std::setprecision(n)
              << '(' << a << "x^2 + " << b << "x + " << c << ")(" << d << "x^2 + " << e << "x + " << f << ") = "
              << a * d << "x^4 + " << a * e + b * d << "x^3 + " << a * f + b * e + c * d << "x^2 + " << b * f + c * e << "x + " << c * f << '\n';
    
    return 0;
}
