// Name: Oladayo Robert Oyedeji
// File: a11q03.cpp
//
// Description
// This program reads the value in an array at index j
// and then prints the number of times this value appears
//consecutively in the array starting at index j going
// to the right.

#include <iostream>

int main()
{
    const int SIZE = 10;
    int a[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> a[i];
    }
    
    int j = 0;
    std::cin >> j;

    int count = 1;
    int max_c = count;
    for (int i = j; i < SIZE; ++i)
    {
        if (a[i + 1] == a[i])
        {
            count++;
        }
        else
        {
            count = 1;
            break;
        }
        
        if (count > max_c)
        {
            max_c = count;
        }
    }

    std::cout << max_c << std::endl;
    
    return 0;
}
