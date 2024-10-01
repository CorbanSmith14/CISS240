// Name: Oladayo Robert Oyedeji
// File: a10q03.cpp
//
// Description
// This is a simple text-based "game" where you control your avatar
// in a 2D world where the user moves through the x and y axis and
// finds a Gold pot at a random location.

#include <iostream>
#include <cstdlib>


int main()
{
    std::cout << "seed: ";
    int n = 0;
    std::cin >> n;
    srand(n);

    //
    std::cout << "gold hunting game!!!\n\n";
    int x = 0,
        y = 0,
        option;
    int gold_x = rand() % 5;
    int gold_y = rand() % 5;
    if (gold_x == x && gold_y == y)
    {
        gold_x = rand() % 5;
        gold_y = rand() % 5;
    }
    int moves = 0;

    while(x != gold_x || y != gold_y)
    {
        std::cout << "position of pot: x=" << gold_x << ", y=" << gold_y << '\n'
                  << "your position: x=" << x << ", y=" << y << '\n'
                  << "0-north, 1-south, 2-east, 3-west, 99-quit: ";
        std::cin >> option;
        
        std::cout << std::endl << std::endl;
        if (option == 99) break;
        
        moves++;
        
        switch (option)
        {
            case 0:
                if (y < 4) y++;
                break;
            case 1:
                if (y > 0) y--;
                break;
            case 2:
                if (x < 4) x++;
                break;
            case 3:
                if (x > 0) x--;
                break;
                default:
                    std::cout << "what the hell cant you read the instructions mother chode" << std::endl;
                    
        }
    }
    
    if (x == gold_x && y == gold_y)
    {
        std::cout << "you got the gold!" << std::endl;
    }
    std::cout << "number of moves: " << moves << std::endl;
    
    return 0;
}
