// Name: Oladayo Robert Oyedeji
// File: a11q06.cpp
//
// Description
// This program prompts a user for two integer value and
// prints the first occurence or the second integer int
// the first integer.

#include <iostream>

int main()
{
    int x[1000], y[1000];
    int x_len = 0;
    int y_len = 0;
    int index = -1;
    
    for (int i = 0; i < 1000; i++)
    {
        std::cin >> x[i];
        if (x[i] == -9999) break;
        x_len++;
    }
    
    for (int i = 0; i < 1000; i++)
    {
        std::cin >> y[i];
        if (y[i] == -9999) break;
        y_len++;
    }
    
    int i = 0;
    int j = 0;
    bool prev;
    while (j < y_len)
    {
        if (x[i] == y[j])
        {
            prev = true;
            if (j == 0)
            {
                prev = false;
            }
            if (!prev) index = i;
             
            if (j == y_len - 1)
            {
                break;
            }
            else if (x_len - i < y_len - j)
            {
                index = -1;
            }
            j++;
        }
        else 
        {
            i = i - j;
            j = 0;
            index = -1;
        }
        i++;
        if (i >= x_len) break;
    }
    std::cout << index << std::endl;
    
    return 0;
}
