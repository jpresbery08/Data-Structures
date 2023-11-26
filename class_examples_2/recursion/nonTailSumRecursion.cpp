/*****************************************************************
    A program using a helping function to create a tail recursive
    function that is more efficient than a non-tail function.

    Learning Points:    1) Helper Functions
                        2) Tail Recursion vs. Non-Tail Recursion
 *****************************************************************/
#include <iostream>
using namespace std;

// Functions declaration
int sum(int n);
int sum_helper(int n, int result);

int main()
{
    // Calling the non-recursive function four times
    cout << "Sum (0) = " << sum(0) << endl;
    cout << "Sum (1) = " << sum(1) << endl;
    cout << "Sum (3) = " << sum(3) << endl;
    cout << "Sum (7) = " << sum(7) << endl << endl;
    return 0;
}

// Non-recursive
    int sum(int n)
    {
        return sum_helper(n, 0);
    }

// Recursive
    int sum_helper(int n, int result)
    {
        if (n == 0)
        {
            return result;
        }
        return sum_helper(n - 1, n + result);
    }
