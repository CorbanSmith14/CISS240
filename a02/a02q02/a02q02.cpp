// Name: Oyedeji Robert Oladayo
// File: a02q02.cpp

#include <iostream>

int main()
{
    int age;
    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "You are " << age
              << " years old now. Next year you will be "
              << age + 1 << '.'
              << std::endl;
    return 0;
}
