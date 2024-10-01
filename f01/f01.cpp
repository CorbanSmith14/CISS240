#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>


const int MAX_SIZE = 100;

void init(char world[100][100], int size);
void put_gold(char world[MAX_SIZE][MAX_SIZE], int size, int n);
void draw(char world[MAX_SIZE][MAX_SIZE], int size);
void move(int size, int &row, int &col);

void init(char world[100][100], int size)
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            world[row][col] = ' ';
        }
    }
}

void put_gold(char world[MAX_SIZE][MAX_SIZE], int size, int n)
{
    for (int i = 0; i < n; i++)
    {
        int r, c;
        do
        {
            r = rand() % size;
            c = rand() % size;
        } while (world[r][c] == 'G'); // If there's already gold, try again

        world[r][c] = 'G';
    }
}

void draw(char world[MAX_SIZE][MAX_SIZE], int size)
{
    std::cout << '+';
    for (int i = 0; i < size; i++)
        std::cout << '-';
    std::cout << "+\n";
    for (int row = 0; row < size; row++)
    {
        std::cout << '|';
        for (int col = 0; col < size; col++)
        {
            std::cout << world[row][col];
        }
        std::cout << "|\n";
    }
    std::cout << '+';
    for (int i = 0; i < size; i++)
    {
        std::cout << '-';
    }
    std::cout << "+\n";
}

void move(int size, int &row, int &col)
{
    switch (rand() % 4)
    {
    case 0:
        // move S
        row++;
        if (row == size)
            row = size - 1;
        break;

    case 1:
        // move N
        row--;
        if (row < 0)
            row = 0;
        break;

    case 2:
        // move E
        col++;
        if (col == size)
            col = size - 1;
        break;

    case 3:
        // move W
        col--;
        if (col < 0)
            col = 0;
        break;
    }
}

int main()
{
    srand((unsigned int)time(NULL));

    char world[MAX_SIZE][MAX_SIZE];

    while (1)
    {
        int size;
        std::cout << "size of the world: ";
        std::cin >> size;
        init(world, size);

        int num_steps;
        std::cout << "number of steps: ";
        std::cin >> num_steps;

        int n;
        std::cout << "number of gold pieces: ";
        std::cin >> n;

        put_gold(world, size, n);

        int robot_row = 0, robot_col = 0; // row and column of robot
        world[robot_row][robot_col] = 'R';

        int score = 0; // PART B: update score in the code below so that score
                       //         keeps track of the number of gold pieces
                       //         picked up by the robot.
                       // See PART B continuation below.
        for (int step = 1; step <= num_steps; step++)
        {
            draw(world, size);
            std::cout << "step #" << step << '\n';
            std::cout << "score:" << score << '\n';
            std::cout << std::endl;

            // PART C: Check if there are gold pieces left. If there are none,
            //         break the gold hunting loop.
            // [HINT: Count the number of times you see the character 'G'.]
            int count = 0;
            for (int r = 0; r < size; r++)
            {
                for (int c = 0; c < size; c++)
                {
                    if (world[r][c] == 'G')
                        count++;
                }
            }
            if (count == 0)
                break; // no gold left

            // Move the robot, incrementing the score if it lands on a
            // gold piece.
            // PART B: This is where you should update score.
            // [Hint: Before putting 'R' at the new position robot_row and robot_col
            // you should see if there's a 'G' at that position. If there is a 'G',
            // you should increment the score before overwriting 'G' and 'R'.]
            if (world[robot_row][robot_col] == 'G')
            {
                score++;
                world[robot_row][robot_col] = ' ';
            }
            move(size, robot_row, robot_col); // get new robot_row and robot_col
            world[robot_row][robot_col] = 'R';
        }
    }

    return 0;
}
