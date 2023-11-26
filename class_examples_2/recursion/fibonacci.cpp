/***************************************************************
 * A program to find the Fibonacci values 			 		 *
 ***************************************************************/
#include <iostream>
using namespace std;

// Function declaration
    long long fib(int n);

    int main()
    {
        // Testing Fibonacci 0 to 10
        cout << "Fibonacci numbers from 0 to 10" << endl;
        for (int i=0; i<=10; i++)
        {
            cout << "fib(" << i << ") = " << fib(i) << endl;
        }
        cout << endl;

        // Testing Fibonacci numbers of 35 and 36
        cout << "Fibonacci numbers of 35 and 36" << endl;
        cout << "fib(35) = " << fib(35) << endl;
        cout << "fib(36) = " << fib(36) << endl;

        return 0;
    }

// Function Definition
    long long fib(int n)
    {
        if (n==0 || n==1)
        {
            return n;
        }
        else
        {
            return (fib(n-2) + fib(n-1));
        }
    }
