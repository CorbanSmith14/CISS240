// Name: Oyedeji Robert Oladayo
// File:

#include <iostream>
const char VERS[] = "0.1";
const int BLACK = 0;
const int WHITE = 1;
const int BOARD_SIZE = 8;
const char BLACK_PIECE = '@';
const char WHITE_PIECE = '0';

typedef char Board [BOARD_SIZE][BOARD_SIZE];

// int turn = 0;
// int valid_row[1000];
// int valid_col[1000];
// int valid_len;
Board board;
    


void help();
void play();
void init(char [BOARD_SIZE][BOARD_SIZE]);
bool is_valid_position_at_in_WEST_direction(int turn, Board board, int row, int col);
bool is_valid_position_at_in_EAST_direction(int turn, Board board, int row, int col);
bool is_valid_position_at_in_SOUTH_direction(int turn, Board board, int row, int col);
bool is_valid_position_at_in_NORTH_direction(int turn, Board board, int row, int col);
bool is_valid_position_at_in_SOUTHEAST_direction(int turn, Board board, int row, int col);
bool is_valid_position_at_in_NORTHWEST_direction(int turn, Board board, int row, int col);
bool is_valid_position_at_in_SOUTHWEST_direction(int turn, Board board, int row, int col);
bool is_valid_position_at_in_NORTHEAST_direction(int turn, Board board, int row, int col);
bool is_valid_position_at(int turn, Board board, int row, int col);


void get_valid_positions(int turn, Board board, int valid_row[], int valid_col[], int& valid_len);

void input(int turn ,bool valid, int valid_row[], int valid_col[], int valid_len, char s[]);
void draw(char [BOARD_SIZE][BOARD_SIZE]);
void capture_WEST(int turn, Board b, int row, int col);
void capture_EAST(int turn, Board b, int row, int col);
void capture_SOUTH(int turn, Board b, int row, int col);
void capture_NORTH(int turn, Board b, int row, int col);
void capture_SOUTHEAST(int turn, Board b, int row, int col);
void capture_NORTHWEST(int turn, Board b, int row, int col);
void capture_SOUTHWEST(int turn, Board b, int row, int col);
void capture_NORTHEAST(int turn, Board b, int row, int col);
//void capture(int row, int col);
void print_score(Board b);

int get_row(char[]);
int get_col(char[]);
char get_piece(int turn);
char get_op_piece(int turn);


//void test_draw();

int main()
{
    char option;
    

    //test_draw();
    while (1)
     {
        std::cout << "Welcome to Super Othello Version 0.1\nby Oyedeji Robert\n\n"
                  << "[?] Help\n"
                  << "[P/p] Play a new game\n"
                  << "[L/l] load a previous game\n"
                  << "[S/s] Setup the board\n"
                  << "[Q/q] Quit\n"
                  << "Enter option: ";
        std::cin >> option;

        if (option == 'q' || option == 'Q')break;
        
        switch (option)
        {
            case '?': help(); break;
            case 'P':
            case 'p': play(); break;
            case 'L':
            case 'l':
                std::cout << "\n*** ?: TO BE IMPLEMENTED ***\n\n";
                break;
            case 'S':
            case 's':
                std::cout << "\n*** ?: TO BE IMPLEMENTED ***\n\n";
                break;
            default:
                std::cout << "\nwhat the hell\n\n";
        }
    }
    
    std::cout << std::endl << "\nThanks for playing Super Othello Version 0.1\n";
    
    return 0;
}

void help()   
{
    std::cout << "\nThe official rules can be found at\n"
              << "http://enwikipedia.or/wiki/Reversi\n\n"
              << "The othello board is set up in the following manner\n\n"
              << "  ABCDEFGH\n"
              << " +--------+\n"
              << "1|        |1\n"
              << "2|        |2\n"
              << "3|        |3\n"
              << "4|   0@   |4\n"
              << "5|   @0   |5\n"
              << "6|        |6\n"
              << "7|        |7\n"
              << "8|        |8\n"
              << " +--------+\n"
              << "  ABCDEFGH\n\n"
              << "BLACK plays @ and WHITE playes 0. Players take turn in entering\n"
              << "moves. The first player to enter a move is BLACK. To place a @\n"
              << "at row 6 and column E, BLACK enters 6E. The result of the move \nis\n\n"
              << "  ABCDEFGH\n"
              << " +--------+\n"
              << "1|        |1\n"
              << "2|        |2\n"
              << "3|        |3\n"
              << "4|   0@   |4\n"
              << "5|   @@   |5\n"
              << "6|    @   |6\n"
              << "7|        |7\n"
              << "8|        |8\n"
              << " +--------+\n"
              << "  ABCDEFGH\n\n"
              << "Note that the WHITE piece at E5 is now a BLACK peice\n\n";
}


