#include <iostream>

int main()
{
    bool even[11];

    for (int i = 0; i < 11; i++)
    {
        even[i] = (i % 2 == 0);
        std::cout << i << " is even: "
                  << (even[i] ? "true" : "false")
                  << '\n';
    }
    
    return 0;
}
