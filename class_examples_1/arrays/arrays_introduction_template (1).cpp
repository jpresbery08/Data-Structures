/*  This program demonstrates how one-dimensional arrays work in C++.

    A one-dimensional array is a sequence of data items of the same built-in
    or user-defined type.  A compound type is a structure that contains two
    types; the array is the first type and the data type in the array is the
    second type.

    Arrays have three attributes: type, capacity, and size.

    General Declaration Form: type name[CAPACITY];
    CAPACITY must be either a named constant or a literal.

    Array elements are zero-indexed.

*/

#include <iostream>
using namespace std;

int main()
{
    // Declare One-Dimensional Arrays using Literal Values
    double myArr1[8];
    int myArr2[5];

    // Declare One-Dimensional Arrays using Constants
    const int CONST_1 = 7;
    int array_3[CONST_1];

    const int CONST_2 = 5;
    int array_4[CONST_2];

    // Arrays can be Initialized using Curly Braces
    // ONLY AT THE TIME THEY ARE DECLARED
    double array_3[CONST_1] = {1.0 , 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};

    // Arrays are usually Initialized in Loops
        for (int i = 0; i < CONST_1; i++)
        {
            array_3[i] = 2*i + 1;
        }

    // Arrays are Referenced using Zero Indexing
        cout << endl << "Printing contents of array_3: " << endl;
        for (int i = 0; i < CONST_1; i++)
        {
          cout << array_3[i] << " ";
        }
        cout << endl << endl;

    // Partial Default Filling
        const int CONST_3 = 10;
        int array_6[CONST_3] = {81, 82, 83};
        double array_7[CONST_3] = {0.0};

    // Print Array 6
        cout << endl << "Printing contents of array_6 and array_7: " << endl;
        cout << "array_6 = [";
        for (int i = 0; i < CONST_3-1; i++)
        {
            cout << array_6[i] << ", ";
        };
        cout << array_6[CONST_3-1] << "]" << endl << endl;

    // Print Array 7
        cout << "array_7 = [";
        for (int i = 0; i < CONST_3-1; i++)
        {
            cout << array_7[i] << ", ";
        };
        cout << array_7[CONST_3-1] << "]" << endl << endl;

    // DO NOT EVER ACCESS ARRAY ELEMENTS OUTSIDE THE ARRAY BOUNDS!
    // THIS IS CALLED AN OUT-OF-RANGE ERROR, AND THE COMPILER WON'T THROW AN ERROR
    // IT IS REALLY REALLY BAD TO WRITE OUTSIDE THE BOUNDS OF AN ARRAY
        cout << endl << "Printing contents of array_3 AND extra garbage: " << endl;
        for (int i = 0; i < 50; i++)
        {
          cout << array_3[i] << " ";
        }
        cout << endl << endl;

    // What is an array name, exactly?
    // It is a pointer to the memory location of the first element of the array!
    // An array is a constant pointer to the 1st element of an array
    // Pointer Variable holds the address of the data variable that it points too
        cout << endl << "Printing memory address of first element:" << endl;


    return 0;
}