void play()
{
    int turn = 0;
    int valid_row[1000];
    int valid_col[1000];
    int valid_len;
    char s[100];
    

    init(board);
    while (1)
    {
        bool valid = false;
        
        draw(board);

        get_valid_positions(turn, board, valid_row, valid_col, valid_len);

        if (valid_len != 0)
        {
            input(turn, valid, valid_row, valid_col, valid_len, s);
        }
        else 
        {
            turn = (turn + 1) % 2;
            std::cout << turn << std::endl;
            get_valid_positions(turn, board, valid_row, valid_col, valid_len);
            std::cout << "length: " << valid_len << std::endl;
            if (valid_len != 0)
            {
                input(turn, valid, valid_row, valid_col, valid_len, s);
            }
            else
            {
                break;
            }
        }
       
        if (s[0] == 'q') break;

        board[get_row(s)][get_col(s)] = get_piece(turn);
        capture_SOUTHEAST(turn, board, get_row(s), get_col(s));
        capture_NORTHWEST(turn, board, get_row(s), get_col(s));
        capture_SOUTHWEST(turn, board, get_row(s), get_col(s));
        capture_NORTHEAST(turn, board, get_row(s), get_col(s));
        capture_WEST(turn, board, get_row(s), get_col(s));
        capture_EAST(turn, board, get_row(s), get_col(s));
        capture_SOUTH(turn, board, get_row(s), get_col(s));
        capture_NORTH(turn, board, get_row(s), get_col(s));
        
        turn = (turn + 1) % 2;
        
    }
    print_score(board)
}

void init(Board b)
{
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            b[i][j] = ' ';
        }
    }
    b[BOARD_SIZE / 2 - 1][BOARD_SIZE / 2 - 1] = WHITE_PIECE;
    b[BOARD_SIZE / 2 - 1][BOARD_SIZE / 2] = BLACK_PIECE;
    b[BOARD_SIZE / 2][BOARD_SIZE / 2 - 1] = BLACK_PIECE;
    b[BOARD_SIZE / 2][BOARD_SIZE / 2] = WHITE_PIECE;
}

void input(int turn, bool valid, int valid_row[], int valid_col[], int valid_len, char s[])
{
    while (!valid)
    {
        if (turn == 0)
        {
            std::cout << "BLACK ";
        }
        else
        {
            std::cout << "WHITE ";
        }
        
        std::cout << "turn: ";
        std::cin >> s;
        if (s[0] == 'q') break;

        bool valid_pos = false;
        
        for (int i = 0; i < valid_len; i++) 
        {
            if (valid_row[i] == get_row(s) && valid_col[i] == get_col(s))
            {
                valid_pos = true;
                break;
            }
        }
        
        if (s[2] == '\0' && get_col(s) <= 7 && get_row(s) <= 7 && board[get_row(s)][get_col(s)] == ' ' && valid_pos)
        {
            valid = true;
            break;
        }
        else
        {
            valid = false;
            std::cout << "Incorrect position\n";
        }
    }
}


int get_row(char s[])
{
    int row = s[1] - '1';
    return row;
}

int get_col(char s[])
{
    int col = s[0] - 'A';
    return col;
}

char get_piece(int turn)
{
    if (turn == 0)
    {
        return BLACK_PIECE;
    }
    else
    {
        return WHITE_PIECE;
    }
}

char get_op_piece(int turn)
{
    if (turn == 0)
    {
        return WHITE_PIECE;
    }
    else
    {
        return BLACK_PIECE;
    }
}

