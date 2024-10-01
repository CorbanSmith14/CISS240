// Name: Oyedeji Oladayo Robert
// File: a05q03.cpp
//
// Description
// This program prompts a user for x, y, z for the position and the maximun
// distance the intercept should explode to disable the enemy missle and
// computes the distance of the position from (0, 0, 0) 
#include <iostream>
#include <cmath>

int main()
{
    double x, y, z, dist;

    std::cin >> x >> y >> z >> dist;

    bool _explode_ = sqrt(x * x + y * y + z * z) <= dist;

    std::cout << _explode_ << std::endl;
    
    return 0;
}
