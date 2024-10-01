#include <iostream>

int main()
{
    int n;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << std::endl;

    std::cout << " d  " << n << "      " << n - 1 << '\n'
              << "-- x  = " << n << "x" << '\n'
              << "dx" << std::endl;
    
    return 0;
}
