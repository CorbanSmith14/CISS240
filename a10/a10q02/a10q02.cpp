// Name: Oladayo Robert Oyedeji
// File: a10q02.cpp
//
// Description
// This program prompts user for doubles and prints the number of
// terms entered, the running sum, the running average, the running
// minimum and the running maximum.

#include <iostream>
#include <iomanip>

int main()
{
    double n, sum, average, min, max;
    std::cin >> n;
    int count = 1;
    sum = n;
    max = n;
    min = n;
    average = sum / count; 
    if (n == 0)
    {
        std::cout << "no data entered" << std::endl;
    }
    else
    {
        std::cout << count << ' ' 
        << std::fixed << std::setprecision(5)
        << sum << ' '
        << average << ' '
        << min << ' '
        << max << std::endl;
    }

    while(n != 0)
    {
        std::cin >> n;
        if (n == 0) break;
        
        sum += n;
        count++;
        average = sum / count;
        
        if (n > max)
        {
            max = n;
        }
        if (n < min)
        {
            min = n;
        }
        std::cout << count << ' ' 
                  << std::fixed << std::setprecision(5)
                  << sum << ' '
                  << average << ' '
                  << min << ' '
                  << max << std::endl;
        
        
    }
    
    return 0;
}
