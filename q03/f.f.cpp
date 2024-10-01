#include <iostream>
#include <iomanip>

int main()
{
    int i = 135792468;
    int k = 0;
    for (int j = 1; j <= 1000000; j *= 10)
    {
        k = k + i / j % 10;
    }
    std::cout << k << std::endl;
    return 0;
}
