#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    /*int a;
    std::cin >> a;
    int x[8];
    int x_len = 0;

    while (a != 0)
    {
        int digit = a % 10;
        a /= 10;
        x[x_len] = digit;
        ++x_len;
        

    for (int i = 0; i < x_len; i++)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << '\n';
    
    */   
    
    srand ((unsigned int) time(NULL));
    const int  n = 8;
    int x[n];

    for (int i = 0; i < 8; i++)
    {
        x[i] = rand() % 101;
    }

    for (int i = 0; i < 8; i++)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << std::endl;

    for (int j = n - 2; j >= 0; j--)
    {
        for (int i = 0; i <= j; ++i)
        {
            if (x[i] > x[i + 1])
            {
                int t = x[i];
                x[i] = x[i + 1];
                x[i + 1] = t;
            }
        }
    }
    for (int i = 0; i < 8; i++)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << std::endl;
    
    
/*  srand ((unsigned int) time(NULL));
    const int n = 8;
    int prime[n] = {2, 3, 5, 7, 11, 13, 17, 19};
    int sum = 0, t;
    int v;
    std::cin >> v;

    

    for (int i = 0; i < n - 1; i++)
    {
        prime[i] = prime[i + 1];
        
    }
    prime[n - 1] = v;
    int max = prime[0];

    for (int i = 1; i < n; i++)
    {
        if (prime[i] > max)
        {
            max = prime[i];
        }
        
    }
    std::cout << '{';
    for (int i = 0; i < n; i++)
    {
        std::cout << prime[i] << (i < n - 1 ? ", ": "") ;
        
    }
    std::cout << '}';
    std::cout << '\n';
    
    /*
    std::cout << '{';
    for (int i = 0; i < 5; i++)
    {
        std::cout << prime[i] << (i < 4 ? ", ": "") ;
        
    }
    std::cout << '}';
    std::cout << '\n';
    
/*
    for (int i = 2; i <= 10; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i / j != 0)
            {
                is_prime = true;
            }
        }
        if (is_prime)
        {
            
        }
    }
*/
    return 0;
}
