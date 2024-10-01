// Name: Oladayo Robert Oyedeji
// File: a08q05.cpp
//
// Description
// This program prints out all possible 3-by-3 magic squares.

#include <iostream>

int main()
{
    int x = 123456789,
        y = 987654321;
    for (int v = x; v <= y; v++)
    {
        int a = v / 100000000,
            b = v / 10000000 % 10,
            c = v / 1000000 % 10,
            d = v / 100000 % 10,
            e = v / 10000 % 10,
            f = v / 1000 % 10,
            g = v / 100 % 10,
            h = v / 10 % 10,
            i = v % 10;
       
        
        
        bool rows_ok = (a + b + c == 15) && (d + e + f == 15) && (g + h + i == 15);                
        bool cols_ok = (a + d + g == 15) && (b + e + h == 15) && (c + f + i == 15); 
        bool diags_ok = (a + e + i == 15) && (c + e + g == 15);        
        bool digits_ok = (a * a) + (b * b) + (c * c) + (d * d) + (e * e) + (f * f) + (g * g) + (h * h) + (i * i) == 285;
        bool is_magic_square = rows_ok && cols_ok && diags_ok && digits_ok; 
        
        if (is_magic_square)
        {
            std::cout << "+-+-+-+\n"
                      << '|' << a << '|' << b << '|' << c << "|\n"
                      << "+-+-+-+\n"
                      << '|' << d << '|' << e << '|' << f << "|\n"
                      << "+-+-+-+\n"
                      << '|' << g << '|' << h << '|' << i << "|\n"
                      << "+-+-+-+\n";
        }
    }
    
    
    return 0;
}
