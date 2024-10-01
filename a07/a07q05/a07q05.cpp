 // Name: Oladayo Robert Oyedeji
// File: a07q05.cpp
//
// Description
// This program computes the product of polynomials and changes the signs
// according to the coefficient

#include <iostream>
#include <cmath>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

    std::cin >> a >> b >> c >> d >> e >> f;

    std::cout << '(';
    // ax^2 + bx + c
    // ax^2
    if (a == 0 && b == 0 && c == 0)
    {
        std::cout << 0;
    }
    else if (a != 0)
    {
        if (abs(a) != 1)
        {
            std::cout << a;
        }
        std::cout << "x^2";
    }
    // bx
    if (b != 0)
    {
        if (a != 0)
        {
            if (b > 0)
            {
                std::cout << " + ";
            }
            else if (b < 0)
            {
                std::cout << " - ";
            }
        }
        else if (b < 0)
        {
            std::cout << "-";
        }
        
        if (abs(b) != 1)
        {
            std::cout << abs(b);
        }
        std::cout << "x";
        
        
        // c
        if (c != 0)
        {
            if (a != 0 || b != 0)
            {
                if (c > 0)
                {
                    std::cout << " + ";
                }
                else if (c < 0)
                {
                    std::cout << " - ";
                }
            }
            else if (c < 0)
            {
                std::cout << "-";
            }
            
            std::cout << abs(c);
        }
    }
    std::cout << ")(";

    if (d == 0 && e == 0 && f == 0)
    {
        std::cout << 0;
    }
    else if (d != 0) 
    {
        if (abs(d) != 1)
        {
            std::cout << d;
        }
        std::cout << "x^2";
    }
    if (e != 0)
    {
        if (d != 0)
        {
            if (e > 0)
            {
                std::cout << " + ";
            }
            else if (e < 0)
            {
                std::cout << " - ";
            }
        }
        else if (e < 0)
        {
            std::cout << "-";
        }
        
        if (abs(e) != 1)
        {
            std::cout << abs(e);
        }
        std::cout << "x";
    }
    if (f != 0)
    {
        if (d != 0 || e != 0)
        {
            if (f > 0)
            {
                std::cout << " + ";
            }
            else if (f < 0)
            {
                std::cout << " - ";
            }
        }
        else
        {
            if (f < 0)
            {
                std::cout << "-";
            }
        }
        std::cout << abs(f);
    }
    
    std::cout << ") = ";


    
    // ans
    if ((d == 0 && e == 0 && f == 0) || (a == 0 && b == 0 && c == 0))
    {
        std::cout << 0;
    }
    else
    {
        if (a * d != 0)
        {
            if (abs(a * d) != 1)
            {
                std::cout << a * d;
            }
            std::cout << "x^4";
        }
        if (a * e + b * d != 0)
        {
            if (a * d != 0)
            {
                if (a * e + b * d > 0)
                {
                    std::cout << " + ";
                }
                else if (a * e + b * d < 0)
                {
                    std::cout << " - ";
                }
            }
            else if (a * e + b * d < 0)
            {
                std::cout << "-";
            }
            
            if (abs(a * e + b * d) != 1)
            {
                std::cout << abs(a * e + b * d);
            }
            std::cout << "x^3";
        }
        if (a * f + b * e + c * d != 0)
        {
            if (a * d != 0 || a * e + b * d != 0)
            {
                
                if (a * f + b * e + c * d > 0)
                {
                    std::cout << " + ";
                }
                else if (a * f + b * e + c * d < 0)
                {
                    std::cout << " - ";
                }
            }
            else if (a * f + b * e + c * d < 0)
            {
                std::cout << "-";
            }
            
            if (abs(a * f + b * e + c * d) != 1)
            {
                std::cout << abs(a * f + b * e + c * d);
            }
            std::cout << "x^2";
        }
        if (b * f + c * e != 0)
        {
            if (a * d != 0 || a * e + b * d != 0 || a * f + b * e + c * d != 0)
            {
                if (b * f + c * e > 0)
                {
                    std::cout << " + ";
                }
                else if (b * f + c * e < 0)
                {
                    std::cout << " - ";
                }
            }
            else
            {
                if (b * f + c * e < 0)
                {
                    std::cout << "-";
                }
            }
            if (abs(b * f + c * e) != 1)
            {
                std::cout << abs(b * f + c * e);
            }
            std::cout << "x";
        }
        if (c * f != 0)
        {
            if (a * d != 0 || a * e + b * d != 0 || a * f + b * e + c * d != 0 || b * f + c * e != 0)
            {
                if (c * f > 0)
                {
                    std::cout << " + ";
                }
                else if (c * f < 0)
                {
                    std::cout << " - ";
                }
            }
            else if (c * f < 0)
            {
                std::cout << "-";
            }
            
            std::cout << abs(c * f);
        }
    }
    std::cout << std::endl;
}
