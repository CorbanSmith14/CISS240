// Name: Oladayo Robert Oyedeji
// File: a13q01.cpp
//
// Description
//

#include <iostream>
void println(int x[], int xSize)
{
    for (int i = 0; i < xSize; i++)
    {
        std::cout << x[i] << ' ';
    }
    std::cout << std::endl;
}
//------------------------------------------------------------------------
// Swap the values of x[i] and x[j]
// For instance if the array arr has values 9, 8, 7, 6, then on return
// from calling swap(arr, 1, 3), arr will have values 9, 6, 7, 8.
//------------------------------------------------------------------------
void swap(int x[], int i, int j)
{
    int t = x[i];
    x[i] = x[j];
    x[j] = t;
    
}
//------------------------------------------------------------------------
// Performs bubble sort algorithm on x[0], ..., x[xSize - 1] (in
// ascending order)
//------------------------------------------------------------------------
void bubbleSort(int x[], int xSize)
{
    for (int j = xSize - 2; j >= 0; --j)
    {
        for (int i = 0; i <= j; ++i)
        {
            if (x[i] > x[i + 1])
            {
                swap(x, i, i + 1);
            }
        }
    }
}

//------------------------------------------------------------------------
// Returns index where target appears in array x. If target is not found,
// -1 is returned.
//------------------------------------------------------------------------
int binarySearch(int x[], int xSize, int target)
{
    int lower = 0;
    int upper = xSize - 1;
    int index = -1;
    while (lower <= upper)
    {
        int mid = (upper + lower) / 2;
        if (x[mid] < target)
        {
            lower = mid + 1;
        }
        else if (x[mid] > target)
        {
            upper = mid - 1;
        }
        else if (x[mid] == target)
        {
            index = mid;
            break;
        }
    }
    return index;
}
int main()
{
    //--------------------------------------------------------------------
    // Declare and prompt user for values to be stored in array x
    //--------------------------------------------------------------------
    const int SIZE = 8;
    int x[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> x[i];
    }
    //--------------------------------------------------------------------
    // Sort and print array x
    //--------------------------------------------------------------------
    bubbleSort(x, SIZE);
    println(x, SIZE);
    //--------------------------------------------------------------------
    // Prompt for target to search in array. The index of target in the
    // array is displayed. If target is not found, -1 is printed.
    //--------------------------------------------------------------------
    int target = -1;
    std::cin >> target;
    std::cout << binarySearch(x, SIZE, target)<< std::endl;
    return 0;
}
