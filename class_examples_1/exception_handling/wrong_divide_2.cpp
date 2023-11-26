/***************************************************************
 * A program that aborts with an error message. 		 		 *
 ***************************************************************/
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    int num1, num2, result;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter an integer: ";
        cin >> num1;
        cout << "Enter another integer: ";
        cin >> num2;

        if (num2 == 0)
        {
            cout << "No division by zero!. Program is aborted." << endl;
            assert (false);
        }

        result = num1 / num2;
        cout << "The result of division is: " << result << endl;
    }

    return 0;
}
