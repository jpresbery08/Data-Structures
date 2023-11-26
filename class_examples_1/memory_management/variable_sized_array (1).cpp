/***************************************************************
 * The program shows how to create and access a variable-size  *
 * array in the heap and use pointers to access elements.      *
 ***************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Declaration of array size and the pointer in the stack
    int size;
    int* pArray;

    // Validation of the size to be greater than zero
    do
    {
        cout << "Enter the array size (larger than zero): ";
        cin >> size;
    } while (size <= 0);

    // Creation of array in the heap
    pArray = new int[size];

    cout << endl;

    // Inputting the values of array
    for (int i = 0; i < size ; i++)
    {
        cout << "Enter the value for element " << i << ": ";
        cin >> *(pArray + i);
    }

    cout << endl;

    // Outputting the values of the array
    cout << "The elements in the array are: " << endl;
    for (int i=0; i<size; i++)
    {
        cout << *(pArray + i) << " ";
    }

    cout << endl << endl;

    // Deleting the array in the heap
    delete [] pArray;

    return 0;
}
