// Name: Oladayo Robert Oyedeji
// File: a12q07.cpp
//
// Description
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int getNumPoints()
{
    int n;
    std::cin >> n;
    return n;
}

double randunit()
{
    double x = double(rand()) / RAND_MAX;
    return x;
}

bool pointIsInCircle(double x, double y)
{
    int area;
    if (x * x + y * y < 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void printRunningApproximation(int i, int inCircle)
{
    std::cout << std::left << std::setw(16) << i <<  std::setw(16)
              << std::left << inCircle << std::setw(16)<< double(inCircle) * 4 / i << '\n'; 
}

void printSummary(int n, int inCircle)
{
    std::cout << "The Pi-minator strikes again ...\n"
              << "Final approximation of pi: " << double(inCircle) * 4 / n
              << "\nNumber of points generated: " << n << '\n';
}

int main()
{
    srand((unsigned int) time(NULL));
    std::cout << std::fixed << std::setprecision(10);

    int n = getNumPoints();

    int inCircle = 0;

    for (int i = 1; i <= n; ++i)
    {
        double x = randunit();
        double y = randunit();

        if (pointIsInCircle(x, y))
        {
            ++inCircle;
        }

        printRunningApproximation(i, inCircle);
    }
    printSummary(n, inCircle);
    
    return 0;
}
