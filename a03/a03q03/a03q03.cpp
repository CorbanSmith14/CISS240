// Name: Oyedeji Robert Oladyo
// File: a03q03.cpp

#include <iostream>

int main()
{
    int plaintext;
    std::cin >> plaintext;

    int a, b, c, d, e;
    a = plaintext / 10000;
    b = plaintext / 1000 % 10;
    c = plaintext / 100 % 10;
    d = plaintext / 10 % 10;
    e = plaintext % 10;

    int a1, b1, c1, d1, e1;
    a1 = b;
    b1 = a;
    c1 = d;
    d1 = c;
    e1 = (e + 1) % 10;

    int ciphertext;
    ciphertext = (a1 * 10000) + (b1 * 1000) + (c1 * 100) + (d1 * 10) + e1;

    std::cout << plaintext << ' ' << ciphertext << std::endl;
    
    
    return 0;
}
