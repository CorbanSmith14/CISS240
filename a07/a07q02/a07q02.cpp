// Name: Oladayo Robert Oyedeji
// File: a07q02.cpp
//
// Description
// This program computes the product of two polynominials and not including zeros in the output.


#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

    std::cin >> a >> b >> c >> d >> e >> f;

    std::cout << '(';
    if (a != 0)
    {
        std::cout << a << "x^2";
    }
    if (b != 0)
    {
        if (a != 0)
        {
            std::cout << " + ";
        }
        std::cout << b << "x";
    }
    if (c != 0)
    {
        if (a != 0 || b != 0)
        {
            std::cout << " + ";
        }
        std::cout << c;
    }
    std::cout << ")(";
    if (d != 0) 
    {
        std::cout << d << "x^2";
    }
    if (e != 0)
    {
        if (d != 0)
        {
            std::cout << " + ";
        }
        std::cout << e << "x";
    }
    if (f != 0)
    {
        if (d != 0 || e != 0)
        {
            std::cout << " + ";
        }
        std::cout << f;
    }
    
    std::cout << ") = ";
    if (a * d != 0)
    {       
        std::cout << a * d << "x^4";
    }
    if (a * e + b * d != 0)
    {
        if (a * d != 0)
        {
            std::cout << " + ";
        }
        std::cout << (a * e + b * d) << "x^3";
    }
    if (a * f + b * e + c * d != 0)
    {
        if (a * d != 0 || a * e + b * d != 0)
        {
            std::cout << " + ";
        }
        std::cout << (a * f + b * e + c * d) << "x^2";
    }
    if (b * f + c * e != 0)
    {
        if (a * d != 0 || a * e + b * d != 0 || a * f + b * e + c * d != 0)
        {
            std::cout << " + ";
        }
        std::cout << (b * f + c * e) << "x";
    }
    if (c * f != 0)
    {
        if (a * d != 0 || a * e + b * d != 0 || a * f + b * e + c * d != 0 || b * f + c * e != 0)
        {
            std::cout << " + ";
        }
        std::cout << (c * f);
    }
    std::cout << std::endl;
    
    return 0;
}
