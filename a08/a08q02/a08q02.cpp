// Name: Oladayo Robert Oyedeji
// File: a08q02.cpp
//
// Description
// This program prompts a user for a start and an end and prints
// a table of squares, and cubes, and fourth powers from start to
// end.

#include <iostream>
#include <iomanip>

int main()
{
    int start, end;
    std::cin >> start >> end;

    std::cout << "         i       i^2       i^3       i^4\n"
              << " --------- --------- --------- ---------\n";
    for (int i = start; i <= end; i++)
    {
        std::cout << std::right << std::setw(10) << i
                  << std::right << std::setw(10) << i * i
                  << std::right << std::setw(10) << i * i * i
                  << std::right << std::setw(10) << i * i * i * i << '\n';
    }
}
