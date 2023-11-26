/***************************************************************
 * A program to find the greatest common divisor of some pairs *
 ***************************************************************/
#include <iostream>
using namespace std;

// Declaration of gcd function
    int gcd(int first, int second);

    int main()
    {
        // Checking gcd of five pairs
        cout << "gcd(8, 6) = " << gcd(8, 6) << endl;
        cout << "gcd(9, 12) = " << gcd(9, 12) << endl;
        cout << "gcd(7, 11) = " << gcd(7, 11) << endl;
        cout << "gcd(21, 35) = " << gcd(21, 35) << endl;
        cout << "gcd(140, 12) = " << gcd(140, 12);

        return 0;
    }

// Recursive definition of greatest common divisor
    int gcd (int first, int second)
    {
        if (second == 0)
        {
            return first;
        }
        else
        {
            return gcd(second, first % second);
        }
    }
