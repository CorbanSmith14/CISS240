// Name: Oyedeji Oladayo Robert
// File: a04q04.cpp
//
// Description
// This program prompts user for doubles for a, b, A, c, d, B and n
// and assumes it is a system of equations in the form
// ax + by = A and cx + dy = B and prints the solution of x and y
// with n as its decimal point.

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, b, c, d, A, B, x, y, det;
    int n;

    std::cin >> a >> b >> A >> c >> d >> B >> n;

    det = a * d - b * c;
    x = (A * d - b * B) / det;
    y = (a * B - c * A) / det;

    std::cout << std::fixed << std::setprecision(n)
              << a << "x + " << b << "y = " << A << '\n'
              << c << "x + " << d << "y = " << B << '\n'
              << "solution: x = " << x << ", y = " << y << std::endl; 
    
    return 0;
}
