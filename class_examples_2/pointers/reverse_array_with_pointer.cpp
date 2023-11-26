/***************************************************************
 * The program shows how a function can reverse the elements   *
 * of an array using a pointer. 				 			 *
 ***************************************************************/
// 9.2 References and pointers need to go over badly

#include <iostream>
using namespace std;

// Function Prototype
void reverse(int* , int );

int main()
{
    // Array declaration and initialization
    int arr[5] = {10, 11, 12, 13, 14};

    // Calling function
    reverse(arr, 5);

    cout << endl;

    // Printing array after reversed
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }

    cout << endl << endl;

    return 0;
}

/*****************************************************************
 * The function uses a pointer to the first element of the array *
 * and the size of the array to reverse the elements in place.   *
 *****************************************************************/

void reverse(int* pArr, int size)
{
    int i = 0;
    int j = size - 1;
    int temp;

    while (i < size / 2)
    {
        temp = *(pArr + i);
        *(pArr + i) = *(pArr + j);
        *(pArr + j) = temp;
        i++;
        j--;
    }
}
