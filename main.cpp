#include <iostream>

int main()
{
    int x = 1, y = 2, z = 3;

    switch (x)
    {
        case y: std::cout << 'a';
        case y + 1: std::cout << 'b';
        case y + 2: std::cout << 'c';
        case y + z: std::cout << 'd';
        default: std::cout << 'e';
    }
    return 0;
}
