#include <iostream>
#include <cmath>


int main()
{
    int h;

    std::cin >> h;

    int x = h * 2 - 1;
    for (int i = h; i > 0; i--)
    {
        
        for (int j = i; j > 0; j--)
        {
            std::cout << ' ';
        }
        for (int j = 0; j < x; j++)
        {
            std::cout << '*';
        }
        std::cout << std::endl;
        x += 2;
    }
    return 0;
}
