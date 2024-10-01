#include <iostream>

int main()
{

    int x;
    std::cin >> x ;

    //numbers of digits of x compuation....

    int n =0 ; //numbers of digits of x
    int old_x = x;

    if (x == 0)
        n = 1;
    else
    {
        for (; x != 0;)
        {
            std::cout << "Top.....\n" ;
            std::cout << x << ' ' << n << '\n';
            ++n;
            x /= 10;
            std::cout << x << ' '<< n << '\n';
            std::cout << "bottmom....\n\n";
        }

    }
        
    std::cout << " final.... " << n << '\n';
    

    
    
    return 0;
}
