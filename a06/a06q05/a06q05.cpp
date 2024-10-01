// Name: Oyedeji Oladayo Robert
// File: a06q05.cpp
//
// Description
// This program prompts the user for the coordinates and the size
// of two rectangles and prints whether they overlap or not
#include <iostream>

int main()
{
    double xa, xb, xc, xd, ya, yb, yc, yd, X1, Y1, X2, Y2;

    std::cin >> xa >> ya >> X1 >> Y1 >> xc >> yc >> X2 >> Y2;
    xb = xa + X1;
    yb = ya + Y1;
    xd = xc + X2;
    yd = yc + Y2;
    

    bool overlap = xa <= xd && xc <= xb && ya <= yd && yc <= yb;
    
    std::cout << overlap << std::endl;

    return 0;
}
