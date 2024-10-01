#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

int main()
{
    int x;
    std::cin >> x;

    int n = 0;
    if (x == 0)
    {
        n = 1;
    }
    for (; x != 0;)
    {
        std::cout << "top ....\n";
        std::cout << x << ' ' << n << '\n';
        ++n;
        x = x / 10;
        std::cout << x << ' ' << n << '\n';
        std::cout << "bottom.....\n\n";
    }
    std::cout << "final ... " << x << ' ' << n << '\n';
/*  int n, x, num;
    std::cin >> n;

    for (int i = 1; i <= n; i *= 10)
        x = i;
    for (int i = 1; i <= n; i *= 10)
    {
        int a = n / i % 10;
        
        num += a * x;
        x /= 10;        
    }
    bool palendrone = (num - n == 0);
    std::cout << palendrone << std::endl;
*/
    return 0;
}
 
