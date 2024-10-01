#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cstdio>

int mystrlen(char s[])
{
    int len = 0;

    for (int i = 0; i < 1024; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }
        ++len;
        //std::cout << s[i] << ' ' << len << '\n';
    }
    //std::cout << len << '\n';
    return len;
}

int cube(int x)
{
    return x * x * x;
}

double mypow(double x, int y)
{
    double pow = 1;

    for (int i = 0; i < y; i++)
    {
        pow *= x;
    }
    return pow;
}

double mysin(double x)
{
    return x - (1.0/6) * x * x * x + (1.0/120) * x * x * x * x * x;
}

int main()
{
    char s[1024] = "hello wor5ld\032r42r2rr23rf2fr2f2r";
    int len = mystrlen(s);

    for (int i = 0; i < len; ++i)
    {
        if ('a' <= s[i] && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
        }
    }
    std::cout << mystrlen(s) << '\n';

    std::cout << strlen(s) << '\n';

    std::cout << cube(2) << '\n';

    std::cout << mypow(2.3, 3) << '\n';

    std::cout << 
        
    return 0;
}
