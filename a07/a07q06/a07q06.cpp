// Name: Oyedeji Oladayo Robert
// File: a07q06.cpp
//
// Description
// The program prints out the possible winning move of a tictactoe game.

#include <iostream>

int main()
{
    const char PLAYER = 'X';
    const char ENEMY = 'O';
    const char SPACE = '-';
    char board00, board01, board02;
    char board10, board11, board12;
    char board20, board21, board22;
    std::cin >> board00 >> board01 >> board02
             >> board10 >> board11 >> board12
             >> board20 >> board21 >> board22;
    std::cout << "+-+-+-+\n"
              << '|' << board00 << '|' << board01 << '|' << board02 << "|\n"
              << "+-+-+-+\n"
              << '|' << board10 << '|' << board11 << '|' << board12 << "|\n"
              << "+-+-+-+\n"
              << '|' << board20 << '|' << board21 << '|' << board22 << "|\n"
              << "+-+-+-+\n";
    int row = -1, col = -1;
    if (board00 == SPACE && board01 == PLAYER && board02 == PLAYER)
    {
// Take (0, 0) for a winning row 0
        
        row = 0;
        col = 0;
    }
    else if (board00 == PLAYER && board01 == SPACE && board02 == PLAYER)
    {
// Take (0, 1) for a winning row 0
        row = 0;
        col = 1;
    }
// MORE CODE HERE
    else if (board00 == PLAYER && board01 == PLAYER && board02 == SPACE)
    {
        row = 0;
        col = 2;
    }
    else if (board10 == SPACE && board11 == PLAYER && board12 == PLAYER)
    {
        row = 1;
        col = 0;
    }
    else if (board10 == PLAYER && board11 == SPACE && board12 == PLAYER)
    {
        row = 1;
        col = 1;
    }
    else if (board10 == PLAYER && board11 == PLAYER && board12 == SPACE)
    {
        row = 1;
        col = 2;
    }
    else if (board20 == SPACE && board21 == PLAYER && board22 == PLAYER)
    {
        row = 2;
        col = 0;
    }
    else if (board20 == PLAYER && board21 == SPACE && board22 == PLAYER)
    {
        row = 2;
        col = 1;
    }
    else if (board20 == PLAYER && board21 == PLAYER && board22 == SPACE)
    {
        row = 2;
        col = 2;
    }
    else if (board00 == SPACE && board10 == PLAYER && board20 == PLAYER)
    {
        row = 0;
        col = 0;
    }
    else if (board00 == PLAYER && board10 == SPACE && board20 == PLAYER)
    {
        row = 1;
        col = 0;
    }
    else if (board00 == PLAYER && board10 == PLAYER && board20 == SPACE)
    {
        row = 2;
        col = 0;
    }
    else if (board01 == SPACE && board11 == PLAYER && board21 == PLAYER)
    {
        row = 0;
        col = 1;
    }
    else if (board01 == PLAYER && board11 == SPACE && board21 == PLAYER)
    {
        row = 1;
        col = 1;
    }
    else if (board01 == PLAYER && board11 == PLAYER && board21 == SPACE)
    {
        row = 2;
        col = 1;
    }
    else if (board02 == SPACE && board12 == PLAYER && board22 == PLAYER)
    {
        row = 0;
        col = 2;
    }
    else if (board02 == PLAYER && board12 == SPACE && board22 == PLAYER)
    {
        row = 1;
        col = 2;
    }
    else if (board02 == PLAYER && board12 == PLAYER && board22 == SPACE)
    {
        row = 2;
        col = 2;
    }
    else if (board00 == SPACE && board11 == PLAYER && board22 == PLAYER)
    {
        row = 0;
        col = 0;
    }
    else if (board00 == PLAYER && board11 == SPACE && board22 == PLAYER)
    {
        row = 1;
        col = 1;
    }
    else if (board00 == PLAYER && board11 == PLAYER && board22 == SPACE)
    {
        row = 2;
        col = 2;
    }
    else if (board02 == SPACE && board11 == PLAYER && board02 == PLAYER)
    {
        row = 0;
        col = 2;
    }
    else if (board02 == PLAYER && board11 == SPACE && board02 == PLAYER)
    {
        row = 1;
        col = 1;
    }
    else if (board02 == PLAYER && board11 == PLAYER && board02 == SPACE)
    {
        row = 0;
        col = 2;
    }
    std::cout << row << ' ' << col << std::endl;

    return 0;
}
