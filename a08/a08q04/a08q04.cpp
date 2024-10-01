// Name: Oladayo Robert Oyedeji
// File: a08q04.cpp
//
// Description
// This program prompts a user for an integer value n and then
// poses n multiplication problems to the user

#include <iostream>

int main()
{
    srand((unsigned int) time(NULL));

    int n, guess;
    int score = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = rand() % 10, b = rand() % 10;
        std::cout << a << " * " << b << " = ";
        std::cin >> guess;
        if (guess == a * b)
        {
            score++;
        }
    }
    std::cout << score << std::endl;
}
