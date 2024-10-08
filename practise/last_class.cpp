#include <iostream>

int main()
{
    int addr[1024];
    int n;
    std::cin >> n;
    

    for (int i = 0; i < n; i++)
    {
        std::cin >> addr[i];
    }

    int min_tot_dist = 10000;
    int best_addr;

    for (int i = 0; i < n; ++i)
    {
        int tot_dist = 0;
        for (int j = 0; j < n; ++j)
        {
            tot_dist = fabs(addr[j] - addr[i]);
        }
        if (i == 0)
        {
            min_tot_dist = tot_dist;
            best_addr = 0;
        }
        else if (tot_dist < min_tot_dist)
        {
            min_tot_dist = tot_dist;
            best_addr = i;     
        }
    }
    
    return 0;
}
