#include <iostream>
#include <cstdlib>


int main()
{
    int x[1000] = {0};
    int newvalue;
    int len = 5;
    for (int i = 0; i < len; ++i)
    {
        std::cin >> x[i];
    }
    
    std::cout << '[';
    for (int i = 0; i < len; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << ']';
    int index;
    std::cout << "index: ";
    std::cin >> index;
    
    std::cout << "value: ";
    std::cin >> newvalue;
    int storage;
    len++;
    for (int i = index; i < len; ++i)
    {
        storage = x[i];
        x[i] = newvalue;
        newvalue = storage;
    }
    std::cout << '[';
    for (int i = 0; i < len; ++i)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << ']';
    
    return 0;
}
    
