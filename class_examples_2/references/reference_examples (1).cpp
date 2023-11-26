/*

    This program shows many examples of the use of references.

    A reference is an alternative name for an entity (variable, object, array, etc).
    References are very useful for simplifying communication between functions.

    A reference is an alternative name for a variable memory address of an existing variable
    (WATCH VIDEO / READ BOOK)
    '
    When a reference variable is declared, a new entity is not created and stored
    in memory; instead, you are simply creating a alternative name for an already
    existing entity.  The original variable and the reference variables are the
    same memory location.

    Naming convention: use little "r" for reference variables


*/

#include <iostream>
using namespace std;

int main()
{

    //  Declare Variables
        int exec_op;

    //  Get User Input
        cout << "Enter the execution option (0 - 8): ";
        cin >> exec_op;

    //  Create Different Examples of References to Run in Class
        if (exec_op == 0)
        {
            // Notice the naming convention used:
            int score = 92;         // Variable
            int& rScore = score;    // Reference Variable (i.e. Alternative Name) (Compound Data Type because its reference variable and a data type)
        }
        else if (exec_op == 1)
        {
            // The following produces a compilation error (Uncomment):
            //int num = 100;
            //double& rNum = num;
        }
        else if (exec_op == 2)
        {
            // Permanent Binding Example:
            // The following produces a compilation error (Uncomment):
            //int temp = 92;
            //int& rTemp = temp;
            //int celcius = 80;
            //int& rTemp = celcius;
        }
        else if (exec_op == 3)
        {
            // The following is perfectly legal:
            int temp2 = 92;
            int& rTemp2 = temp2;
            int celcius2 = 80;
            rTemp2 = celcius2; // Overwrites memory

            // Printing values from data variable and reference variable
            cout << temp2 << " " << rTemp2 << endl;
        }
        else if (exec_op == 4)
        {
            // We can bind multiple reference variables to one variable,
            // but the converse is not true:
            int number = 100;
            int& rNum1 = number;
            int& rNum2 = number;
            int& rNum3 = number;
        }
        else if (exec_op == 5)
        {
            // The following produces a compilation error (Uncomment):
            // We can NOT bind the same reference variable to multiple variables,
            // because we are breaking the reference relation:
            //int alpha = 100;
            //int beta = 200;
            //int& rAlpha = alpha;
            //int& rAlpha = beta;
        }
        else if (exec_op == 6)
        {
            // The following produces a compilation error (Uncomment):
            // You can not bind a reference variable to a literal value:
            //int& myRefVar = 92;
        }
        else if (exec_op == 7)
        {
            // A simple demonstration of reference variables:

            // Create Reference Relations
                int dataVal = 92;
                int& rDataVal = dataVal;

            // Using Data Variable
                cout << "Accessed through data variable: " << endl;
                cout << "Data Value: " << dataVal << endl;

            // Using Reference Variable
                cout << "Accessed through reference variable: " << endl;
                cout << "Data Value: " << rDataVal << endl;
        }
        else if (exec_op == 8)
        {
            // Values in memory can be modified either through the data variable
            // or a reference variable, unless we use the const modifier to prevent
            // changes made to the data:

            // Permitted:
                int here1 = 5;
                int& rHere1 = here1;

            // NOT Permitted (Compliation Error - Uncomment):
                //const int here2 = 5;
                //int& rHere2 = here2;

            // Permitted:
                int here3 = 5;
                const int& rHere3 = here3;

            // Permitted:
                const int here4 = 5; // named constant variable
                const int& rHere4 = here4;

        }

    return 0;
}
