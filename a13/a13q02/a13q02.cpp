// Name: Oladayo Robert Oyedeji
// File: a13q02.cpp
//
// Description
//

#include <iostream>

void println(int x[], int len)
{
    std::cout << "[ ";
    for (int i = 0; i < len; i++)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << "]" << std::endl;
}

void insert(int x[], int & len, int size, int index, int newvalue)
{
    if (len < size)
    {
        int storage;
        if (index <= len) ++len;
        for (int i = index; i < len; i++)
        {
            storage = x[i];
            x[i] = newvalue;
            newvalue = storage;
        }
    }
}

void remove(int x[], int & len, int size, int index)
{
    
    if (len < size)
    {
        if (index <= len) --len;;
        for (int i = index; i < len; ++i)
        {
            x[i] = x[i + 1];
        }
    }
}

int main()
{
    const int SIZE = 5;
    int x[SIZE] = {0};
    int len = 0;
    int index = -1;
    int newvalue;
    println(x, len);

    while (1)
    {
        int option = 0;
        std::cout << "option (0-quit, 1-insert, 2-remove): ";
        std::cin >> option;
        if (option == 0) break;
        switch (option)
        {
            case 1:
                std::cout << "index: ";
                std::cin >> index;
                std::cout << "value: ";
                std::cin >> newvalue;
                insert(x, len, SIZE, index, newvalue);      
                break;
            case 2:
                std::cout << "index: ";
                std::cin >> index;
                remove(x, len, SIZE, index);
                break;
        }
        std::cout << std::endl;
        println(x, len);
    }
    return 0;
}
