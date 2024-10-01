#include <iostream>

bool is_valid_position_at_in_WEST_direction(int turn, Board board, int row, int col)
{
    bool valid = false;
    char piece;
    char op_piece;
    if (turn == 0)
    {
        piece = BLACK_PIECE;
        op_piece = WHITE_PIECE;
    }
    else
    {
        piece = WHITE_PIECE;
        op_piece = BLACK_PIECE;
    }
    if (board[row][col + 1] != piece && board[row][col] == ' ')
    {
        for (int j = col + 1; j < BOARD_SIZE; j++)
        {
            if (board[row][j] != op_piece)
            {
                if (board[row][j] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[row][j] == piece)
                {
                    valid = true;
                    break;
                }
            }
        }
    }
    else
    {
        valid = false;
    }

    return valid;
}

bool is_valid_position_at_in_EAST_direction(int turn, Board board, int row, int col, char s[])
{
    bool valid;
    char piece;
    char op_piece;
    if (turn == 0)
    {
        piece = BLACK_PIECE;
        op_piece = WHITE_PIECE;
    }
    else
    {
        piece = WHITE_PIECE;
        op_piece = BLACK_PIECE;
    }
    if (board[row][col - 1] != piece && board[row][col] == ' ')
    {
        for (int j = col - 1; j >= 0; j--)
        {
            if (board[row][j] != op_piece)
            {
                if (board[row][j] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[row][j] == piece)
                {
                    valid = true;
                    break;
                }
            }
            if (get_row(s) == row && get_col(s) == col)
            {
                board[row][j] = piece;
            }
        }
    }
    else
    { 
        valid = false;
    }

    return valid;
}

bool is_valid_position_at_in_SOUTH_direction(int turn, Board board, int row, int col)
{
    bool valid = false;
    char piece;
    char op_piece;
    if (turn == 0)
    {
        piece = BLACK_PIECE;
        op_piece = WHITE_PIECE;
    }
    else
    {
        piece = WHITE_PIECE;
        op_piece = BLACK_PIECE;
    }
    if (board[row + 1][col] != piece && board[row][col] == ' ')
    {
        for (int j = row + 1; j < BOARD_SIZE; j++)
        {
            if (board[j][col] != op_piece)
            {
                if (board[j][col] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][col] == piece)
                {
                    valid = true;
                    break;
                }
            }
        }
    }
    else
    {
        valid = false;
    }

    return valid;
}

bool is_valid_position_at_in_NORTH_direction(int turn, Board board, int row, int col)
{
    bool valid = false;
    char piece;
    char op_piece;
    if (turn == 0)
    {
        piece = BLACK_PIECE;
        op_piece = WHITE_PIECE;
    }
    else
    {
        piece = WHITE_PIECE;
        op_piece = BLACK_PIECE;
    }
    if (board[row - 1][col] != piece && board[row][col] == ' ')
    {
        for (int j = row - 1; j >= 0; j--)
        {
            if (board[j][col] != op_piece)
            {
                if (board[j][col] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][col] == piece)
                {
                    valid = true;
                    break;
                }
            }
        }
    }
    else
    {
        valid = false;
    }

    return valid;
}

bool is_valid_position_at_in_DIAGONAL_direction(int turn, Board board, int row, int col)
{
    bool valid = false;
    char piece;
    char op_piece;
    if (turn == 0)
    {
        piece = BLACK_PIECE;
        op_piece = WHITE_PIECE;
    }
    else
    {
        piece = WHITE_PIECE;
        op_piece = BLACK_PIECE;
    }
    if (board[row + 1][col + 1] != piece && board[row][col] == ' ')
    {
        int i = col + 1;
        for (int j = row + 1; j < BOARD_SIZE; j++)
        {
            if (board[j][i] != op_piece)
            {
                if (board[j][i] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][i] == piece)
                {
                    valid = true;
                    break;
                }
            }
            i++;
        }
    }
    else
    {
        valid = false;
    }

    return valid;
}

bool is_valid_position_at_in_DIAGONALB_direction(int turn, Board board, int row, int col)
{
    bool valid;
    char piece;
    char op_piece;
    if (turn == 0)
    {
        piece = BLACK_PIECE;
        op_piece = WHITE_PIECE;
    }
    else
    {
        piece = WHITE_PIECE;
        op_piece = BLACK_PIECE;
    }
    if (board[row - 1][col - 1] != piece && board[row][col] == ' ')
    {
        int i = col - 1;
        for (int j = row - 1; j >= 0; j--)
        {
            if (board[j][i] != op_piece)
            {
                if (board[j][i] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][i] == piece)
                {
                    valid = true;
                    break;
                }
            }
            i--;
        }
       
    }
    else
    {
        valid = false;
    }

    return valid;
}

bool is_valid_position_at_in_A_DIAGONAL_direction(int turn, Board board, int row, int col)
{
    bool valid;
    char piece;
    char op_piece;
    if (turn == 0)
    {
        piece = BLACK_PIECE;
        op_piece = WHITE_PIECE;
    }
    else
    {
        piece = WHITE_PIECE;
        op_piece = BLACK_PIECE;
    }
    if (board[row + 1][col - 1] != piece && board[row][col] == ' ')
    {
        int i = col - 1;
        for (int j = row + 1; j < BOARD_SIZE; ++j)
        {
            if (board[j][i] != op_piece)
            {
                if (board[j][i] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][i] == piece)
                {
                    valid = true;
                    break;
                }
            }
            if (i == 0) break;
            i--;
        }
       
    }
    else
    {
        valid = false;
    }

    return valid;
}

bool is_valid_position_at_in_A_DIAGONALB_direction(int turn, Board board, int row, int col)
{
    bool valid;
    char piece;
    char op_piece;
    if (turn == 0)
    {
        piece = BLACK_PIECE;
        op_piece = WHITE_PIECE;
    }
    else
    {
        piece = WHITE_PIECE;
        op_piece = BLACK_PIECE;
    }
    if (board[row - 1][col + 1] != piece && board[row][col] == ' ')
    {
        int i = col + 1;
        for (int j = row - 1; j >= 0; --j)
        {
            if (board[j][i] != op_piece)
            {
                if (board[j][i] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][i] == piece)
                {
                    valid = true;
                    break;
                }
            }
            if (i >= BOARD_SIZE) break;
            i++;
        }
        
    }
    else
    {
        valid = false;
    }

    return valid;
}