void draw(Board b)
{
    std::cout << "  ";
    for (char i = 'A'; i < BOARD_SIZE + 'A'; ++i)
    {
        std::cout << i;
    }
    std::cout << "\n +";

    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        std::cout << '-';
    }
    std::cout << "+\n";
    
    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        std::cout << i + 1 << '|';
        for (int j = 0; j < BOARD_SIZE; ++j)
        {
            std::cout << b[i][j];
        }
        std::cout << '|' << std::endl;
    }

    std::cout << " +";

    for (int i = 0; i < BOARD_SIZE; ++i)
    {
        std::cout << '-';
    }
    std::cout << "+\n";
    std::cout << "  ";
    for (char i = 'A'; i < BOARD_SIZE + 'A'; ++i)
    {
        std::cout << i;
    }
    std::cout << '\n';
    
}

bool is_valid_position_at_in_WEST_direction(int turn, Board board, int row, int col)
{
    bool valid = false;   
    
    if (board[row][col + 1] != get_piece(turn) && board[row][col] == ' ')
    {
        for (int c = col + 1; c < BOARD_SIZE; c++)
        {
            if (board[row][c] != get_op_piece(turn))
            {
                if (board[row][c] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[row][c] == get_piece(turn))
                {
                    valid = true;
                    break;
                }
            }
        }
    }
    
    return valid;
}

bool is_valid_position_at_in_EAST_direction(int turn, Board board, int row, int col)
{
    bool valid;
    if (board[row][col - 1] != get_piece(turn) && board[row][col] == ' ')
    {
        for (int c = col - 1; c >= 0; c--)
        {
            if (board[row][c] != get_op_piece(turn))
            {
                if (board[row][c] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[row][c] == get_piece(turn))
                {
                    valid = true;

                    break;
                }
            }
        }
    }
    
    return valid;
}

bool is_valid_position_at_in_SOUTH_direction(int turn, Board board, int row, int col)
{
    bool valid = false;
    if (board[row + 1][col] != get_piece(turn) && board[row][col] == ' ')
     {
        for (int r = row + 1; r < BOARD_SIZE; r++)
        {
            if (board[r][col] != get_op_piece(turn))
            {
                if (board[r][col] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[r][col] == get_piece(turn))
                {
                    valid = true;
                    break;
                }
            }
        }
    }
    
    return valid;
}

bool is_valid_position_at_in_NORTH_direction(int turn, Board board, int row, int col)
{
    bool valid = false;
    if (board[row - 1][col] != get_piece(turn) && board[row][col] == ' ')
     {
        for (int r = row - 1; r >= 0; r--)
        {
            if (board[r][col] != get_op_piece(turn))
            {
                if (board[r][col] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[r][col] == get_piece(turn))
                {
                    valid = true;
                    break;
                }
            }
        }
    }
   
    return valid;
}

bool is_valid_position_at_in_SOUTHEAST_direction(int turn, Board board, int row, int col)
{
    bool valid = false;
    if (board[row + 1][col + 1] != get_piece(turn) && board[row][col] == ' ')
    {
        for (int r = row + 1, c = col + 1; r < BOARD_SIZE && c < BOARD_SIZE; r++)
        {
            if (board[r][c] != get_op_piece(turn))
            {
                if (board[r][c] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[r][c] == get_piece(turn))
                {
                    valid = true;
                    break;
                }
            }
            c++;
        }
    }
    
    return valid;
}

bool is_valid_position_at_in_NORTHWEST_direction(int turn, Board board, int row, int col)
{
    bool valid = false;
    if (board[row - 1][col - 1] != get_piece(turn) && board[row][col] == ' ')
    {
        for (int r = row - 1, c = col - 1; r >= 0 && c >= 0; r--)
        {
            if (board[r][c] != get_op_piece(turn))
            {
                if (board[r][c] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[r][c] == get_piece(turn))
                {
                    valid = true;
                    break;
                }
            }
            c--;
        }
       
    }

    return valid;
}

bool is_valid_position_at_in_SOUTHWEST_direction(int turn, Board board, int row, int col)
{
    bool valid = false;
    if (board[row + 1][col - 1] != get_piece(turn) && board[row][col] == ' ')
    {
        int i = col - 1;
        for (int r = row + 1, c = col - 1; r < BOARD_SIZE && c >= 0; ++r)
        {
            if (board[r][c] != get_op_piece(turn))
            {
                if (board[r][c] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[r][c] == get_piece(turn))
                {
                    valid = true;
                    break;
                }
            }
            --c;
        }
       
    }
    
    return valid;
}

