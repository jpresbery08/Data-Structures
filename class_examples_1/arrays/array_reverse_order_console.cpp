/*  In this program you will learn how to use an array to read a list of integers
    and output them in reverse order of reading.  You will also learn about a new
    type of while loop, called a do-while.  */

#include <iostream>
using namespace std;

int main()
{
    // Declarations
    const int CAPACITY = 10;
    int numbers[CAPACITY];
    int size;

    // Get "size" from user and validate it
    // A naive approach to "Exception Handling"
    do  // First do the code and then see if it is true xDDDDDD
    {
        cout << "Enter the array size between [1, 10]: ";
        cin >> size;
    } while (size < 1 || size > CAPACITY);

    // Get numbers from user
    cout << endl << "Enter " << size << " numbers separated by spaces: "
    << endl;
    for (int i=0; i < size; i++)
    {
        cin >> numbers[i];
    }

    // Output integers in reverse order
    cout << endl << "These intgers in reverse order are: ";
    for (int i=size-1; i>=0; i--)
    {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    return 0;
}
