//-----------------------------------------------------------------------------
// Name: Oyedeji Oladayo Robert
// File: main.cpp
//-----------------------------------------------------------------------------
#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    int a, b, c, d, e, f, g, h, i;

    
    // put the digits of x into a, b, c, d, e, f, g, h, i
    a = x / 100000000;
    b = x / 10000000 % 10;
    c = x / 1000000 % 10;
    d = x / 100000 % 10;
    e = x / 10000 % 10;
    f = x / 1000 % 10;
    g = x / 100 % 10;
    h = x / 10 % 10;
    i = x % 10; 
    
    // print the 3-by-3 magic square
    std::cout << "+-+-+-+\n"
              << '|' << a << '|' << b << '|' << c << "|\n"
              << "+-+-+-+\n"
              << '|' << d << '|' << e << '|' << f << "|\n"
              << "+-+-+-+\n"
              << '|' << g << '|' << h << '|' << i << "|\n"
              << "+-+-+-+\n";

    
    bool rows_ok = (a + b + c == 15) && (d + e + f == 15) && (g + h + i == 15); // change true to the right expression
    
    // print result of rows check
    if (rows_ok)
    {
        std::cout << "rows: pass";
    }
    else
    {
        std::cout << "rows: fail";
    }
    std::cout << std::endl;

    
    bool cols_ok = (a + d + g == 15) && (b + e + h == 15) && (c + f + i == 15); // change true to the right expression
    // print result of columns check
    if (cols_ok)
    {
        std::cout << "columns: pass";
    }
    else
    {
        std::cout << "columns: fail";
    }
    std::cout << std::endl;

    
    bool diags_ok = (a + e + i == 15) && (c + e + g == 15); // change true to the right expression
    // print results of diagonals check
    if (diags_ok)
    {
        std::cout << "diagonals: pass";
    }
    else
    {
        std::cout << "diagonals: fail";
     }
    std::cout << std::endl;

    
    bool digits_ok = a != b && a != c && a != d && a != e && a != f && a != g &&  a != h && a != i &&
        b != c && b != d && b != e && b != f && b != g && b != h && b != i &&
        c != d && c != e && c != f && c != g && c != h && c != i &&
        d != e && d != f && d != g && d != h && d != i &&
        e != f && e != g && e != h && e != i &&
        f != g && f != h && f != i &&
        g != h && g != i &&
        h != i; // change true to the right expression
    // print result of digits check
    
    if (digits_ok)
    {
        std::cout << "digits: pass";
    }
    else
    {
        std::cout << "digits: fail"; 
    }
    std::cout << std::endl;

    
    bool is_magic_square = rows_ok && cols_ok && diags_ok && digits_ok; // change true to the right expression
    // print result of the last check
    if (is_magic_square)
    {
        std::cout << "magic: pass";
    }
    else
    {
        std::cout << "magic: fail";
    }
    std::cout << std::endl;
    
    return 0;
}
