// Name: Oladayo Robert Oyedeji
// File: a12q02.cpp
//
// Description
// 

#include <iostream>
#include <iomanip>
#include <cmath>

bool isprime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int x = 2; x <= sqrt(n); x++)
    {
        if (n % x == 0)
        {
            return false;
        }
    }
    return true;
}



int main()
{
    int A, B, C, N,
        max = -1,
        index_A = 0,
        index_B = 0,
        index_C = 0;
    

    std::cin >> A >> B >> C >> N;

    for (int a = 1; a <= A; ++a)
    {
        for (int b = 1; b <= B; ++b)
        {
            for (int c = 1; c <= C; ++c)
            {
                int count = 0;
                int i_A = 0;
                int i_B = 0;
                int i_C = 0;
                for (int x = 0; x <= N; ++x)
                {
                    if (isprime(a * x * x + b * x + c))
                    {
                        count++;
                        i_A = a;
                        i_B = b;
                        i_C = c;
                    }
                }

                std::cout << std::setw(5) << a << "x ^ 2 +"
                          << std::setw(5) << b << "x +"
                          << std::setw(5) << c << ":"
                          << std::setw(5) << count << '\n';
                if (count > max)
                {
                    max = count;
                    index_A = i_A;
                    index_B = i_B;
                    index_C = i_C;
                }
            }
        }
    }
    
    std::cout << "largest\n"
              << std::setw(5) << index_A << "x ^ 2 +"
              << std::setw(5) << index_B << "x +"
              << std::setw(5) << index_C << ":"
              << std::setw(5) << max << '\n';
    
    return 0;
}
