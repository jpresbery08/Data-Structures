/***************************************************************
 * A program that uses the try-catch block to detect an error  *
 * thrown by a function 					 				 *
 ***************************************************************/
#include <iostream>
using namespace std;

int quotient(int first, int second); // Function declaration

int main()
{
    int num1, num2, result;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an integer: ";
        cin >> num1;
        cout << "Enter another integer: ";
        cin >> num2;

        // The try-catch block
        try
        {
            cout << "Result: " << quotient (num1, num2) << endl;
        }
        catch (int ex)
        {
            cout << "Division by zero cannot be performed." << endl;
        }
    }

    return 0;
}

// Function definition
int quotient(int first, int second)
{
    if (second == 0)
    {
        throw 0;
    }

    return first / second;
}
