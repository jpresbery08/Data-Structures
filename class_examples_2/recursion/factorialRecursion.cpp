/*  This program claculates the sum of the first n integers using both iteration
    and recursion.  This program also demonstrates the use of a value-returning
    recursive function. */

#include <iostream>
using namespace std;

//  Function Prototypes
long factorial(int n);

// Main Function
int main()
{
    cout << endl << "5! = ";
    cout << factorial(5) << endl << endl;

    return 0;
}

//  Function Definition
long factorial(int n)
{
    // Below is the Base Case that Terminates the Recursion
    if (n <= 1)
    {
        return 1;
    }

    // Below is the General Case
    return n * factorial(n-1);
}
