/***************************************************************
 * A program that uses traditional error checking to prevent 	 *
 * program abortion 					 					 *
 ***************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter an integer: ";
        cin >> num1;
        cout << "Enter another integer: ";
        cin >> num2;

        if (num2 == 0)
        {
            cout << "Division cannot be done in this case." << endl;
        }
        else
        {
            result = num1 / num2;
            cout << "The result of division is: " << result << endl;
        }
    }

    return 0;
}
