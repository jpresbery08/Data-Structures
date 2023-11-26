/***************************************************************
 * This program shows how to use an object of invalid_argument *
 * to detect division by zero in a function. 		 		 *
 ***************************************************************/
#include <stdexcept>
#include <iostream>
using namespace std;

// Function declaration
int quotient(int first, int second);

int main()
{
    int num1, num2, result;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an integer: ";
        cin >> num1;
        cout << "Enter another integer: ";
        cin >> num2;
    }
        // Try-Catch block
        try
        {
            cout << "Result:  " << num1 << " / " << num2 << quotient(num1, num2);
            cout << endl;
        }
        catch (invalid_argument ex)
        {
            cout << ex.what () << endl;
        }
    }
    return 0;
}

// Function definition
int quotient(int first, int second)
{
    if (second == 0)
    {
        throw invalid_argument ("Error! Divide by zero!");
    }

    return first / second;
}
