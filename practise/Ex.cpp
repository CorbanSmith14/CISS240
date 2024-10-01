 #include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>

/*bool is_prime(int n)
{
    bool is_prime = true;
    for (int d = 2; d <= sqrt(n); d++)
    {
        if (n % d == 0) // d divides n
        {
            is_prime = false;
            return false;
        }
    }
    return true;
}
int square (int x)
{
    return x * x;
}
int main()
{
    /*
    int x, f;
    std::cin >> x >> f;
    int count = 0; 

    for (int n = x; n <= f; ++n)
    {
       
        if (is_prime(n))
        {
            count++;
            std::cout << n << ' ' << count << ' ' << double(count) / n << '\n';
        }
    }
*/
    int n;
    std::cin >> n;
    for (int p1 = 2; p1 <= n; ++n)
    {
        int p2 = n - p1;
        if(is_prime(p1) && is_prime(p2))
        {
            std::cout << p1 << ' ' << p2 << '\n';
        }
    }
    return 0;        
}
 
// pretty output;
// 1. setw  
// 2. set fill
// 3. left/right joint
// 4. scientific, fixed point note
// 5. precision

//Negative of
//binary plus
// unary plus
