/***************************************************************
 * A program to show concatenation of strings and characters.  *
 ***************************************************************/

    #include <string>
    #include <iostream>
    using namespace std;

    int main()
    {
        // Declarations
        string first, last;
        char init;

        // Input first, last, and initial
        cout << "Enter first name: ";
        cin >> first;
        cout << "Enter last name: ";
        cin >> last;
        cout << "Enter initial: ";
        cin >> init;

        // Printing the full name in one format
        cout << endl;
        cout << "Full name in first format: ";
        cout << first + " " + init + "." + " " + last << endl << endl;

        // Printing the full name in another format
        cout << "Full name in second format: ";
        cout << last + ", " + first + " " + init + "." << endl;

        return 0;
    }
