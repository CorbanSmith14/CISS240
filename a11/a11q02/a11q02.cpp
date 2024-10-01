// Name: Oladayo Robert Oyedeji
// File: a11q02.cpp
//
// Description
// This program prompts a user for 10 doubles and a window
// size specified by the user and computes the moving average.

#include <iostream>
#include <iomanip>

int main()
{
    int wind_size;
    double a[10], x[10];

    for (int i = 0; i < 10; i++)
    {
        std::cin >> a[i];
    }
    std::cin >> wind_size;

    for (int i = 0; i < 10; i++)
    {
        x[i] = a[i];
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (i >= wind_size - 1)
        {
            double sum = 0;
             
            for (int j = i + 1 - wind_size; j <= i; ++j)
            {
                sum += x[j];
            }
            a[i] = sum / wind_size;
        }
        std::cout << std::fixed << std::setprecision(4) << a[i] << ' ';
    }
    std::cout << std::endl;
    
    
    return 0;
}
