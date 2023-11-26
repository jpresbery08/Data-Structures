/***************************************************************
 * A program that uses the try-catch block to detect an error  *
 * and throw it to be caught and handled by the program		 *
 ***************************************************************/
#include <iostream>
using namespace std;

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
            if (num2 == 0)
            {
                throw 0; // An object of type integer is thrown
            }

            result = num1 /num2;
            cout << "The result is: " << result << endl;
        }
        catch (int x)
        {
            cout << "Division by zero cannot be performed." << endl;
        }
    }

    return 0;
}