bool is_valid_position_at_in_NORTHEAST_direction(int turn, Board board, int row, int col)
{
    bool valid;
    if (board[row - 1][col + 1] != get_piece(turn) && board[row][col] == ' ')
    {
        int i = col + 1;
        for (int r = row - 1, c = col + 1; r >= 0 && c < BOARD_SIZE; --r)
        {
            if (board[r][c] != get_op_piece(turn))
            {
                if (board[r][c] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[r][c] == get_piece(turn))
                {
                    valid = true;
                    break;
                }
            }
            ++c;
        }
        
    }
    
    return valid;
}

bool is_valid_position_at(int turn, Board board, int row, int col)
{
    
    bool valid2 =  (is_valid_position_at_in_WEST_direction(turn, board, row, col) || is_valid_position_at_in_EAST_direction(turn, board, row, col)  || is_valid_position_at_in_NORTH_direction(turn, board, row, col) || is_valid_position_at_in_SOUTH_direction(turn, board, row, col) || is_valid_position_at_in_SOUTHEAST_direction(turn, board, row, col) || is_valid_position_at_in_NORTHWEST_direction(turn, board, row, col) || is_valid_position_at_in_SOUTHWEST_direction(turn, board, row, col) || is_valid_position_at_in_NORTHEAST_direction(turn, board, row, col));
       return valid2;
}

void get_valid_positions(int turn, Board board, int valid_row[], int valid_col[], int& valid_len)
{
    valid_len = 0;
    for (int row = 0; row < BOARD_SIZE; row++)
    {
        for (int col = 0; col < BOARD_SIZE; col++)
        {
             if (is_valid_position_at(turn, board, row, col))
             {
                 valid_row[valid_len] = row;
                 valid_col[valid_len] = col;
                 valid_len++;
             }
       
        }       
    } 
    
    for (int i = 0; i < valid_len; i++)
    {
        std::cout << char('A' + valid_col[i]) << valid_row[i] + 1 << ", ";
    }
    std::cout << std::endl;
        
}

void capture_WEST(int turn, Board board, int row, int col)
{
    bool valid = false;
    int last_col;
    if (board[row][col + 1] != get_piece(turn) && board[row][col] == get_piece(turn))
    {
        for (int j = col + 1; j < BOARD_SIZE; j++)
        {
            if (board[row][j] != get_op_piece(turn))
            {
                if (board[row][j] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[row][j] == get_piece(turn))
                {
                    valid = true;
                    last_col = j;
                    break;
                }
            }
        }
    }
    if (valid)
    {
        for (int j = col; j < last_col; j++)
        {
            board[row][j] = get_piece(turn);
        }
    }
}

void capture_EAST(int turn, Board b, int row, int col)
{
    bool valid = false;
    int last_col;
    if (board[row][col - 1] != get_piece(turn) && board[row][col] == get_piece(turn))
    {
        for (int j = col - 1; j >= 0; j--)
        {
            if (board[row][j] != get_op_piece(turn))
            {
                if (board[row][j] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[row][j] == get_piece(turn))
                {
                    valid = true;
                    last_col = j;
                    break;
                }
            }
        }
    }

    if (valid)
    {    
        for (int j = col; j > last_col; j--)
        {
            board[row][j] = get_piece(turn);
        }
    }
}

void capture_SOUTH(int turn, Board b, int row, int col)
{
    bool valid = false;
    int last_row;
    if (board[row + 1][col] != get_piece(turn) && board[row][col] == get_piece(turn))
    {
        for (int j = row + 1; j < BOARD_SIZE; j++)
        {
            if (board[j][col] != get_op_piece(turn))
            {
                if (board[j][col] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][col] == get_piece(turn))
                {
                    valid = true;
                    last_row = j;
                    break;
                }
            }
        }
    }

    if (valid)
    {
        for (int j = row; j < last_row; j++)
        {
            b[j][col] = get_piece(turn);
        }
    }
}


