#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

int main()
{
    int n = 500;
    std::cin >> n;
    
    int max_size = 2 * n + 1;
    int ca[max_size] = {0};
    int t[max_size];
    ca[n] = 1;

    for (int i = 0; i < max_size; ++i)
    {
        if (ca[i] == 0)
            std::cout << ' ';
        else
            std::cout << 'X';
    }
    std::cout << std::endl;
    for (int time = 0; time < n; ++time)
    {
        t[0] = ca[0];
        t[max_size] = ca[max_size];
        for (int i = 1; i < max_size - 1; ++i)
        {
            if (ca[i - 1] == 0 && ca[i] == 0 && ca[i + 1] == 0)
            {
                t[i] = 0;
            }
            else if (ca[i - 1] == 0 && ca[i] == 0 && ca[i + 1] == 1)
            {
                t[i] = 1;
            }
            else if (ca[i - 1] == 0 && ca[i] == 1 && ca[i + 1] == 0)
            {
                t[i] = 0;
            }
            else if (ca[i - 1] == 0 && ca[i] == 1 && ca[i + 1] == 1)
            {
                t[i] = 1;
            }
            else if (ca[i - 1] == 1 && ca[i] == 0 && ca[i + 1] == 0)
            {
                t[i] = 1;
            }
            else if (ca[i - 1] == 1 && ca[i] == 0 && ca[i + 1] == 1)
            {
                t[i] = 0;
            }
            else if (ca[i - 1] == 1 && ca[i] == 1 && ca[i + 1] == 0)
            {
                t[i] = 1;
            }
            else if (ca[i - 1] == 1 && ca[i] == 1 && ca[i + 1] == 1)
            {
                t[i] = 0;
            }
        }

        for (int i = 1; i < max_size -1; ++i)
        {
            ca[i] = t[i];
        }
        for (int i = 0; i < max_size; ++i)
        {
            if (ca[i] == 0)
                std::cout << ' ';
            else
                std::cout << 'X';
        }
        std::cout << std::endl;
    }
    
    return 0;
}
