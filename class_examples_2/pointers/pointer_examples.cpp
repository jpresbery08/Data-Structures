/*  This program shows many examples of the use of references.  */

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
            // We can get the address of a variable using the address operator (&):

            //  Declare Vriables
                bool var1 = true;
                int var2 = 92;
                double var3 = 75.54;

            //  Printing size, value, and address of var1
                cout << "A variable of type bool" << endl;
                cout << "Size: " << sizeof (var1) << " " ;
                cout << "Value: " << var1 << " ";
                cout << "Address: "<< &var1 << endl << endl;

            //  Printing size, value, and address of var2
                cout << "A variable of type int" << endl;
                cout << "Size: " << sizeof (var2) << " " ;
                cout << "Value: " << var2 << " ";
                cout << "Address: "<< &var2 << endl << endl;

            //  Printing size, value, and address of var3
                cout << "A variable of type int" << endl;
                cout << "Size: " << sizeof (var3) << " " ;
                cout << "Value: " << var3 << " ";
                cout << "Address: "<< &var3 << endl << endl;

        }
        else if (exec_op == 1)
        {
            // We can declare pointer variables using an asterisk (*):
            // Notice the naming convention:
            bool* pVar4;
            int* pVar5;
            double* pVar6;
        }
        else if (exec_op == 2)
        {
            // We can declare and initialize pointer variables using an asterisk:
            // and the address operator (&):
            bool var7 = true;
            int var8 = 92;
            double var9 = 75.54;

            bool* pVar7 = &var7; // Pointer contains address
            int* pVar8 = &var8;
            double* pVar9 = &var9;
        }
        else if (exec_op == 3)
        {
            // The following produces a compilation error (Uncomment):
            // We can't initialize with a literal address value, must be valid variable value:
            // double* var10 = 0x123456;
        }
        else if (exec_op == 4)
        {
            // The following produces a compilation error (Uncomment):
            // We must be consistent with the types of variables in the pointer relationship:
            // int var11;
            // double* pVar11 = &var11;
        }
        else if (exec_op == 5)
        {
            // (Lecture Note: Stop to discuss the three uses of the asterisk and ampersand)

            // We can access the value stored in the variable that is pointer to by
            // the pointer by using the indirection/dereference operator (*):
            bool var12 = true;
            int var13 = 92;
            double var14 = 75.54;

            bool* pVar12 = &var12;
            int* pVar13 = &var13;
            double* pVar14 = &var14;

            cout << endl << "var12: " << var12 << " and " << "pVar12: " << *pVar12;
            cout << endl << "var13: " << var13 << " and " << "pVar13: " << *pVar13;
            cout << endl << "var14: " << var14 << " and " << "pVar14: " << *pVar14;

        }
        else if (exec_op == 6)
        {
            // (Lecture Note: Skipping discussion of the const modifier, but the same is true
            // for pointers as references in regards to the const modifier.)

        }
        else if (exec_op == 7)
        {
            // We can have a pointer to a pointer (and so on...):
            int var15 = 92;
            int* pVar15 = &var15;
            int** ppScore = &pVar15;

            cout << "The value of the data variable is: var15 = " << var15 << endl;
            cout << "The pointer to the pointer is: ppScore = " << **ppScore << endl;
        }
        else if (exec_op == 8)
        {
            // The Null Pointer is a pointer that points to no memory location, and
            // we use it to show that the pointer cannot be used until it is bound
            // to a valid variable address.  This is done using a zero (0):
            int* p1 = 0;
            double* p2 = 0;
        }
        else if (exec_op == 9)
        {
            // A void pointer is a generic pointer that can point to any type of object:
            void* p3;
            int x = 10;
            p3 = &x;
            double y = 23.4;
            p3 = &y;
        }

    return 0;
}

// Pointer contains the address to another variable
