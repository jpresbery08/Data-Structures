// This program prints a two dimensional arrays

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // Function Prototype (Declaration)
    // Need to ensure that you add the size of the column because it will have to be only that size meaning that you can have any row size but
    // must only have 4 columns
    void printTwoDArray(const int myarray[][4], int rowSize, int colSize);

    // [0][0] = 1
    // [3][1]
    // [row][column]

    int my_array[4][4] = {{1, 2, 3, 4},
                          {1, 2, 3, 4},
                          {1, 2, 3, 4},
                          {1, 2, 3, 4}};
    int rowSize = 4;
    int colSize = 4;

    printTwoDArray(my_array, rowSize, colSize);

    return 0;
}
    //Have to have a number at the end of myarray[][4] since it is a 2d array
void printTwoDArray(const int myarray[][4], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j<colSize; j++)
        {
            cout << setw(4) << myarray[i][j]; // the setw() just puts space between the rows & columns
        }
        cout << endl;
    }
}
