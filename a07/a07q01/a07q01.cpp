// Name: Oladayo Robert Oyedeji
// File: a07q01.cpp
//
// Description
// This program prints out column addition of 3 integers.

#include <iostream>
#include <cmath>

int main()
{
    int x, y;
    std::cin >> x >> y;
    int x1 = x % 10, x2 = x / 10 % 10, x3 = x / 100,
        y1 = y % 10, y2 = y / 10 % 10, y3 = y / 100,
        ans = x + y,
        ans1 = ans % 10, ans2 = ans /10 % 10,
        ans3 = ans / 100 % 10, ans4 = ans / 1000;

    if (x1 + y1 >= 10 && x2 + y2 + 1 >= 10)
    {
        std::cout << "  1 1\n";
    }
    else if (x1 + y1 >= 10)
    {
        std::cout << "    1\n";
    }
    else if (x2 + y2 >= 10)
    {
        std::cout << "  1\n";
    }

    if (x < 100 && x >= 10)
    {
        std::cout << "    " << x2 << " " << x1 << '\n';
    }
    else if (x < 10)
    {
        std::cout << "      " << x1 << '\n';
    }
    else if (x >= 100)
    {
        std::cout << "  " << x3 << " " << x2 << " " << x1 << '\n';
    }
//
    if (y < 100 && y >= 10)
    {
        std::cout << "+   " << y2 << " " << y1 << '\n';
    }
    else if (y < 10)
    {
        std::cout << "+     " << y1 << '\n';
    }
    else if (y >= 100)
    {
        std::cout << "+ " << y3 << " " << y2 << " " << y1 << '\n';
    }
    std::cout << "-------" << std::endl;

    if (ans < 10)
    {
        std::cout << "      " << ans << std::endl;
    }
    else if (ans < 100 && ans >= 10)
    {
        std::cout << "    " << ans2 << " " << ans1 << std::endl;
    }
    else if (ans >= 100 && ans < 1000)
    {
        std::cout << "  " << ans3 << " " << ans2 << " " << ans1 << '\n';
    }
    else if (ans >= 1000)
    {             
        std::cout << ans4 << " " << ans3 << " " << ans2 << " " << ans1 << '\n';
    }
    std::cout << "-------" << std::endl; 
    
    
    return 0;
}