void capture_NORTH(int turn, Board b, int row, int col)
{
    bool valid = false;
    int last_row;
    if (board[row - 1][col] != get_piece(turn) && board[row][col] == get_piece(turn))
    {
        for (int j = row - 1; j >= 0; j--)
        {
            if (board[j][col] != get_op_piece(turn))
            {
                if (board[j][col] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][col] == get_piece(turn))
                {
                    valid = true;
                    last_row = j;
                    break;
                }
            }
        }
    }
    if (valid)
    {
        for (int j = row; j > last_row; j--)
        {
            b[j][col] = get_piece(turn);
        }
    }
}
void capture_SOUTHEAST(int turn, Board b, int row, int col)
{
    bool valid = false;
    int last_row, last_col;
    
    if (board[row + 1][col + 1] != get_piece(turn) && board[row][col] == get_piece(turn))
    {
        int i = col + 1;
        for (int j = row + 1; j < BOARD_SIZE; j++)
        {
            if (board[j][i] != get_op_piece(turn))
            {
                if (board[j][i] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][i] == get_piece(turn))
                {
                    valid = true;
                    last_row = j;
                    last_col = i;
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

    if (valid)
    {
        int i = col;
        for (int j = row; j < last_row || i < last_col; j++)
        {
            b[j][i] = get_piece(turn);
            i++;
        }
    }
    
}

void capture_NORTHWEST(int turn, Board b, int row, int col)
{
    bool valid = false;
    int last_row;
    int last_col;
    if (b[row - 1][col - 1] != get_piece(turn) && board[row][col] == get_piece(turn))
    {
        int i = col - 1;
        for (int j = row - 1; j >= 0 || i >= 0; j--)
        {
            if (b[j][i] != get_op_piece(turn))
            {
                if (b[j][i] == ' ')
                {
                    valid = false;
                    break;
                }
                if (b[j][i] == get_piece(turn))
                {
                    valid = true;
                    last_row = j;
                    last_col = i;
                    break;
                }
            }
            i--;
        }
       
    }
    if(valid)
    {
        int i = col;
        for (int j = row; j >= last_row || i >= last_col; j--)
        {
            b[j][i] = get_piece(turn);
            i--;
        }
    }
}

void capture_SOUTHWEST(int turn, Board b, int row, int col)
{
    bool valid;
    int last_row;
    int last_col;
    if (board[row + 1][col - 1] != get_piece(turn) && board[row][col] == get_piece(turn))
    {
        int i = col - 1;
        for (int j = row + 1; j < BOARD_SIZE; ++j)
        {
            if (board[j][i] != get_op_piece(turn))
            {
                if (board[j][i] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][i] == get_piece(turn))
                {
                    valid = true;
                    last_row = j;
                    last_col = i;
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
    if (valid)
    {
        int i = col;
        for (int j = row; j < last_row || i >= last_col; ++j)
        {
            b[j][i] = get_piece(turn);
            i--;
        }
    }
}


void capture_NORTHEAST(int turn, Board b, int row, int col)
{
    bool valid;
    int last_row;
    int last_col;
    if (board[row - 1][col + 1] != get_piece(turn) && board[row][col] == get_piece(turn))
    {
        int i = col + 1;
        for (int j = row - 1; j >= 0; --j)
        {
            if (board[j][i] != get_op_piece(turn))
            {
                if (board[j][i] == ' ')
                {
                    valid = false;
                    break;
                }
                if (board[j][i] == get_piece(turn))
                {
                    valid = true;
                    last_row = j;
                    last_col = i;
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

    if (valid)
    {
        int i = col;
        for (int j = row; j >= last_row || i < last_col; --j)
        {
            b[j][i] = get_piece(turn);
            i++;
        }
    }
}

void print_score(Board b)
{
    int count_black_piece = 0;
    int count_white_piece = 0;
    for (int row = 0; row < BOARD_SIZE; row++)
    {
        for (int col = 0; col < BOARD_SIZE; col++)
        {
            if (b[row][col] == BLACK_PIECE)
            {
               ++count_black_piece;
            }
            else if (b[row][col] == WHITE_PIECE)
            {
                ++count_white_piece;
            }
        }
    }

    std::cout << "The game is ended.\n"
              << "BLACK - " << count_black_piece
              << "\nWHITE - " << count_black_piece << '\n';

    if (count_black_piece > count_white_piece)
    {
        std::cout << "BLACK is the winner.";
    }
    else if (count_white_piece > count_black_piece)
    {
        std::cout << "WHITE is the winner.";
    }
    else
    {
        std::cout << "It's a draw.";
    }
    std::cout << "\n\n";
}
