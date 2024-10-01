// Name: Oyedeji Oladayo Robert
// File: a05q01.cpp
//
// Description
// This program prompts a user for a, b, c which represents the length of the 3 sides of a triangle
// and determines if its a right angled triangle or not

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int a, b, c;
    
    std::cin >> a >> b >> c;
    
    bool is_rt_angle_triangle = (a * a + b * b == c * c);
    
    std::cout << is_rt_angle_triangle << '\n';
    
    return 0;
}
