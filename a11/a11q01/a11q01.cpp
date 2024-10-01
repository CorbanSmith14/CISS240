// Name: OLadayo Robert Oyedeji
// File: a11q01.cpp
//
// Description
// This program prompts a user for an index value and
// an integer value and stores it in the index of an array.

#include <iostream>

int main()
{
    int x[10] = {0};

    int i, v;
    

    while(1)
    {
        std::cout << "index and new value: ";
        std::cin >> i;
        if (i == -1) break;
        std::cin >> v;
        
        x[i] = v;
        std::cout << "array: ";
        
        for (int a = 0; a < 10; a++)
        {
            std::cout << x[a] << ' ';
        }
        std::cout << std::endl;
    }
    
    
    return 0;
}
