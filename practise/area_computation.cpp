#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    double a, b;
    std::cout << "region: ";
    std::cin >> a >> b;
    double dx = double(b - a)/ n;
    double area = 0;

    for (double x = a; x < b; x += dx)
    {
        area += (1 / (x * x)) * dx;
    }

    std::cout << area << std::endl;
    
    return 0;
}
