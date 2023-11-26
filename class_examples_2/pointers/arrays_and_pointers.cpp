/*****************************************************************
 * This program proves that the system stores the address of each *
 * element in the array in a constant pointer.

 * This program also shows how to access the elements of an array
 * using either the indexes or pointers to elements.
 *****************************************************************/
#include <iostream>
using namespace std;

int main ()
{
    // Declaration of an array of five int
    int arr[5] = {10, 11, 12,13, 14};

    cout << endl;

    // Printing the addresses through pointers and the & operator
    for (int i=0; i<5; i++)
    {
        cout << "Address of cell " << i << " using pointer: ";
        cout << arr + i << endl;
        cout << "Address of cell " << i << " using & operator: ";
        cout << &arr[i] << endl << endl;
    }

    cout << endl << endl;

    for (int i=0; i<5; i++)
    {
        cout << "Value of cell " << i << " using subscript notation: ";
        cout << arr[i] << endl;
        cout << "Address of cell " << i << " using * operator: ";
        cout << *(arr + i) << endl << endl;
    }

    cout << endl;

    return 0;
}
