#include <iostream>
#include <cmath>

int main()
{
    const int DINING_HALL = 0;
    const int BEDROOM = 1;
    const int ARMORY = 2;
    const int LIBARY = 3;
    int pos = 0;
    char option;
    for (int i = 0; i < 5; i++)
    {

        switch (pos)
        {
            case DINING_HALL:
                std::cout << "you are now in the dining hall\n";
                std::cin >> option;
                if (option == 'S')
                {
                    pos = 1;
                } 
                else if (option == 'N')
                {
                    pos = 2;
                }
                break;
            case BEDROOM:
                std::cout << "you are now in the bedroom\n";
                std::cin >> option;
                if (option == 'N') pos = DINING_HALL;
                else if (option = 'S') pos = LIBARY;
                break;
            case ARMORY:
                std::cout << "you are now in the armory\n";
                std::cin >> option;
                if(option == 'E') pos = DINING_HALL;
                else if (option == 'W') pos = BEDROOM;
                else if (option == 'S') pos = LIBARY;
                break;
            case LIBARY:
                std::cout << 
        }
    }
    std::cout << "pos: " << pos << std::endl;
    return 0;
}
