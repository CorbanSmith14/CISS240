// Name: Oladayo Robert Oyedeji
// File: a07q03.cpp
//
// Description
// This program computes the product of two polynomials and ignoring the 1
// infront of every element changing 1x to x.

#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

    std::cin >> a >> b >> c >> d >> e >> f;

    std::cout << '(';
    if (a != 0)
    {
        if (a != 1)
        {
            std::cout << a;
        }
        std::cout << "x^2";
    }
    if (b != 0)
    {
        if (a != 0)
        {
            std::cout << " + ";
        }
        if (b != 1)
        {
            std::cout << b;
        }
        std::cout << "x";
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
        if (d != 1)
        {
            std::cout << d;
        }
        std::cout << "x^2";
    }
    if (e != 0)
    {
        if (d != 0)
        {
            std::cout << " + ";
        }
        if (e != 1)
        {
            std::cout << e;
        }
        std::cout << "x";
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
        if (a * d != 1)
        {
            std::cout << a * d;
        }
        std::cout << "x^4";
    }
    if (a * e + b * d != 0)
    {
        if (a * d != 0)
        {
            std::cout << " + ";
        }
        if (a * e + b * d != 1)
        {
            std::cout << a * e + b * d;
        }
        std::cout << "x^3";
    }
    if (a * f + b * e + c * d != 0)
    {
        if (a * d != 0 || a * e + b * d != 0)
        {
            std::cout << " + ";
        }
        if (a * f + b * e + c * d != 1)
        {
            std::cout << a * f + b * e + c * d;
        }
        std::cout << "x^2";
    }
    if (b * f + c * e != 0)
    {
        if (a * d != 0 || a * e + b * d != 0 || a * f + b * e + c * d != 0)
        {
            std::cout << " + ";
        }
        if (b * f + c * e != 1)
        {
            std::cout << b * f + c * e;
        }
        std::cout << "x";
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
}
