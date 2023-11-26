/*  This program prints a line of asterisks using both iteration and recursion.
    This program also demonstrates the use of a void recursive function.    */

#include <iostream>
using namespace std;

//  Function Prototypes
void line_iteration(int n);
void line_recursion(int n);

// Main Function
int main()
{

    cout << endl << "Line Using Iteration:" << endl;
    line_iteration(20);

    cout << endl << "Line Using Recursion:" << endl;
    line_recursion(20);

    cout << endl << endl;

    return 0;
}

//  Function Definitions
void line_iteration(int n)
{
    while (n >= 1)
    {
        cout << "*";
        n--;
    }
    return;
}

void line_recursion(int n)
{
    // Base Case
    if (n < 1)
    {
        return;
    }

    // General Case
    cout << "*";
    line_recursion(n-1);
    return;
}
