// Name: Oladayo Robert Oyedeji
// File: a11q08.cpp
//
// Description
// This program uses the first 10,000 primes to determine
// whether the integer the user inputs is a prime or not
// or performs a prime factorization depending on the option
// the user inputs.

#include <iostream>
#include <cmath>

int main()
{
    std::cout << "building prime table of 100,000 prime ... \nprimes: 2, 3, 5, 7, 11, ..., 1299647, 1299653, 1299673, 1299689, 1299709\n";
    int y;
    int index_y = 0;
    const int n = 100000;
    int x[n];
    bool is_prime = false;
    int a = 0, b = 0;
    int i;
    bool prev;
    bool first;
    int count;
    int left;
    int right;
    
    while (1)
    {
        if (a == 0)
        {
            is_prime = false;
        }
        if (a == 2)
        {
            is_prime = true;
        }
        for (int k = 2; k <= sqrt(a); k++)
        {
            
            if (a % k == 0)
            {
                is_prime = false;
                break;
            }
            else
            {
                is_prime = true;
            }
        }
        if (is_prime)
        {
            x[b] = a;
            b++;
            
        }
        if (b >= n) break; 
        a++;
    }

    while (1)
    {
        std::cin >> y;
        if (y == -1) break;
        std::cin >> i;

        switch (i)
        {
            case 0:
                left = 0;
                right = n;
                index_y = 0;
                while (left <= right)
                {
                    int mid = (left + right) / 2;
                    
                    if (x[mid] == y)
                    {
                        index_y = mid + 1;
                        break;
                    }
                    else if (y < x[mid])
                    {
                        right = mid - 1;
                    }
                    else
                    {
                        left = mid + 1;
                    }
                }
                if (index_y != 0)
                {
                    std::cout << y << " is prime # " << index_y << std::endl;
                }
                else
                {
                    std::cout << y << " is not a prime" << std::endl;
                }
                break;
            case 1:
                prev = false;
                first = true;
                count = 0;

                std::cout << y << " = ";
                if (y == 1)
                {
                    std::cout << y ;
                }
                for (int b = 0; b < y; b++)
                {
                    
                    if (y % x[b] == 0)
                    {
                        if (!prev)
                        {
                            prev = true;
                            std::cout << x[b];
                        }
                        y /= x[b];
                        
                        count++;
                        if (y % x[b] != 0)
                        {
                            if (count != 1)
                            {
                                std::cout << "^" << count;
                            }
                            std::cout << ' ';
                            if (y != 1)
                            {
                                std::cout << '*';
                            }
                            std::cout << ' ';
                        }
                        b--;
                    }
                    else
                    {
                        count = 0;
                        prev = false;
                    }
                }
                std::cout << std::endl;
                break;
                
         
        }
    }
    
    return 0;
}
