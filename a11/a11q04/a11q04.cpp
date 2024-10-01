// Name: Oladayo Robert Oyedeji
// File: a11q04.cpp
//
// Description
// This program computes the logic of a game called reversi
// but 1 dimensional.

#include <iostream>

int main()
{
    const int SIZE = 15;
    int a[SIZE];
    int s = 0;
    int end = 0;
    int first = 0;
    int count = 0;
    int countl = 0;

    for (int i = 0; i < SIZE; ++i)
    {
        std::cin >> a[i];
    }

    std::cout << "board: ";

    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << a[i];
    }
    std::cout << "\nindex to put a 1: ";
    std::cin >> s;

    if (a[s] == 0)
    {
        a[s] = 1;
    }

    for (int i = s + 1; i < SIZE; i++)
    {
        
        if (a[i] == 1)
        {
            end = i;
            break;
        }
    }

    for (int i = s - 1; i >= 0; --i)
    {
        
        if (a[i] == 1)
        {
            first = i;
            break;
        }
    }
    
    //std::cout << end << std::endl;
    for (int i = s + 1; i < end; i++)
    {
        if (a[i] == 0)break;

        if (a[i] == 2)
            count++;
    }

    for (int i = first + 1; i < s; ++i)
    {
        if (a[i] == 0)break;

        if (a[i] == 2)
            countl++;
    }
    
    if (count ==  end - s - 1)
    {
        for (int i = s + 1; i < end; i++)
        {
            a[i] = 1;
        }
    }

    if (countl ==  s - first - 1)
    {
        for (int i = first + 1; i < s; i++)
        {
            a[i] = 1;
        }
    }
    
    std::cout << "board: ";

    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << a[i];
    }
    std::cout << std::endl;
    
    return 0;
}
