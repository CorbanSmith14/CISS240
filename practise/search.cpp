#include <iostream>
#include <cstdlib>
#include <cmath>

int main()
{
    srand(0);
    const int n = 1000;

    int x[n];
    int target;
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % n;
    }

    for (int j = n - 2; j >= 0; ++j)
    {
        for (int i = 0; i <= j; i++)
        {
            if (x[i] > x[i + 1])
            {
                int t = x[i];
                x[i] = x[i + 1];
                x[i + 1] = t;
            }
           
            
            
        }
    }
    
    
    std::cin >> target;
    
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        std::cout << left << ' ' << mid << ' ' << right << std::endl;
        if (x[mid] == target)
        {
            index = mid;
            break;
        }
        else if (target < x[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    std::cout << "it was at " << index << "bozo" << std::endl;
    
/*    srand(0);
    const int n = 1000000000;

    int x[n];

    for (int i = 0; i < n; ++i)
    {
        x[i] = rand() % n;
    }
    for (int i = 0; i < n; ++i)
    {
        std::cout << x[i] << ' ';
    }

    int target = rand() % n;
    std::cout << target << '\n';

    // linear
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == target)
        {
            index = i;
            break;
        }
    }
    std::cout << "target is at index: " << index << '\n';
/*
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (x[j] > x[j + 1])
            {
                int t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
*/    
    
    return 0;
}
