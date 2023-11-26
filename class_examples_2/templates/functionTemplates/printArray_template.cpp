/****************************************************************
 * A program that uses a template function to print elements of *
 * any array of any type. 					  				  *
 ****************************************************************/
// /*

#include <iostream>
using namespace std;

// Definition of the print template function
template <typename T>
void print(T array, int N)
{
    for (int i = 0; i < N ; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main ()
{
    // Creation of two arrays
    int arr1[4] = {7, 3, 5, 1};
    double arr2[3] = {7.5, 6.1, 4.6};

    // Calling template function
    print(arr1, 4);
    print(arr2, 3);

    return 0;
}

// */

/****************************************************************
 * The following displays the same program logic in C++ syntax. *

 Websites to Help:

 https://www.nextptr.com/question/a6212599/passing-cplusplus-arrays-to-function-by-reference
 https://stackoverflow.com/questions/16144535/difference-between-passing-array-fixed-sized-array-and-base-address-of-array-as

 ****************************************************************/

/*

// Definition of the print template function
template <typename T>
void print(T (&array) [N])
{
    for (int i = 0; i < N ; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main ()
{
    // Creation of two arrays
    int arr1[4] = {7, 3, 5, 1};
    double arr2[3] = {7.5, 6.1, 4.6};

    // Calling template function
    print(arr1);
    print(arr2);

    return 0;
}

*/
