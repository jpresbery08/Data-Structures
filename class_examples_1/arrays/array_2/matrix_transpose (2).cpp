/**************************************************************
 * A program that transposes a two-deimensional matrix        *
 **************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // Declare Variables and Arrays
    int rowSize = 6;
    int colSize = 6;
    int originalArray[6][6] =  {{1, 2, 3, 4, 5, 6},
                                {7, 8, 9, 10, 11, 12},
                                {13, 14, 15, 16, 17, 18},
                                {19, 20, 21, 22, 23, 24},
                                {25, 26, 27, 28, 29, 30},
                                {31, 32, 33, 34, 35, 36}};
    int transposedArray[6][6];

    // Print originalArray
        cout << endl << "Original Array:" << endl;
        for (int i=0; i<rowSize; i++)
        {
            for (int j=0; j<colSize; j++)
            {
                cout << setw(4) << originalArray[i][j];
            }
            cout << endl;
        }


    // Matrix Transpose
    for (int i=0; i<rowSize; i++)
    {
    	for (int j=0; j<colSize; j++)
    	{
    		transposedArray[j][i] = originalArray[i][j];
    	}
    }

    // Print transposedArray
        cout << endl << "Transposed Array:" << endl;
        for (int i=0; i<rowSize; i++)
        {
            for (int j=0; j<colSize; j++)
            {
                cout << setw(4) << transposedArray[i][j];
            }
            cout << endl;
        }
        cout << endl;

    return 0;

}
