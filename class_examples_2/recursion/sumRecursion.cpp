/*  This program claculates the sum of the first n integers using both iteration
    and recursion.  This program also demonstrates the use of a value-returning
    recursive function. */

#include <iostream>
using namespace std;

//  Function Prototypes
int sum_iteration(int n);
int sum_recursion(int n);

// Main Function
int main()
{

    cout << endl << "Sum of First 15 Integers Using Iteration:" << endl;
    cout << sum_iteration(15);

    cout << endl << "Sum of First 15 Integers Using Recursion:" << endl;
    cout << sum_recursion(15);

    cout << endl << endl;

    return 0;
}

//  Function Definitions
int sum_iteration(int n)
{
    int result = 0;
    while (n >= 0)
    {
        result += n;
        n--;
    }
    return result;
}

int sum_recursion(int n)
{
    // Below is the Base Case that Terminates the Recursion
    if (n <= 0)
    {
        return 0;
    }

    // Below is the General Case
    return sum_recursion(n-1) + n;
}
