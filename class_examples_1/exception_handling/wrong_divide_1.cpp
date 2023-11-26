/***************************************************************
 * The program shows how division by zero aborts the program 	 *
 ***************************************************************/
#include <iostream>
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

        result = num1 / num2; // The statement that may create exception
        cout << "The result of division is: " << result << endl;
    }

    return 0;
}
