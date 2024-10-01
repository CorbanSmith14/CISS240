// Name: Oyedeji Oladayo Robert
// File: a05q02.cpp
//
// Description
// This program prompts the user for a, b and c and checks if they are in
// ascending order and prints the boolean value if it is ascending or not

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    bool is_ascending = (a <= b && b <= c);

    std::cout << is_ascending << std::endl;
    
    return 0;
}
