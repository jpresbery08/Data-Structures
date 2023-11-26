/***************************************************************
 * A program that uses the return value of a function to show  *
 * the occurrence of a run-time error 			 			 *
 ***************************************************************/
#include <iostream>
using namespace std;

// Function declaration
int quotient (int first, int second);

int main()
{
    int num1, num2, result;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an integer: ";
        cin >> num1;
        cout << "Enter another integer: ";
        cin >> num2;

        result = quotient(num1, num2);

        if (result == -1)
        {
            cout << "Error, division by zero." << endl;
        }
        else
        {
            cout << "Result of division is: " << result << endl;
        }
    }

    return 0;
}

// Function definition
int quotient(int first, int second)
{
    if (second == 0)
    {
        return -1;
    }

    return (first / second);
}
