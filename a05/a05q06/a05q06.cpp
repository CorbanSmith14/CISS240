// Name: Oyedeji Oladayo Robert
// File: a05q06.cpp
//
// Description
// This program prompts a user for the row and column of a dugeom-type game and
// assumes the position to check if it is in a special position or not
#include <iostream>

int main()
{
    int row  , column;
    std::cin >> row >> column;

    bool work = 0 <= row && row <= 7 && 0 <= column && column <= 9 && (1 > row || row > 2 || 2 > column || column > 8) && (5 > row || row > 6 || 4 > column || column > 7);

    std::cout << work << std::endl;
}
