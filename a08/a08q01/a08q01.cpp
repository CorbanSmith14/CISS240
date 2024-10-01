// Name: Oladayo Robert Oyedeji
// File: a08q01
//
// Description
// This program prompts a user for an integer n and prints
// a table of squares, cubes, and fourth powers from 1 to
// n. 

#include <iostream>
#include <iomanip>

int main()
{
    int n;
    std::cin >> n;

    std::cout << "       i      i^2      i^3      i^4\n"
              << "-------- -------- -------- --------\n";
    for (int i = 1; i <= n; i++)
    {
        std::cout << std::right << std::setw(8) << i
                  << std::right << std::setw(9) << i * i
                  << std::right << std::setw(9) << i * i * i
                  << std::right << std::setw(9) << i * i * i * i << '\n';
    }
}
