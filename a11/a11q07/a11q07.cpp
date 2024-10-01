// Name: Oladayo  Robert Oyedeji
// File: a11q07.cpp
//
// Description
// This program prompts user for two sequence of numbers
// and prints the sorted by the second column in ascending
// number.

#include <iostream>

int main()
{
    int x[1000];
    double y[1000];
    int count = 0;

    for (int i = 0; i < 1000; i++)
    {
        std::cin >> x[i];
        if (x[i] == -1) break;
        std::cin >> y[i];
        count++;
        
    }

    for (int i = count - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (y[j] > y[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;

                double x = y[j];
                y[j] = y[j + 1];
                y[j + 1] = x;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << x[i] << ' ' << y[i] << '\n';
    }
        
    return 0;
}
