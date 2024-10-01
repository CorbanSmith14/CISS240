// Name: Oyedeji Oladayo Robert
// File: a06q03.cpp
//
// Description
// this prompts the user for a quadtric equation and solves
// for when its real or not real

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    if (b * b < 4 * a * c)
    {
        std::cout << std::fixed << std::setprecision(5)
                  << -b / (2 * a) << " - " << sqrt(4 * a * c - b * b) / (2 * a) << "i, "
                  << -b / (2 * a) << " + " << sqrt(4 * a * c - b * b) / (2 * a) << "i\n";
    }
    else
    {
        std::cout << std::fixed << std::setprecision(5)
                  << (-b - sqrt(b * b - 4 * a * c)) / 2 * a << ", "
                  << (-b + sqrt(b * b - 4 * a * c)) / 2 * a << '\n';
    }
    
    return 0;
}
